
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
typedef int sockaddr ;
struct linux_getpeername_args {int namelen; int addr; int s; } ;
typedef int l_sockaddr ;
typedef int len ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int*,int**,int) ;
 int FUNC_2 (int ,int*,int) ;
 int FUNC_3 (int*,int ,int) ;
 int FUNC_4 (int*,int ) ;
 int FUNC_5 (struct thread*,int ,int**,int*) ;

int
FUNC_6(struct thread *VAR_2, struct linux_getpeername_args *VAR_3)
{
 struct l_sockaddr *VAR_4;
 struct sockaddr *VAR_5;
 int VAR_6, VAR_7;

 VAR_7 = FUNC_2(FUNC_0(VAR_3->namelen), &VAR_6, sizeof(VAR_6));
 if (VAR_7 != 0)
  return (VAR_7);
 if (VAR_6 < 0)
  return (VAR_0);

 VAR_7 = FUNC_5(VAR_2, VAR_3->s, &VAR_5, &VAR_6);
 if (VAR_7 != 0)
  return (VAR_7);

 if (VAR_6 != 0) {
  VAR_7 = FUNC_1(VAR_5, &VAR_4, VAR_6);
  if (VAR_7 == 0)
   VAR_7 = FUNC_3(VAR_4, FUNC_0(VAR_3->addr),
       VAR_6);
  FUNC_4(VAR_4, VAR_1);
 }

 FUNC_4(VAR_5, VAR_1);
 if (VAR_7 == 0)
  VAR_7 = FUNC_3(&VAR_6, FUNC_0(VAR_3->namelen), sizeof(VAR_6));
 return (VAR_7);
}
