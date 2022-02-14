
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint ;
typedef scalar_t__ u_int ;
struct vacm_context {int ctxname; } ;
struct asn_oid {int* subs; } ;


 int SNMP_ADM_STR32_SIZ ;
 scalar_t__ SNMP_INDEX (scalar_t__,int) ;
 scalar_t__ index_decode (struct asn_oid const*,size_t,scalar_t__,char**,size_t*) ;
 scalar_t__ strcmp (char*,int ) ;
 struct vacm_context* vacm_first_context () ;
 struct vacm_context* vacm_next_context (struct vacm_context*) ;

__attribute__((used)) static struct vacm_context *
vacm_get_context(const struct asn_oid *oid, uint sub)
{
 char cname[SNMP_ADM_STR32_SIZ];
 size_t cnamelen;
 u_int index_count;
 struct vacm_context *vacm_ctx;

 if (oid->subs[sub] >= SNMP_ADM_STR32_SIZ)
  return (((void*)0));

 index_count = 0;
 index_count = SNMP_INDEX(index_count, 1);
 if (index_decode(oid, sub, index_count, &cname, &cnamelen))
  return (((void*)0));

 for (vacm_ctx = vacm_first_context(); vacm_ctx != ((void*)0);
     vacm_ctx = vacm_next_context(vacm_ctx))
  if (strcmp(cname, vacm_ctx->ctxname) == 0)
   return (vacm_ctx);

 return (((void*)0));
}
