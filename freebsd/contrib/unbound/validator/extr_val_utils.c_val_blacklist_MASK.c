
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock_list {struct sock_list* next; } ;
struct regional {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct sock_list**,int *,int ,struct regional*) ;
 int FUNC_1 (scalar_t__,char*,struct sock_list*) ;
 int FUNC_2 (struct sock_list**,struct regional*,struct sock_list*) ;
 int FUNC_3 (struct sock_list**,struct sock_list*) ;
 int FUNC_4 (scalar_t__,char*) ;
 scalar_t__ VAR_1 ;

void FUNC_5(struct sock_list** VAR_2, struct regional* VAR_3,
 struct sock_list* VAR_4, int VAR_5)
{

 if(VAR_1 >= VAR_0) {
  struct sock_list* VAR_6;
  for(VAR_6=*VAR_2; VAR_6; VAR_6=VAR_6->next)
   FUNC_1(VAR_0, "blacklist", VAR_6);
  if(!VAR_4)
   FUNC_4(VAR_0, "blacklist add: cache");
  for(VAR_6=VAR_4; VAR_6; VAR_6=VAR_6->next)
   FUNC_1(VAR_0, "blacklist add", VAR_6);
 }

 if(!VAR_4) {

  if(!*VAR_2)
   FUNC_0(VAR_2, ((void*)0), 0, VAR_3);
 } else if(!VAR_5)
  FUNC_3(VAR_2, VAR_4);
 else FUNC_2(VAR_2, VAR_3, VAR_4);
}
