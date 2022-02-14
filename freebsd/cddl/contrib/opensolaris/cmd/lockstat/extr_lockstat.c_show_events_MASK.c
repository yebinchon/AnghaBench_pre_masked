
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char ev_type; char* ev_desc; } ;
typedef TYPE_1__ ls_event_info_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,...) ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (char*,char*,int) ;

__attribute__((used)) static void
FUNC_2(char VAR_3, char *VAR_4)
{
 int VAR_5, VAR_6 = -1, VAR_7;

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  ls_event_info_t *VAR_8 = &VAR_1[VAR_5];
  if (VAR_8->ev_type != VAR_3 ||
      FUNC_1(VAR_8->ev_desc, "Unknown event", 13) == 0)
   continue;
  if (VAR_6 == -1)
   VAR_6 = VAR_5;
  VAR_7 = VAR_5;
 }

 (void) FUNC_0(VAR_2,
     "\n%s events (lockstat -%c or lockstat -e %d-%d):\n\n",
     VAR_4, VAR_3, VAR_6, VAR_7);

 for (VAR_5 = VAR_6; VAR_5 <= VAR_7; VAR_5++)
  (void) FUNC_0(VAR_2,
      "%4d = %s\n", VAR_5, VAR_1[VAR_5].ev_desc);
}
