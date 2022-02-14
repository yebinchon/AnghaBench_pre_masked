
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint32_t ;
typedef size_t uint ;
struct vacm_access {int* ctx_prefix; int sec_model; int sec_level; TYPE_1__* group; } ;
struct asn_oid {size_t len; int* subs; } ;
struct TYPE_2__ {int* groupname; } ;


 int FUNC_0 (int*) ;

__attribute__((used)) static void
FUNC_1(struct asn_oid *VAR_0, uint VAR_1,
    const struct vacm_access *VAR_2)
{
 uint32_t VAR_3;

 VAR_0->len = VAR_1 + FUNC_0(VAR_2->group->groupname) +
     FUNC_0(VAR_2->ctx_prefix) + 4;

 VAR_0->subs[VAR_1] = FUNC_0(VAR_2->group->groupname);
 for (VAR_3 = 1; VAR_3 <= FUNC_0(VAR_2->group->groupname); VAR_3++)
  VAR_0->subs[VAR_1 + VAR_3] = VAR_2->group->groupname[VAR_3 - 1];
 VAR_1 += FUNC_0(VAR_2->group->groupname) + 1;

 VAR_0->subs[VAR_1] = FUNC_0(VAR_2->ctx_prefix);
 for (VAR_3 = 1; VAR_3 <= FUNC_0(VAR_2->ctx_prefix); VAR_3++)
  VAR_0->subs[VAR_1 + VAR_3] = VAR_2->ctx_prefix[VAR_3 - 1];
 VAR_1 += FUNC_0(VAR_2->ctx_prefix) + 1;
 VAR_0->subs[VAR_1++] = VAR_2->sec_model;
 VAR_0->subs[VAR_1] = VAR_2->sec_level;
}
