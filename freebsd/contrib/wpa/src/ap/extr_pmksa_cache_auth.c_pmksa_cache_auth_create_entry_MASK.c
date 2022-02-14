
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rsn_pmksa_cache_entry {size_t pmk_len; int expiration; int akmp; int spa; int pmkid; int pmk; } ;
struct os_reltime {int sec; } ;
struct eapol_state_machine {int dummy; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct os_reltime*) ;
 int FUNC_1 (int ,int const*,size_t) ;
 struct rsn_pmksa_cache_entry* FUNC_2 (int) ;
 int FUNC_3 (struct rsn_pmksa_cache_entry*,struct eapol_state_machine*) ;
 int FUNC_4 (int const*,size_t,int const*,int const*,int ,int) ;
 int FUNC_5 (int const*,size_t,int const*,int const*,int ) ;
 int FUNC_6 (int const*,size_t,int const*,int const*,int ) ;
 scalar_t__ FUNC_7 (int) ;

struct rsn_pmksa_cache_entry *
FUNC_8(const u8 *VAR_5, size_t VAR_6, const u8 *VAR_7,
         const u8 *VAR_8, size_t VAR_9, const u8 *VAR_10,
         const u8 *VAR_11, int VAR_12,
         struct eapol_state_machine *VAR_13, int VAR_14)
{
 struct rsn_pmksa_cache_entry *VAR_15;
 struct os_reltime VAR_16;

 if (VAR_6 > VAR_2)
  return ((void*)0);

 if (FUNC_7(VAR_14) && !VAR_8)
  return ((void*)0);

 VAR_15 = FUNC_2(sizeof(*VAR_15));
 if (VAR_15 == ((void*)0))
  return ((void*)0);
 FUNC_1(VAR_15->pmk, VAR_5, VAR_6);
 VAR_15->pmk_len = VAR_6;
 if (VAR_7)
  FUNC_1(VAR_15->pmkid, VAR_7, VAR_1);
 else if (VAR_14 == VAR_3)
  FUNC_6(VAR_8, VAR_9, VAR_10, VAR_11, VAR_15->pmkid);
 else if (FUNC_7(VAR_14))
  FUNC_5(VAR_8, VAR_9, VAR_10, VAR_11, VAR_15->pmkid);
 else
  FUNC_4(VAR_5, VAR_6, VAR_10, VAR_11, VAR_15->pmkid, VAR_14);
 FUNC_0(&VAR_16);
 VAR_15->expiration = VAR_16.sec;
 if (VAR_12 > 0)
  VAR_15->expiration += VAR_12;
 else
  VAR_15->expiration += VAR_4;
 VAR_15->akmp = VAR_14;
 FUNC_1(VAR_15->spa, VAR_11, VAR_0);
 FUNC_3(VAR_15, VAR_13);

 return VAR_15;
}
