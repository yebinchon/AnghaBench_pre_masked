
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct delegpt_ns {scalar_t__ done_pside6; scalar_t__ done_pside4; scalar_t__ lame; scalar_t__ got6; scalar_t__ got4; scalar_t__ resolved; int name; struct delegpt_ns* next; } ;
struct delegpt_addr {char* tls_auth_name; int addrlen; int addr; scalar_t__ lame; scalar_t__ bogus; struct delegpt_addr* next_target; } ;
struct delegpt {struct delegpt_addr* target_list; scalar_t__ bogus; struct delegpt_ns* nslist; scalar_t__ has_parent_side_NS; int name; } ;
typedef int s ;
typedef enum verbosity_value { ____Placeholder_verbosity_value } verbosity_value ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct delegpt*,size_t*,size_t*,size_t*) ;
 int FUNC_1 (struct delegpt*,size_t*,size_t*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int,char*,int *,int ) ;
 int FUNC_4 (char*,char*,...) ;
 int FUNC_5 (char*,int,char*,char const*,...) ;
 int VAR_2 ;

void FUNC_6(enum verbosity_value VAR_3, struct delegpt* VAR_4)
{
 char VAR_5[VAR_0+1];
 struct delegpt_ns* VAR_6;
 struct delegpt_addr* VAR_7;
 size_t VAR_8=0, VAR_9=0, VAR_10=0, VAR_11=0, VAR_12=0;
 if(VAR_2 < VAR_3)
  return;
 FUNC_2(VAR_4->name, VAR_5);
 if(VAR_4->nslist == ((void*)0) && VAR_4->target_list == ((void*)0)) {
  FUNC_4("DelegationPoint<%s>: empty", VAR_5);
  return;
 }
 FUNC_1(VAR_4, &VAR_9, &VAR_8);
 FUNC_0(VAR_4, &VAR_10, &VAR_11, &VAR_12);
 FUNC_4("DelegationPoint<%s>: %u names (%u missing), "
  "%u addrs (%u result, %u avail)%s",
  VAR_5, (unsigned)VAR_9, (unsigned)VAR_8,
  (unsigned)VAR_10, (unsigned)VAR_11, (unsigned)VAR_12,
  (VAR_4->has_parent_side_NS?" parentNS":" cacheNS"));
 if(VAR_2 >= VAR_1) {
  for(VAR_6 = VAR_4->nslist; VAR_6; VAR_6 = VAR_6->next) {
   FUNC_2(VAR_6->name, VAR_5);
   FUNC_4("  %s %s%s%s%s%s%s%s", VAR_5,
   (VAR_6->resolved?"*":""),
   (VAR_6->got4?" A":""), (VAR_6->got6?" AAAA":""),
   (VAR_4->bogus?" BOGUS":""), (VAR_6->lame?" PARENTSIDE":""),
   (VAR_6->done_pside4?" PSIDE_A":""),
   (VAR_6->done_pside6?" PSIDE_AAAA":""));
  }
  for(VAR_7 = VAR_4->target_list; VAR_7; VAR_7 = VAR_7->next_target) {
   char VAR_13[128];
   const char* VAR_14 = "  ";
   if(VAR_7->bogus && VAR_7->lame) VAR_14 = "  BOGUS ADDR_LAME ";
   else if(VAR_7->bogus) VAR_14 = "  BOGUS ";
   else if(VAR_7->lame) VAR_14 = "  ADDR_LAME ";
   if(VAR_7->tls_auth_name)
    FUNC_5(VAR_13, sizeof(VAR_13), "%s[%s]", VAR_14,
     VAR_7->tls_auth_name);
   else FUNC_5(VAR_13, sizeof(VAR_13), "%s", VAR_14);
   FUNC_3(VAR_1, VAR_13, &VAR_7->addr, VAR_7->addrlen);
  }
 }
}
