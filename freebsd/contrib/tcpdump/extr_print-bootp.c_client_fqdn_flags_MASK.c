
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static char *
FUNC_0(u_int VAR_4)
{
 static char VAR_5[8+1];
 int VAR_6 = 0;

 if (VAR_4 & VAR_3)
  VAR_5[VAR_6++] = 'S';
 if (VAR_4 & VAR_2)
  VAR_5[VAR_6++] = 'O';
 if (VAR_4 & VAR_0)
  VAR_5[VAR_6++] = 'E';
 if (VAR_4 & VAR_1)
  VAR_5[VAR_6++] = 'N';
 VAR_5[VAR_6] = '\0';

 return VAR_5;
}
