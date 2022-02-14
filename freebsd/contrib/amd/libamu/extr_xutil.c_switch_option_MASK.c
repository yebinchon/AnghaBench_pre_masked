
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ,int*) ;
 int FUNC_1 (int ,char*) ;
 int VAR_3 ;
 int VAR_4 ;

int
FUNC_2(char *VAR_5)
{
  u_int VAR_6 = VAR_3;
  int VAR_7 = FUNC_0(VAR_5, VAR_4, &VAR_6);

  if (VAR_7)
    return VAR_0;





  if ((VAR_6 & VAR_2) != VAR_2) {
    FUNC_1(VAR_1, "cannot turn off mandatory logging options");
    VAR_6 |= VAR_2;
  }
  if (VAR_3 != VAR_6)
    VAR_3 = VAR_6;
  return VAR_7;
}
