
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
typedef size_t uint ;
struct vacm_context {size_t* ctxname; } ;
struct asn_oid {size_t len; size_t* subs; } ;


 size_t FUNC_0 (size_t*) ;

__attribute__((used)) static void
FUNC_1(struct asn_oid *VAR_0, uint VAR_1,
    const struct vacm_context *VAR_2)
{
 uint32_t VAR_3;

 VAR_0->len = VAR_1 + FUNC_0(VAR_2->ctxname) + 1;
 VAR_0->subs[VAR_1] = FUNC_0(VAR_2->ctxname);
 for (VAR_3 = 1; VAR_3 <= FUNC_0(VAR_2->ctxname); VAR_3++)
  VAR_0->subs[VAR_1 + VAR_3] = VAR_2->ctxname[VAR_3 - 1];
}
