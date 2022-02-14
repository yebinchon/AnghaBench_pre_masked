
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zname ;
typedef int tpstr ;
struct regional {int dummy; } ;
struct query_info {int qtype; int qname_len; int qname; } ;
struct dns_msg {int dummy; } ;
struct auth_zone {int fallback_enabled; int namelen; int name; } ;
struct auth_rrset {int type; } ;
struct auth_data {int namelen; int name; } ;
typedef int rrstr ;
typedef int qname ;
typedef int nname ;
typedef int cename ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct auth_zone*,struct query_info*,struct auth_data*,int,struct auth_data**,struct auth_rrset**) ;
 int FUNC_1 (struct auth_zone*,struct query_info*,int*,struct auth_data**) ;
 int FUNC_2 (struct auth_zone*,struct query_info*,struct regional*,struct dns_msg*,struct auth_data*,struct auth_rrset*,struct auth_data*) ;
 int FUNC_3 (struct auth_zone*,struct query_info*,struct regional*,struct dns_msg*,struct auth_data*) ;
 int FUNC_4 (char*,char*,char*,char*,char*,char*,char*,char*,char*) ;
 struct dns_msg* FUNC_5 (struct regional*,struct query_info*) ;
 int FUNC_6 (int ,int ,char*,int) ;
 int FUNC_7 (int ,char*,int) ;
 int FUNC_8 (char*,int,char*) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int
FUNC_9(struct auth_zone* VAR_2, struct query_info* VAR_3,
 struct regional* VAR_4, struct dns_msg** VAR_5, int* VAR_6)
{
 struct auth_data* VAR_7, *VAR_8;
 struct auth_rrset* VAR_9;
 int VAR_10, VAR_11;

 *VAR_6 = VAR_2->fallback_enabled;
 if(!(*VAR_5=FUNC_5(VAR_4, VAR_3))) return 0;


 FUNC_1(VAR_2, VAR_3, &VAR_10, &VAR_7);





 VAR_11 = FUNC_0(VAR_2, VAR_3, VAR_7, VAR_10, &VAR_8, &VAR_9);

 if(VAR_1 >= VAR_0) {
  char VAR_12[256], VAR_13[256], VAR_14[256], VAR_15[256],
   VAR_16[32], VAR_17[32];
  FUNC_6(VAR_3->qname, VAR_3->qname_len, VAR_13,
   sizeof(VAR_13));
  FUNC_7(VAR_3->qtype, VAR_16, sizeof(VAR_16));
  FUNC_6(VAR_2->name, VAR_2->namelen, VAR_12,
   sizeof(VAR_12));
  if(VAR_7)
   FUNC_6(VAR_7->name, VAR_7->namelen,
    VAR_14, sizeof(VAR_14));
  else FUNC_8(VAR_14, sizeof(VAR_14), "NULL");
  if(VAR_8)
   FUNC_6(VAR_8->name, VAR_8->namelen,
    VAR_15, sizeof(VAR_15));
  else FUNC_8(VAR_15, sizeof(VAR_15), "NULL");
  if(VAR_9) FUNC_7(VAR_9->type, VAR_17,
   sizeof(VAR_17));
  else FUNC_8(VAR_17, sizeof(VAR_17), "NULL");
  FUNC_4("auth_zone %s query %s %s, domain %s %s %s, "
   "ce %s, rrset %s", VAR_12, VAR_13, VAR_16, VAR_14,
   (VAR_10?"exact":"notexact"),
   (VAR_11?"exist":"notexist"), VAR_15, VAR_17);
 }

 if(VAR_11) {

  return FUNC_3(VAR_2, VAR_3, VAR_4, *VAR_5,
   VAR_7);
 }
 return FUNC_2(VAR_2, VAR_3, VAR_4, *VAR_5,
  VAR_8, VAR_9, VAR_7);
}
