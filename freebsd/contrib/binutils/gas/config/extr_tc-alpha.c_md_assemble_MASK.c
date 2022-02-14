
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int opname ;
typedef int expressionS ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int *,int,int ) ;
 int FUNC_3 (char*,char*,int) ;
 size_t FUNC_4 (char*,char*) ;
 int FUNC_5 (char*,int *,int) ;

void
FUNC_6 (char *VAR_3)
{

  char VAR_4[32];
  expressionS VAR_5[VAR_0];
  int VAR_6, VAR_7;
  size_t VAR_8;


  VAR_8 = FUNC_4 (VAR_3, "abcdefghijklmnopqrstuvwxyz_/46819");
  VAR_7 = (VAR_8 < sizeof (VAR_4) - 1
       ? VAR_8
       : sizeof (VAR_4) - 1);
  FUNC_3 (VAR_4, VAR_3, VAR_7);
  VAR_4[VAR_7] = '\0';


  if ((VAR_6 = FUNC_5 (VAR_3 + VAR_8, VAR_5, VAR_0)) < 0)
    {
      if (VAR_6 != VAR_1)
 FUNC_1 (FUNC_0("syntax error"));

      return;
    }


  FUNC_2 (VAR_4, VAR_5, VAR_6, VAR_2);
}
