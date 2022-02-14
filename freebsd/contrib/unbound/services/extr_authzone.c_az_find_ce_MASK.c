
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct query_info {scalar_t__ qtype; scalar_t__ qname_len; } ;
struct auth_zone {scalar_t__ namelen; } ;
struct auth_rrset {int dummy; } ;
struct auth_data {scalar_t__ namelen; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct auth_data* FUNC_0 (struct auth_zone*,struct auth_data*) ;
 struct auth_rrset* FUNC_1 (struct auth_data*,int ) ;
 struct auth_data* FUNC_2 (struct auth_zone*,struct query_info*,struct auth_data*) ;
 scalar_t__ FUNC_3 (struct auth_data*) ;

__attribute__((used)) static int
FUNC_4(struct auth_zone* VAR_3, struct query_info* VAR_4,
 struct auth_data* VAR_5, int VAR_6, struct auth_data** VAR_7,
 struct auth_rrset** VAR_8)
{
 struct auth_data* VAR_9 = VAR_5;
 *VAR_7 = ((void*)0);
 *VAR_8 = ((void*)0);
 if(!VAR_6) {

  VAR_9 = FUNC_2(VAR_3, VAR_4, VAR_9);
 } else {

  *VAR_7 = VAR_9;
 }


 if(VAR_9 && FUNC_3(VAR_9)) {
  VAR_6 = 0;
  *VAR_7 = ((void*)0);
 }



 while(VAR_9) {


  if(VAR_9->namelen != VAR_3->namelen &&
   (*VAR_8=FUNC_1(VAR_9, VAR_2)) &&

   (VAR_4->qtype != VAR_1 ||
   VAR_9->namelen != VAR_4->qname_len)) {


   *VAR_7 = VAR_9;
   return 0;
  }

  if(VAR_9->namelen != VAR_4->qname_len &&
   (*VAR_8=FUNC_1(VAR_9, VAR_0))) {

   *VAR_7 = VAR_9;
   return 0;
  }

  if(*VAR_7 == ((void*)0) && !FUNC_3(VAR_9)) {


   *VAR_7 = VAR_9;
  }


  VAR_9 = FUNC_0(VAR_3, VAR_9);
 }

 return VAR_6;
}
