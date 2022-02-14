
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty {int t_outq; scalar_t__ t_column; } ;


 scalar_t__ FUNC_0 (int ,char) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (char,int) ;
 scalar_t__ FUNC_3 (char,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (struct tty*,char) ;
 int FUNC_5 (int *,char*,int) ;

__attribute__((used)) static int
FUNC_6(struct tty *VAR_5, char VAR_6, int VAR_7)
{

 if (FUNC_1(VAR_4, VAR_1) && FUNC_2(VAR_6, VAR_7)) {




  return FUNC_4(VAR_5, VAR_6);
 } else if (FUNC_1(VAR_3, VAR_0) && FUNC_3(VAR_6, VAR_7)) {






  char VAR_8[4] = "^?\b\b";


  if (VAR_6 != 0x7f)
   VAR_8[1] = VAR_6 + 'A' - 1;

  if (!VAR_7 && FUNC_0(VAR_2, VAR_6)) {
   return FUNC_5(&VAR_5->t_outq, VAR_8, 4);
  } else {
   VAR_5->t_column += 2;
   return FUNC_5(&VAR_5->t_outq, VAR_8, 2);
  }
 } else {

  VAR_5->t_column++;
  return FUNC_5(&VAR_5->t_outq, &VAR_6, 1);
 }
}
