
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct futx {int fu_user; } ;
typedef int off_t ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct futx*,int,int,int *) ;
 int FUNC_2 (int *,int ,int ) ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (struct futx const*,int,int,int *) ;
 scalar_t__ FUNC_5 (int ,int ,int) ;

__attribute__((used)) static int
FUNC_6(const struct futx *VAR_3)
{
 struct futx VAR_4;
 FILE *VAR_5;
 int VAR_6, VAR_7;

 VAR_7 = 0;






 VAR_5 = FUNC_3(VAR_1);
 if (VAR_5 == ((void*)0))
  return (-1);
 while (FUNC_1(&VAR_4, sizeof VAR_4, 1, VAR_5) == 1) {
  if (FUNC_5(VAR_3->fu_user, VAR_4.fu_user, sizeof VAR_4.fu_user) != 0)
   continue;


  VAR_7 = FUNC_2(VAR_5, -(off_t)sizeof VAR_4, VAR_0);
  break;
 }
 if (VAR_7 == -1)
  VAR_6 = VAR_2;
 else if (FUNC_4(VAR_3, sizeof *VAR_3, 1, VAR_5) < 1) {
  VAR_6 = VAR_2;
  VAR_7 = -1;
 }
 FUNC_0(VAR_5);
 if (VAR_7 == -1)
  VAR_2 = VAR_6;
 return (VAR_7);
}
