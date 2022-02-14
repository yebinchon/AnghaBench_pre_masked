
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int ;
struct asn_oid {size_t len; int * subs; } ;


 int FUNC_0 (int *,int *,int) ;

void
FUNC_1(struct asn_oid *VAR_0, const struct asn_oid *VAR_1,
    u_int VAR_2, u_int VAR_3)
{
 if (VAR_2 >= VAR_3) {
  VAR_0->len = 0;
  return;
 }
 VAR_0->len = VAR_3 - VAR_2;
 FUNC_0(VAR_0->subs, &VAR_1->subs[VAR_2], VAR_0->len * sizeof(VAR_0->subs[0]));
}
