
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ls_event; scalar_t__ ls_count; scalar_t__ ls_lock; scalar_t__ ls_caller; scalar_t__* ls_stack; scalar_t__ ls_next; scalar_t__ ls_time; } ;
typedef TYPE_1__ lsrec_t ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 char* FUNC_2 (char*,scalar_t__,int ) ;
 int FUNC_3 (int *,char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_4(FILE *VAR_4, lsrec_t **VAR_5)
{
 lsrec_t *VAR_6;
 int VAR_7, VAR_8;
 int VAR_9;
 char VAR_10[256], VAR_11[256];

 VAR_9 = VAR_3;

 if (!VAR_2) {
  (void) FUNC_3(VAR_4, "%5s  %7s  %11s  %-24s  %-24s\n",
      "Event", "Time", "Owner", "Lock", "Caller");
  (void) FUNC_3(VAR_4, "---------------------------------"
      "----------------------------------------------\n");
 }

 for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) {

  VAR_6 = VAR_5[VAR_7];

  if (VAR_6->ls_event >= VAR_0 || VAR_6->ls_count == 0)
   continue;

  (void) FUNC_3(VAR_4, "%2d  %10llu  %11p  %-24s  %-24s\n",
      VAR_6->ls_event, (unsigned long long)VAR_6->ls_time,
      (void *)VAR_6->ls_next,



      VAR_6->ls_lock,

      FUNC_2(VAR_11, VAR_6->ls_caller, 0));

  if (VAR_9 <= FUNC_0(0))
   continue;




  for (VAR_8 = 3; VAR_8 > 0; VAR_8--)
   if (VAR_6->ls_stack[VAR_8] == VAR_6->ls_caller)
    break;

  while (VAR_9 > FUNC_0(VAR_8) && VAR_6->ls_stack[VAR_8] != 0) {
   (void) FUNC_3(VAR_4, "%53s  %-24s\n", "",
       FUNC_2(VAR_10, VAR_6->ls_stack[VAR_8], 0));
   VAR_8++;
  }
  (void) FUNC_3(VAR_4, "\n");
 }

 (void) FUNC_1(VAR_4);
}
