
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int voidp ;
typedef scalar_t__ u_short ;
struct sockaddr_in {void* sin_port; int sin_family; } ;
struct sockaddr {int dummy; } ;
typedef int sin ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,struct sockaddr*,int) ;
 void* FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,int ,int) ;

int
FUNC_3(int VAR_2, u_short *VAR_3)
{
  struct sockaddr_in VAR_4;
  int VAR_5;
  u_short VAR_6;

  FUNC_2((voidp) &VAR_4, 0, sizeof(VAR_4));
  VAR_4.sin_family = VAR_0;

  if (VAR_3 && *VAR_3 > 0) {
    VAR_4.sin_port = FUNC_1(*VAR_3);
    VAR_5 = FUNC_0(VAR_2, (struct sockaddr *) &VAR_4, sizeof(VAR_4));
  } else {
    VAR_6 = VAR_1;

    do {
      --VAR_6;
      VAR_4.sin_port = FUNC_1(VAR_6);
      VAR_5 = FUNC_0(VAR_2, (struct sockaddr *) &VAR_4, sizeof(VAR_4));
    } while (VAR_5 < 0 && (int) VAR_6 > VAR_1 / 2);

    if (VAR_3 && VAR_5 == 0)
      *VAR_3 = VAR_6;
  }

  return VAR_5;
}
