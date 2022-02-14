
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef void* u32 ;
struct TYPE_4__ {struct netlbl_domaddr_map* addrsel; struct cipso_v4_doi* cipsov4; } ;
struct TYPE_5__ {int addr; int mask; int valid; } ;
struct netlbl_domaddr_map {int type; struct netlbl_domaddr_map* domain; TYPE_1__ type_def; int list6; TYPE_2__ list; int list4; } ;
struct netlbl_domaddr6_map {int type; struct netlbl_domaddr6_map* domain; TYPE_1__ type_def; int list6; TYPE_2__ list; int list4; } ;
struct netlbl_domaddr4_map {int type; struct netlbl_domaddr4_map* domain; TYPE_1__ type_def; int list6; TYPE_2__ list; int list4; } ;
struct netlbl_dom_map {int type; struct netlbl_dom_map* domain; TYPE_1__ type_def; int list6; TYPE_2__ list; int list4; } ;
struct netlbl_audit {int dummy; } ;
struct in_addr {int s_addr; } ;
struct in6_addr {int * s6_addr32; } ;
struct genl_info {scalar_t__* attrs; } ;
struct cipso_v4_doi {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 void* VAR_3 ;


 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 struct cipso_v4_doi* FUNC_1 (void*) ;
 int FUNC_2 (struct cipso_v4_doi*) ;
 int FUNC_3 (int*,struct in6_addr*) ;
 int FUNC_4 (struct netlbl_domaddr_map*) ;
 struct netlbl_domaddr_map* FUNC_5 (size_t,int ) ;
 struct netlbl_domaddr_map* FUNC_6 (int,int ) ;
 int FUNC_7 (TYPE_2__*,int *) ;
 int FUNC_8 (TYPE_2__*,int *) ;
 int FUNC_9 (struct netlbl_domaddr_map*,struct netlbl_audit*) ;
 void* FUNC_10 (scalar_t__) ;
 void* FUNC_11 (scalar_t__) ;
 int FUNC_12 (scalar_t__) ;
 int FUNC_13 (struct netlbl_domaddr_map*,scalar_t__,size_t) ;

__attribute__((used)) static int FUNC_14(struct genl_info *VAR_11,
      struct netlbl_audit *VAR_12)
{
 int VAR_13 = -VAR_0;
 struct netlbl_dom_map *VAR_14 = ((void*)0);
 struct netlbl_domaddr_map *VAR_15 = ((void*)0);
 struct cipso_v4_doi *VAR_16 = ((void*)0);
 u32 VAR_17;

 VAR_14 = FUNC_6(sizeof(*VAR_14), VAR_2);
 if (VAR_14 == ((void*)0)) {
  VAR_13 = -VAR_1;
  goto add_failure;
 }
 VAR_14->type = FUNC_11(VAR_11->attrs[VAR_10]);
 if (VAR_11->attrs[VAR_5]) {
  size_t VAR_18 = FUNC_12(VAR_11->attrs[VAR_5]);
  VAR_14->domain = FUNC_5(VAR_18, VAR_2);
  if (VAR_14->domain == ((void*)0)) {
   VAR_13 = -VAR_1;
   goto add_failure;
  }
  FUNC_13(VAR_14->domain,
       VAR_11->attrs[VAR_5], VAR_18);
 }






 switch (VAR_14->type) {
 case 128:
  break;
 case 129:
  if (!VAR_11->attrs[VAR_4])
   goto add_failure;

  VAR_17 = FUNC_11(VAR_11->attrs[VAR_4]);
  VAR_16 = FUNC_1(VAR_17);
  if (VAR_16 == ((void*)0))
   goto add_failure;
  VAR_14->type_def.cipsov4 = VAR_16;
  break;
 default:
  goto add_failure;
 }

 if (VAR_11->attrs[VAR_6]) {
  struct in_addr *VAR_19;
  struct in_addr *VAR_20;
  struct netlbl_domaddr4_map *VAR_21;

  VAR_15 = FUNC_6(sizeof(*VAR_15), VAR_2);
  if (VAR_15 == ((void*)0)) {
   VAR_13 = -VAR_1;
   goto add_failure;
  }
  FUNC_0(&VAR_15->list4);
  FUNC_0(&VAR_15->list6);

  if (FUNC_12(VAR_11->attrs[VAR_6]) !=
      sizeof(struct in_addr)) {
   VAR_13 = -VAR_0;
   goto add_failure;
  }
  if (FUNC_12(VAR_11->attrs[VAR_7]) !=
      sizeof(struct in_addr)) {
   VAR_13 = -VAR_0;
   goto add_failure;
  }
  VAR_19 = FUNC_10(VAR_11->attrs[VAR_6]);
  VAR_20 = FUNC_10(VAR_11->attrs[VAR_7]);

  VAR_21 = FUNC_6(sizeof(*VAR_21), VAR_2);
  if (VAR_21 == ((void*)0)) {
   VAR_13 = -VAR_1;
   goto add_failure;
  }
  VAR_21->list.addr = VAR_19->s_addr & VAR_20->s_addr;
  VAR_21->list.mask = VAR_20->s_addr;
  VAR_21->list.valid = 1;
  VAR_21->type = VAR_14->type;
  if (VAR_16)
   VAR_21->type_def.cipsov4 = VAR_16;

  VAR_13 = FUNC_7(&VAR_21->list, &VAR_15->list4);
  if (VAR_13 != 0) {
   FUNC_4(VAR_21);
   goto add_failure;
  }

  VAR_14->type = VAR_3;
  VAR_14->type_def.addrsel = VAR_15;
 }

 VAR_13 = FUNC_9(VAR_14, VAR_12);
 if (VAR_13 != 0)
  goto add_failure;

 return 0;

add_failure:
 if (VAR_16)
  FUNC_2(VAR_16);
 if (VAR_14)
  FUNC_4(VAR_14->domain);
 FUNC_4(VAR_15);
 FUNC_4(VAR_14);
 return VAR_13;
}
