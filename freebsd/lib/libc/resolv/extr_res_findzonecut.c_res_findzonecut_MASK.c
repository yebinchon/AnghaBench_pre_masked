
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct in_addr {int dummy; } ;
struct TYPE_2__ {struct in_addr sin_addr; } ;
union res_sockaddr_union {TYPE_1__ sin; } ;
typedef int res_state ;
typedef int ns_class ;


 int VAR_0 ;
 int VAR_1 ;
 union res_sockaddr_union* FUNC_0 (int,int) ;
 int FUNC_1 (union res_sockaddr_union*) ;
 int FUNC_2 (int ,char const*,int ,int,char*,size_t,union res_sockaddr_union*,int) ;

int
FUNC_3(res_state VAR_2, const char *VAR_3, ns_class VAR_4, int VAR_5,
  char *VAR_6, size_t VAR_7, struct in_addr *VAR_8, int VAR_9)
{
 int VAR_10, VAR_11;
 union res_sockaddr_union *VAR_12;


 VAR_5 |= VAR_0;
 VAR_5 &= ~VAR_1;

 VAR_12 = FUNC_0(VAR_9, sizeof(*VAR_12));
 if (VAR_12 == ((void*)0))
  return(-1);

 VAR_10 = FUNC_2(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7,
      VAR_12, VAR_9);

 for (VAR_11 = 0; VAR_11 < VAR_10; VAR_11++) {
  VAR_8[VAR_11] = VAR_12[VAR_11].sin.sin_addr;
 }
 FUNC_1(VAR_12);
 return (VAR_10);
}
