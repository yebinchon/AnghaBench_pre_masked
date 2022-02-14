
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct sockaddr {int dummy; } ;
struct connectat_args {int s; int fd; int namelen; int name; } ;


 int VAR_0 ;
 int FUNC_0 (struct sockaddr*,int ) ;
 int FUNC_1 (struct sockaddr**,int ,int ) ;
 int FUNC_2 (struct thread*,int ,int ,struct sockaddr*) ;

int
FUNC_3(struct thread *VAR_1, struct connectat_args *VAR_2)
{
 struct sockaddr *VAR_3;
 int VAR_4;

 VAR_4 = FUNC_1(&VAR_3, VAR_2->name, VAR_2->namelen);
 if (VAR_4 == 0) {
  VAR_4 = FUNC_2(VAR_1, VAR_2->fd, VAR_2->s, VAR_3);
  FUNC_0(VAR_3, VAR_0);
 }
 return (VAR_4);
}
