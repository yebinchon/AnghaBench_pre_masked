
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct netlbl_domaddr6_map {int type; } ;
struct TYPE_3__ {struct cipso_v4_doi* cipsov4; } ;
struct netlbl_domaddr4_map {int type; TYPE_1__ type_def; } ;
struct TYPE_4__ {struct cipso_v4_doi* cipsov4; } ;
struct netlbl_dom_map {char* domain; int type; TYPE_2__ type_def; } ;
struct netlbl_audit {int dummy; } ;
struct netlbl_af6list {int mask; int addr; } ;
struct netlbl_af4list {int mask; int addr; } ;
struct cipso_v4_doi {int doi; } ;
struct audit_buffer {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;


 int FUNC_1 (struct audit_buffer*) ;
 int FUNC_2 (struct audit_buffer*,char*,...) ;
 int FUNC_3 (struct audit_buffer*,int ,int *,int ,int ) ;
 int FUNC_4 (struct audit_buffer*,int ,int *,int *,int *) ;
 struct audit_buffer* FUNC_5 (int ,struct netlbl_audit*) ;
 struct netlbl_domaddr4_map* FUNC_6 (struct netlbl_af4list*) ;
 struct netlbl_domaddr6_map* FUNC_7 (struct netlbl_af6list*) ;

__attribute__((used)) static void FUNC_8(struct netlbl_dom_map *VAR_1,
        struct netlbl_af4list *VAR_2,
        struct netlbl_af6list *VAR_3,
        int VAR_4,
        struct netlbl_audit *VAR_5)
{
 struct audit_buffer *VAR_6;
 struct cipso_v4_doi *VAR_7 = ((void*)0);
 u32 VAR_8;

 VAR_6 = FUNC_5(VAR_0, VAR_5);
 if (VAR_6 != ((void*)0)) {
  FUNC_2(VAR_6, " nlbl_domain=%s",
     VAR_1->domain ? VAR_1->domain : "(default)");
  if (VAR_2 != ((void*)0)) {
   struct netlbl_domaddr4_map *VAR_9;
   VAR_9 = FUNC_6(VAR_2);
   VAR_8 = VAR_9->type;
   VAR_7 = VAR_9->type_def.cipsov4;
   FUNC_3(VAR_6, 0, ((void*)0),
        VAR_2->addr, VAR_2->mask);
  } else {
   VAR_8 = VAR_1->type;
   VAR_7 = VAR_1->type_def.cipsov4;
  }
  switch (VAR_8) {
  case 128:
   FUNC_2(VAR_6, " nlbl_protocol=unlbl");
   break;
  case 129:
   FUNC_0(VAR_7 == ((void*)0));
   FUNC_2(VAR_6,
      " nlbl_protocol=cipsov4 cipso_doi=%u",
      VAR_7->doi);
   break;
  }
  FUNC_2(VAR_6, " res=%u", VAR_4 == 0 ? 1 : 0);
  FUNC_1(VAR_6);
 }
}
