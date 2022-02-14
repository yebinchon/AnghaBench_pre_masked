
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct sockaddr_dl {int sdl_len; int sdl_type; int sdl_index; int sdl_family; } ;
struct sockaddr {int dummy; } ;
struct ifnet {int if_index; } ;


 int VAR_0 ;
 int FUNC_0 (struct sockaddr_dl*,int ,int) ;

struct sockaddr_dl *
FUNC_1(struct ifnet *VAR_1, struct sockaddr *VAR_2, u_char VAR_3)
{
 struct sockaddr_dl *VAR_4;

 VAR_4 = (struct sockaddr_dl *)VAR_2;
 FUNC_0(VAR_4, 0, sizeof(struct sockaddr_dl));
 VAR_4->sdl_len = sizeof(struct sockaddr_dl);
 VAR_4->sdl_family = VAR_0;
 VAR_4->sdl_index = VAR_1->if_index;
 VAR_4->sdl_type = VAR_3;

 return (VAR_4);
}
