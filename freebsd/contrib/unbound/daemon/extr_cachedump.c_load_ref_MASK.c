
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int * now; int rrset_cache; } ;
struct worker {TYPE_1__ env; } ;
struct TYPE_4__ {int lock; } ;
struct ub_packed_rrset_key {TYPE_2__ entry; } ;
struct regional {int dummy; } ;
struct query_info {int qclass; int qtype; int qname_len; int qname; } ;
typedef int sldns_buffer ;
typedef int RES ;


 char* FUNC_0 (char*,struct query_info*,struct regional*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,char*) ;
 struct ub_packed_rrset_key* FUNC_3 (struct ub_packed_rrset_key*,struct regional*,int ) ;
 struct ub_packed_rrset_key* FUNC_4 (int ,int ,int ,int ,int ,int ,int ,int ) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (char*,char*,unsigned int*) ;
 int FUNC_7 (int *,int *) ;
 scalar_t__ FUNC_8 (char*,char*,int) ;

__attribute__((used)) static int
FUNC_9(RES* VAR_0, sldns_buffer* VAR_1, struct worker* VAR_2,
 struct regional *VAR_3, struct ub_packed_rrset_key** VAR_4,
 int* VAR_5)
{
 char* VAR_6 = (char*)FUNC_5(VAR_1);
 struct query_info VAR_7;
 unsigned int VAR_8;
 struct ub_packed_rrset_key* VAR_9;


 if(!FUNC_7(VAR_0, VAR_1))
  return 0;
 if(FUNC_8(VAR_6, "BADREF", 6) == 0) {
  *VAR_5 = 0;
  return 1;
 }

 VAR_6 = FUNC_0(VAR_6, &VAR_7, VAR_3);
 if(!VAR_6) {
  return 0;
 }
 if(FUNC_6(VAR_6, " %u", &VAR_8) != 1) {
  FUNC_2("error cannot parse flags: %s", VAR_6);
  return 0;
 }


 VAR_9 = FUNC_4(VAR_2->env.rrset_cache, VAR_7.qname,
  VAR_7.qname_len, VAR_7.qtype, VAR_7.qclass,
  (uint32_t)VAR_8, *VAR_2->env.now, 0);
 if(!VAR_9) {

  *VAR_5 = 0;
  return 1;
 }


 *VAR_4 = FUNC_3(VAR_9, VAR_3, *VAR_2->env.now);
 FUNC_1(&VAR_9->entry.lock);

 return (*VAR_4 != ((void*)0));
}
