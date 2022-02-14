
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nl_msg {int dummy; } ;
struct get_neigh_handler {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct nl_msg*,int *,struct get_neigh_handler*) ;

__attribute__((used)) static int FUNC_1(struct nl_msg *VAR_4, void *VAR_5)
{
 struct get_neigh_handler *VAR_6 =
  (struct get_neigh_handler *)VAR_5;

 if (FUNC_0(VAR_4, &VAR_3, VAR_6) < 0)
  VAR_2 = VAR_0;

 return VAR_1;
}
