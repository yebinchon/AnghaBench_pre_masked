
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct transport {int table; } ;
struct tport {int dummy; } ;
struct asn_oid {int dummy; } ;


 struct tport* FUNC_0 (int *,struct asn_oid const*,int ) ;

struct tport *
FUNC_1(struct transport *VAR_0, const struct asn_oid *VAR_1, u_int VAR_2)
{

 return (FUNC_0(&VAR_0->table, VAR_1, VAR_2));
}
