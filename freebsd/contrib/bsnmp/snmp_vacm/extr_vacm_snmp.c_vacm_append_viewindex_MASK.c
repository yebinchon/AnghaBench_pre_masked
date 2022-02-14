
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint32_t ;
typedef size_t uint ;
struct TYPE_2__ {int len; } ;
struct vacm_view {int* viewname; TYPE_1__ subtree; } ;
struct asn_oid {size_t len; int* subs; } ;


 int FUNC_0 (struct asn_oid*,TYPE_1__*) ;
 int FUNC_1 (int*) ;

__attribute__((used)) static void
FUNC_2(struct asn_oid *VAR_0, uint VAR_1, const struct vacm_view *VAR_2)
{
 uint32_t VAR_3;

 VAR_0->len = VAR_1 + FUNC_1(VAR_2->viewname) + 1;
 VAR_0->subs[VAR_1] = FUNC_1(VAR_2->viewname);
 for (VAR_3 = 1; VAR_3 <= FUNC_1(VAR_2->viewname); VAR_3++)
  VAR_0->subs[VAR_1 + VAR_3] = VAR_2->viewname[VAR_3 - 1];

 VAR_1 += FUNC_1(VAR_2->viewname) + 1;
 VAR_0->subs[VAR_1] = VAR_2->subtree.len;
 VAR_0->len++;
 FUNC_0(VAR_0, &VAR_2->subtree);
}
