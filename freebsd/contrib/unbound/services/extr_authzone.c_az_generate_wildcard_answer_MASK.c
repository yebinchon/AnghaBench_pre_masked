
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct regional {int dummy; } ;
struct query_info {scalar_t__ qtype; } ;
struct TYPE_2__ {int qname_len; int qname; } ;
struct dns_msg {TYPE_1__ qinfo; } ;
struct auth_zone {int dummy; } ;
struct auth_rrset {int data; } ;
struct auth_data {size_t namelen; int * name; scalar_t__ rrsets; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct auth_zone*,struct regional*,struct dns_msg*,int *,size_t,int ,int ,int ,int,int,int ) ;
 int FUNC_1 (struct dns_msg*,int *,int ,int ,int) ;
 struct auth_rrset* FUNC_2 (struct auth_data*,scalar_t__) ;
 struct auth_rrset* FUNC_3 (struct auth_zone*,struct auth_data**) ;
 int FUNC_4 (struct auth_zone*,struct regional*,struct dns_msg*,struct auth_data*) ;
 int FUNC_5 (struct auth_zone*,struct regional*,struct dns_msg*,struct auth_data*) ;
 int FUNC_6 (int **,size_t*) ;
 int FUNC_7 (struct auth_zone*,scalar_t__,struct regional*,struct dns_msg*,int ) ;
 int FUNC_8 (struct auth_zone*,struct regional*,struct dns_msg*,struct auth_data*,struct auth_rrset*) ;
 int FUNC_9 (struct auth_zone*,struct regional*,struct dns_msg*,struct auth_data*,struct auth_rrset*) ;

__attribute__((used)) static int
FUNC_10(struct auth_zone* VAR_2, struct query_info* VAR_3,
 struct regional* VAR_4, struct dns_msg* VAR_5, struct auth_data* VAR_6,
 struct auth_data* VAR_7, struct auth_data* VAR_8)
{
 struct auth_rrset* VAR_9, *VAR_10;
 int VAR_11 = 0;
 if((VAR_9=FUNC_2(VAR_7, VAR_3->qtype)) != ((void*)0)) {

  if(!FUNC_8(VAR_2, VAR_4, VAR_5, VAR_7, VAR_9))
   return 0;
  FUNC_1(VAR_5, VAR_7->name, VAR_5->qinfo.qname,
   VAR_5->qinfo.qname_len, 1);
 } else if((VAR_9=FUNC_2(VAR_7, VAR_1))!=((void*)0)) {

  if(!FUNC_8(VAR_2, VAR_4, VAR_5, VAR_7, VAR_9))
   return 0;
  FUNC_1(VAR_5, VAR_7->name, VAR_5->qinfo.qname,
   VAR_5->qinfo.qname_len, 1);
  if(!FUNC_7(VAR_2, VAR_3->qtype, VAR_4, VAR_5,
   VAR_9->data))
   return 0;
 } else if(VAR_3->qtype == VAR_0 && VAR_7->rrsets) {

  if(!FUNC_4(VAR_2, VAR_4, VAR_5, VAR_7))
   return 0;
  FUNC_1(VAR_5, VAR_7->name, VAR_5->qinfo.qname,
   VAR_5->qinfo.qname_len, 1);
 } else {


  if(!FUNC_5(VAR_2, VAR_4, VAR_5, VAR_7))
   return 0;



  VAR_11 = 1;
 }


 if((VAR_10=FUNC_3(VAR_2, &VAR_8)) != ((void*)0)) {
  if(!FUNC_9(VAR_2, VAR_4, VAR_5, VAR_8, VAR_10)) return 0;
 } else if(VAR_6) {
  uint8_t* VAR_12 = VAR_7->name;
  size_t VAR_13= VAR_7->namelen;
  FUNC_6(&VAR_12, &VAR_13);
  if(!FUNC_0(VAR_2, VAR_4, VAR_5, VAR_12,
   VAR_13, VAR_5->qinfo.qname,
   VAR_5->qinfo.qname_len, 0, VAR_11, 1, 0))
   return 0;
 }



 FUNC_1(VAR_5, VAR_7->name, VAR_5->qinfo.qname,
  VAR_5->qinfo.qname_len, 0);
 return 1;
}
