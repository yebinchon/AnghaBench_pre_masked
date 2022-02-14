
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct sroute {int * index; } ;
struct asn_oid {int len; int * subs; } ;



__attribute__((used)) static void
FUNC_0(struct asn_oid *VAR_0, u_int VAR_1, const struct sroute *VAR_2)
{
 int VAR_3;

 VAR_0->len = VAR_1 + 13;
 for (VAR_3 = 0; VAR_3 < 13; VAR_3++)
  VAR_0->subs[VAR_1 + VAR_3] = VAR_2->index[VAR_3];
}
