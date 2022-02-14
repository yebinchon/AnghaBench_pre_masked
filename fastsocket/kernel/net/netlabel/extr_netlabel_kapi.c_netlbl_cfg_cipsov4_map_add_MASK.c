
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {struct netlbl_domaddr_map* addrsel; struct cipso_v4_doi* cipsov4; } ;
struct TYPE_4__ {int addr; int mask; int valid; } ;
struct netlbl_domaddr_map {struct netlbl_domaddr_map* domain; void* type; TYPE_1__ type_def; int list4; TYPE_2__ list; int list6; } ;
struct netlbl_domaddr4_map {struct netlbl_domaddr4_map* domain; void* type; TYPE_1__ type_def; int list4; TYPE_2__ list; int list6; } ;
struct netlbl_dom_map {struct netlbl_dom_map* domain; void* type; TYPE_1__ type_def; int list4; TYPE_2__ list; int list6; } ;
struct netlbl_audit {int dummy; } ;
struct in_addr {int s_addr; } ;
struct cipso_v4_doi {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 void* VAR_4 ;
 void* VAR_5 ;
 struct cipso_v4_doi* FUNC_1 (int ) ;
 int FUNC_2 (struct cipso_v4_doi*) ;
 int FUNC_3 (struct netlbl_domaddr_map*) ;
 struct netlbl_domaddr_map* FUNC_4 (char const*,int ) ;
 struct netlbl_domaddr_map* FUNC_5 (int,int ) ;
 int FUNC_6 (TYPE_2__*,int *) ;
 int FUNC_7 (struct netlbl_domaddr_map*,struct netlbl_audit*) ;

int FUNC_8(u32 VAR_6,
          const char *VAR_7,
          const struct in_addr *VAR_8,
          const struct in_addr *VAR_9,
          struct netlbl_audit *VAR_10)
{
 int VAR_11 = -VAR_2;
 struct cipso_v4_doi *VAR_12;
 struct netlbl_dom_map *VAR_13;
 struct netlbl_domaddr_map *VAR_14 = ((void*)0);
 struct netlbl_domaddr4_map *VAR_15 = ((void*)0);

 VAR_12 = FUNC_1(VAR_6);
 if (VAR_12 == ((void*)0))
  return -VAR_1;

 VAR_13 = FUNC_5(sizeof(*VAR_13), VAR_3);
 if (VAR_13 == ((void*)0))
  return -VAR_2;
 if (VAR_7 != ((void*)0)) {
  VAR_13->domain = FUNC_4(VAR_7, VAR_3);
  if (VAR_13->domain == ((void*)0))
   goto cfg_cipsov4_map_add_failure;
 }

 if (VAR_8 == ((void*)0) && VAR_9 == ((void*)0)) {
  VAR_13->type_def.cipsov4 = VAR_12;
  VAR_13->type = VAR_5;
 } else if (VAR_8 != ((void*)0) && VAR_9 != ((void*)0)) {
  VAR_14 = FUNC_5(sizeof(*VAR_14), VAR_3);
  if (VAR_14 == ((void*)0))
   goto cfg_cipsov4_map_add_failure;
  FUNC_0(&VAR_14->list4);
  FUNC_0(&VAR_14->list6);

  VAR_15 = FUNC_5(sizeof(*VAR_15), VAR_3);
  if (VAR_15 == ((void*)0))
   goto cfg_cipsov4_map_add_failure;
  VAR_15->type_def.cipsov4 = VAR_12;
  VAR_15->type = VAR_5;
  VAR_15->list.addr = VAR_8->s_addr & VAR_9->s_addr;
  VAR_15->list.mask = VAR_9->s_addr;
  VAR_15->list.valid = 1;
  VAR_11 = FUNC_6(&VAR_15->list, &VAR_14->list4);
  if (VAR_11 != 0)
   goto cfg_cipsov4_map_add_failure;

  VAR_13->type_def.addrsel = VAR_14;
  VAR_13->type = VAR_4;
 } else {
  VAR_11 = -VAR_0;
  goto cfg_cipsov4_map_add_failure;
 }

 VAR_11 = FUNC_7(VAR_13, VAR_10);
 if (VAR_11 != 0)
  goto cfg_cipsov4_map_add_failure;

 return 0;

cfg_cipsov4_map_add_failure:
 FUNC_2(VAR_12);
 FUNC_3(VAR_13->domain);
 FUNC_3(VAR_13);
 FUNC_3(VAR_14);
 FUNC_3(VAR_15);
 return VAR_11;
}
