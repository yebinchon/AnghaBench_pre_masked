
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
typedef int sockaddr ;
struct linux_getsockname_args {int namelen; int addr; int s; } ;
typedef int l_sockaddr ;
typedef int len ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int*,int**,int) ;
 int FUNC_2 (int ,int*,int) ;
 int FUNC_3 (int*,int ,int) ;
 int FUNC_4 (int*,int ) ;
 int FUNC_5 (struct thread*,int ,int**,int*) ;

int
FUNC_6(struct thread *VAR_1, struct linux_getsockname_args *VAR_2)
{
 struct l_sockaddr *VAR_3;
 struct sockaddr *VAR_4;
 int VAR_5, VAR_6;

 VAR_6 = FUNC_2(FUNC_0(VAR_2->namelen), &VAR_5, sizeof(VAR_5));
 if (VAR_6 != 0)
  return (VAR_6);

 VAR_6 = FUNC_5(VAR_1, VAR_2->s, &VAR_4, &VAR_5);
 if (VAR_6 != 0)
  return (VAR_6);

 if (VAR_5 != 0) {
  VAR_6 = FUNC_1(VAR_4, &VAR_3, VAR_5);
  if (VAR_6 == 0)
   VAR_6 = FUNC_3(VAR_3, FUNC_0(VAR_2->addr),
       VAR_5);
  FUNC_4(VAR_3, VAR_0);
 }

 FUNC_4(VAR_4, VAR_0);
 if (VAR_6 == 0)
  VAR_6 = FUNC_3(&VAR_5, FUNC_0(VAR_2->namelen), sizeof(VAR_5));
 return (VAR_6);
}
