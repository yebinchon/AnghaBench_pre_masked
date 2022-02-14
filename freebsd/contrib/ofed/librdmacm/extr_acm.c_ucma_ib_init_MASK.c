
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {int sin_port; TYPE_1__ sin_addr; int sin_family; } ;
struct sockaddr {int dummy; } ;
typedef int addr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,struct sockaddr*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct sockaddr_in*,int ,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_7 (int ,int,int ) ;
 int FUNC_8 () ;

void FUNC_9(void)
{
 struct sockaddr_in VAR_8;
 static int VAR_9;
 int VAR_10;

 if (VAR_9)
  return;

 FUNC_5(&VAR_5);
 if (VAR_9)
  goto unlock;

 if (!FUNC_8())
  goto out;

 VAR_7 = FUNC_7(VAR_0, VAR_4 | VAR_3, VAR_2);
 if (VAR_7 < 0)
  goto out;

 FUNC_4(&VAR_8, 0, sizeof VAR_8);
 VAR_8.sin_family = VAR_0;
 VAR_8.sin_addr.s_addr = FUNC_3(VAR_1);
 VAR_8.sin_port = FUNC_2(VAR_6);
 VAR_10 = FUNC_1(VAR_7, (struct sockaddr *) &VAR_8, sizeof(VAR_8));
 if (VAR_10) {
  FUNC_0(VAR_7);
  VAR_7 = -1;
 }
out:
 VAR_9 = 1;
unlock:
 FUNC_6(&VAR_5);
}
