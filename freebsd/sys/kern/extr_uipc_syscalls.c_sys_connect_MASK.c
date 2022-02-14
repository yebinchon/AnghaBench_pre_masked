
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct sockaddr {int dummy; } ;
struct connect_args {int s; int namelen; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sockaddr*,int ) ;
 int FUNC_1 (struct sockaddr**,int ,int ) ;
 int FUNC_2 (struct thread*,int ,int ,struct sockaddr*) ;

int
FUNC_3(struct thread *VAR_2, struct connect_args *VAR_3)
{
 struct sockaddr *VAR_4;
 int VAR_5;

 VAR_5 = FUNC_1(&VAR_4, VAR_3->name, VAR_3->namelen);
 if (VAR_5 == 0) {
  VAR_5 = FUNC_2(VAR_2, VAR_0, VAR_3->s, VAR_4);
  FUNC_0(VAR_4, VAR_1);
 }
 return (VAR_5);
}
