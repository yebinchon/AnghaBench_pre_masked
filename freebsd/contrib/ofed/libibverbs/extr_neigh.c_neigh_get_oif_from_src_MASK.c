
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct get_neigh_handler {int src; } ;
struct addrinfo {int ai_addr; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct addrinfo*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,struct addrinfo**) ;

int FUNC_3(struct get_neigh_handler *VAR_3)
{
 int VAR_4 = -VAR_0;
 struct addrinfo *VAR_5;
 int VAR_6;

 VAR_6 = FUNC_2(VAR_3->src, &VAR_5);
 if (VAR_6) {
  if (!VAR_2)
   VAR_2 = VAR_1;
  return VAR_4;
 }

 VAR_4 = FUNC_1(VAR_5->ai_addr);
 if (VAR_4 <= 0)
  goto free;

free:
 FUNC_0(VAR_5);
 return VAR_4;
}
