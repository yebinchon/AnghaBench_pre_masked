
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlattr {int dummy; } ;
struct ip_vs_timeout_user {void* udp_timeout; void* tcp_fin_timeout; void* tcp_timeout; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (struct ip_vs_timeout_user*) ;
 int FUNC_1 (struct ip_vs_timeout_user*) ;
 void* FUNC_2 (struct nlattr*) ;

__attribute__((used)) static int FUNC_3(struct nlattr **VAR_3)
{
 struct ip_vs_timeout_user VAR_4;

 FUNC_0(&VAR_4);

 if (VAR_3[VAR_0])
  VAR_4.tcp_timeout = FUNC_2(VAR_3[VAR_0]);

 if (VAR_3[VAR_1])
  VAR_4.tcp_fin_timeout =
   FUNC_2(VAR_3[VAR_1]);

 if (VAR_3[VAR_2])
  VAR_4.udp_timeout = FUNC_2(VAR_3[VAR_2]);

 return FUNC_1(&VAR_4);
}
