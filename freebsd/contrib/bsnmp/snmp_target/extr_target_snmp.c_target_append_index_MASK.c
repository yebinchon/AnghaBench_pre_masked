
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
typedef size_t uint ;
struct asn_oid {size_t len; char* subs; } ;


 size_t FUNC_0 (char const*) ;

__attribute__((used)) static void
FUNC_1(struct asn_oid *VAR_0, uint VAR_1, const char *VAR_2)
{
 uint32_t VAR_3;

 VAR_0->len = VAR_1 + FUNC_0(VAR_2);
 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_2); VAR_3++)
  VAR_0->subs[VAR_1 + VAR_3] = VAR_2[VAR_3];
}
