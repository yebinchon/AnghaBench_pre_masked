
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u_int32_t ;
struct TYPE_3__ {int action; int rpool; } ;
struct pfioc_rule {scalar_t__ nr; TYPE_1__ rule; int anchor_call; int ticket; int anchor; } ;
typedef int pr ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

 scalar_t__ FUNC_0 (int,int ,struct pfioc_rule*) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct pfioc_rule*,int ,int) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int,int *,scalar_t__,int ,int,char*) ;
 int FUNC_5 (TYPE_1__*,int) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (TYPE_1__*,int ,int,int) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*) ;

int
FUNC_10(int VAR_5, int VAR_6, char *VAR_7)
{
 struct pfioc_rule VAR_8;
 u_int32_t VAR_9, VAR_10;
 static int VAR_11[3] = { 129, 128, 130 };
 int VAR_12, VAR_13 = VAR_6 & VAR_3;

 FUNC_2(&VAR_8, 0, sizeof(VAR_8));
 FUNC_1(VAR_8.anchor, VAR_7, sizeof(VAR_8.anchor));
 for (VAR_12 = 0; VAR_12 < 3; VAR_12++) {
  VAR_8.rule.action = VAR_11[VAR_12];
  if (FUNC_0(VAR_5, VAR_1, &VAR_8)) {
   FUNC_9("DIOCGETRULES");
   return (-1);
  }
  VAR_9 = VAR_8.nr;
  for (VAR_10 = 0; VAR_10 < VAR_9; ++VAR_10) {
   VAR_8.nr = VAR_10;
   if (FUNC_0(VAR_5, VAR_0, &VAR_8)) {
    FUNC_9("DIOCGETRULE");
    return (-1);
   }
   if (FUNC_4(VAR_5, &VAR_8.rule.rpool, VAR_10,
       VAR_8.ticket, VAR_11[VAR_12], VAR_7) != 0)
    return (-1);
   if (VAR_13) {
    FUNC_6("TRANSLATION RULES:");
    VAR_13 = 0;
   }
   FUNC_7(&VAR_8.rule, VAR_8.anchor_call,
       VAR_6 & VAR_4, VAR_6 & VAR_2);
   FUNC_8("\n");
   FUNC_5(&VAR_8.rule, VAR_6);
   FUNC_3(&VAR_8.rule.rpool);
  }
 }
 return (0);
}
