
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;


 int VAR_0 ;







 int VAR_1 ;
 int FUNC_0 (char*,char*) ;
 int VAR_2 ;
 int FUNC_1 (int ,char*,char*) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (char*,int ) ;

int
FUNC_4(char *VAR_3, const char *VAR_4, u_int VAR_5)
{
  int VAR_6;

eintr:
  VAR_6 = FUNC_3(VAR_3, 0);
  if (VAR_6 < 0)
    VAR_6 = VAR_2;

  switch (VAR_6) {
  case 132:
  case 129:
  case 130:
    FUNC_1(VAR_1, "unmount: %s is not mounted", VAR_3);
    VAR_6 = 0;
    break;

  case 133:

    FUNC_0("%s: unmount: %m", VAR_3);
    goto eintr;
  default:
    FUNC_0("%s: unmount: %m", VAR_3);
    break;
  }

  return VAR_6;
}
