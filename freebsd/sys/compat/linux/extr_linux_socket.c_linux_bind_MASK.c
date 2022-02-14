
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct sockaddr_in {int dummy; } ;
struct sockaddr {int dummy; } ;
struct linux_bind_args {int namelen; int s; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct sockaddr*,int ) ;
 int FUNC_2 (struct thread*,int ,int ,struct sockaddr*) ;
 int FUNC_3 (int ,struct sockaddr**,int*) ;

int
FUNC_4(struct thread *VAR_4, struct linux_bind_args *VAR_5)
{
 struct sockaddr *VAR_6;
 int VAR_7;

 VAR_7 = FUNC_3(FUNC_0(VAR_5->name), &VAR_6,
     &VAR_5->namelen);
 if (VAR_7 != 0)
  return (VAR_7);

 VAR_7 = FUNC_2(VAR_4, VAR_0, VAR_5->s, VAR_6);
 FUNC_1(VAR_6, VAR_3);


 if (VAR_7 == VAR_1 && VAR_5->namelen != sizeof(struct sockaddr_in))
  return (VAR_2);
 return (VAR_7);
}
