
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rsn_pmksa_cache_entry {char* spa; char* identity; int identity_len; int cui; scalar_t__ acct_multi_session_id; } ;
struct radius_das_attrs {int acct_multi_session_id_len; int cui_len; int user_name_len; scalar_t__ user_name; scalar_t__ cui; scalar_t__ acct_multi_session_id; scalar_t__ sta_addr; } ;
typedef int buf ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,char*,int) ;
 int FUNC_1 (char*,int,char*,unsigned long long) ;
 char* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct rsn_pmksa_cache_entry *VAR_1,
     struct radius_das_attrs *VAR_2)
{
 int VAR_3 = 0;

 if (VAR_2->sta_addr) {
  if (FUNC_0(VAR_2->sta_addr, VAR_1->spa, VAR_0) != 0)
   return 0;
  VAR_3++;
 }

 if (VAR_2->acct_multi_session_id) {
  char VAR_4[20];

  if (VAR_2->acct_multi_session_id_len != 16)
   return 0;
  FUNC_1(VAR_4, sizeof(VAR_4), "%016llX",
       (unsigned long long) VAR_1->acct_multi_session_id);
  if (FUNC_0(VAR_2->acct_multi_session_id, VAR_4, 16) != 0)
   return 0;
  VAR_3++;
 }

 if (VAR_2->cui) {
  if (!VAR_1->cui ||
      VAR_2->cui_len != FUNC_3(VAR_1->cui) ||
      FUNC_0(VAR_2->cui, FUNC_2(VAR_1->cui),
         VAR_2->cui_len) != 0)
   return 0;
  VAR_3++;
 }

 if (VAR_2->user_name) {
  if (!VAR_1->identity ||
      VAR_2->user_name_len != VAR_1->identity_len ||
      FUNC_0(VAR_2->user_name, VAR_1->identity,
         VAR_2->user_name_len) != 0)
   return 0;
  VAR_3++;
 }

 return VAR_3;
}
