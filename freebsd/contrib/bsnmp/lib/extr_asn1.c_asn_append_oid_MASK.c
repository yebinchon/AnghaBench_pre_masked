
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct asn_oid {size_t len; int * subs; } ;


 int FUNC_0 (int *,int *,int) ;

void
FUNC_1(struct asn_oid *VAR_0, const struct asn_oid *VAR_1)
{
 FUNC_0(&VAR_0->subs[VAR_0->len], &VAR_1->subs[0],
     VAR_1->len * sizeof(VAR_1->subs[0]));
 VAR_0->len += VAR_1->len;
}
