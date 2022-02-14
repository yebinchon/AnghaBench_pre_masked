
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_short ;
struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {int sin_port; TYPE_1__ sin_addr; int sin_family; } ;
struct sockaddr {int dummy; } ;
typedef int addr ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int,struct sockaddr*,int) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct sockaddr_in*,int ,int) ;
 int FUNC_4 (int ,int,int ) ;

__attribute__((used)) static int
FUNC_5(int VAR_6)
{
  int VAR_7;
  struct sockaddr_in VAR_8;
  int VAR_9;

  FUNC_3(&VAR_8, 0, sizeof(VAR_8));


  VAR_8.sin_family = VAR_0;
  VAR_8.sin_addr.s_addr = VAR_3;
  if ((VAR_9 = FUNC_4(VAR_0, VAR_6, 0)) < 0)
    return -1;

  for (VAR_7 = VAR_4 - 1; VAR_7 > VAR_4 / 2 + 1; VAR_7--) {
    VAR_8.sin_port = FUNC_2((u_short) VAR_7);
    if (FUNC_0(VAR_9, (struct sockaddr *) &VAR_8, sizeof(VAR_8)) >= 0)
      return VAR_9;
    if (VAR_5 != VAR_1) {
      FUNC_1(VAR_9);
      return -1;
    }
  }
  FUNC_1(VAR_9);
  VAR_5 = VAR_2;
  return -1;
}
