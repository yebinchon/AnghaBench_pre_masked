
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty {int t_inq; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (char) ;
 scalar_t__ FUNC_2 (char) ;
 int VAR_1 ;
 int FUNC_3 (struct tty*) ;
 scalar_t__ FUNC_4 (int *,char*,int*) ;

__attribute__((used)) static void
FUNC_5(struct tty *VAR_2)
{
 char VAR_3;
 int VAR_4, VAR_5;


 for (;;) {
  if (FUNC_4(&VAR_2->t_inq, &VAR_3, &VAR_4) != 0)
   return;
  if (!FUNC_2(VAR_3))
   break;
  FUNC_3(VAR_2);
 }





 VAR_5 = FUNC_1(VAR_3);
 for (;;) {
  FUNC_3(VAR_2);

  if (FUNC_4(&VAR_2->t_inq, &VAR_3, &VAR_4) != 0)
   return;
  if (FUNC_2(VAR_3))
   return;
  if (FUNC_0(VAR_1, VAR_0) && FUNC_1(VAR_3) != VAR_5)
   return;
 }
}
