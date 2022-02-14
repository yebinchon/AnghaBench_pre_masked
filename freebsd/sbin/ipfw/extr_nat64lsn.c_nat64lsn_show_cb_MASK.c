
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_4__ {char* name; scalar_t__ set; int plen4; int plen6; int states_chunks; int nh_delete_delay; int pg_delete_delay; int st_syn_ttl; int st_close_ttl; int st_estab_ttl; int st_udp_ttl; int st_icmp_ttl; int jmaxlen; int flags; int prefix6; int prefix4; } ;
typedef TYPE_1__ ipfw_nat64lsn_cfg ;
typedef int abuf ;
struct TYPE_5__ {scalar_t__ use_set; scalar_t__ verbose; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 TYPE_3__ VAR_14 ;
 int FUNC_0 (int ,int *,char*,int) ;
 int FUNC_1 (char*,...) ;
 scalar_t__ FUNC_2 (char*,char const*) ;

__attribute__((used)) static int
FUNC_3(ipfw_nat64lsn_cfg *VAR_15, const char *VAR_16, uint8_t VAR_17)
{
 char VAR_18[VAR_3];

 if (VAR_16 != ((void*)0) && FUNC_2(VAR_15->name, VAR_16) != 0)
  return (VAR_2);

 if (VAR_14.use_set != 0 && VAR_15->set != VAR_17)
  return (VAR_2);

 if (VAR_14.use_set != 0 || VAR_15->set != 0)
  FUNC_1("set %u ", VAR_15->set);
 FUNC_0(VAR_0, &VAR_15->prefix4, VAR_18, sizeof(VAR_18));
 FUNC_1("nat64lsn %s prefix4 %s/%u", VAR_15->name, VAR_18, VAR_15->plen4);
 FUNC_0(VAR_1, &VAR_15->prefix6, VAR_18, sizeof(VAR_18));
 FUNC_1(" prefix6 %s/%u", VAR_18, VAR_15->plen6);
 if (VAR_14.verbose || VAR_15->states_chunks > 1)
  FUNC_1(" states_chunks %u", VAR_15->states_chunks);
 if (VAR_14.verbose || VAR_15->nh_delete_delay != VAR_4)
  FUNC_1(" host_del_age %u", VAR_15->nh_delete_delay);
 if (VAR_14.verbose || VAR_15->pg_delete_delay != VAR_7)
  FUNC_1(" pg_del_age %u", VAR_15->pg_delete_delay);
 if (VAR_14.verbose || VAR_15->st_syn_ttl != VAR_10)
  FUNC_1(" tcp_syn_age %u", VAR_15->st_syn_ttl);
 if (VAR_14.verbose || VAR_15->st_close_ttl != VAR_9)
  FUNC_1(" tcp_close_age %u", VAR_15->st_close_ttl);
 if (VAR_14.verbose || VAR_15->st_estab_ttl != VAR_8)
  FUNC_1(" tcp_est_age %u", VAR_15->st_estab_ttl);
 if (VAR_14.verbose || VAR_15->st_udp_ttl != VAR_11)
  FUNC_1(" udp_age %u", VAR_15->st_udp_ttl);
 if (VAR_14.verbose || VAR_15->st_icmp_ttl != VAR_5)
  FUNC_1(" icmp_age %u", VAR_15->st_icmp_ttl);
 if (VAR_14.verbose || VAR_15->jmaxlen != VAR_6)
  FUNC_1(" jmaxlen %u", VAR_15->jmaxlen);
 if (VAR_15->flags & VAR_13)
  FUNC_1(" log");
 if (VAR_15->flags & VAR_12)
  FUNC_1(" allow_private");
 FUNC_1("\n");
 return (0);
}
