
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int backgnd; struct nodelist* cmdlist; } ;
union node {TYPE_1__ npipe; } ;
struct nodelist {int n; struct nodelist* next; } ;
struct job {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int) ;
 int VAR_3 ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (int ,int ) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_5 (struct job*,int ,int ) ;
 struct job* FUNC_6 (union node*,int) ;
 scalar_t__ FUNC_7 (int*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (struct job*,int*) ;

__attribute__((used)) static void
FUNC_11(union node *VAR_5)
{
 struct job *VAR_6;
 struct nodelist *VAR_7;
 int VAR_8;
 int VAR_9;
 int VAR_10[2];

 FUNC_0(("evalpipe(%p) called\n", (void *)VAR_5));
 VAR_8 = 0;
 for (VAR_7 = VAR_5->npipe.cmdlist ; VAR_7 ; VAR_7 = VAR_7->next)
  VAR_8++;
 VAR_1;
 VAR_6 = FUNC_6(VAR_5, VAR_8);
 VAR_9 = -1;
 for (VAR_7 = VAR_5->npipe.cmdlist ; VAR_7 ; VAR_7 = VAR_7->next) {
  FUNC_8(VAR_7->n);
  VAR_10[1] = -1;
  if (VAR_7->next) {
   if (FUNC_7(VAR_10) < 0) {
    if (VAR_9 >= 0)
     FUNC_1(VAR_9);
    FUNC_3("Pipe call failed: %s", FUNC_9(VAR_3));
   }
  }
  if (FUNC_5(VAR_6, VAR_7->n, VAR_5->npipe.backgnd) == 0) {
   VAR_2;
   if (VAR_9 > 0) {
    FUNC_2(VAR_9, 0);
    FUNC_1(VAR_9);
   }
   if (VAR_10[1] >= 0) {
    if (!(VAR_9 >= 0 && VAR_10[0] == 0))
     FUNC_1(VAR_10[0]);
    if (VAR_10[1] != 1) {
     FUNC_2(VAR_10[1], 1);
     FUNC_1(VAR_10[1]);
    }
   }
   FUNC_4(VAR_7->n, VAR_0);
  }
  if (VAR_9 >= 0)
   FUNC_1(VAR_9);
  VAR_9 = VAR_10[0];
  if (VAR_10[1] != -1)
   FUNC_1(VAR_10[1]);
 }
 VAR_2;
 if (VAR_5->npipe.backgnd == 0) {
  VAR_1;
  VAR_4 = FUNC_10(VAR_6, (int *)((void*)0));
  FUNC_0(("evalpipe:  job done exit status %d\n", VAR_4));
  VAR_2;
 } else
  VAR_4 = 0;
}
