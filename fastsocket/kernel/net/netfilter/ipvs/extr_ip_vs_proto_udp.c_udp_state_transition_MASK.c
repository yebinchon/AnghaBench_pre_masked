
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct ip_vs_protocol {int * timeout_table; } ;
struct ip_vs_conn {int timeout; } ;


 size_t VAR_0 ;

__attribute__((used)) static int
FUNC_0(struct ip_vs_conn *VAR_1, int VAR_2,
       const struct sk_buff *VAR_3,
       struct ip_vs_protocol *VAR_4)
{
 VAR_1->timeout = VAR_4->timeout_table[VAR_0];
 return 1;
}
