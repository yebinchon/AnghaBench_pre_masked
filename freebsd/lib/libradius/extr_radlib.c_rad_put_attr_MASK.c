
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rad_handle {scalar_t__* out; int chap_pass; int eap_msg; int out_created; } ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct rad_handle*,char*) ;
 int FUNC_1 (struct rad_handle*,int,void const*,size_t) ;
 int FUNC_2 (struct rad_handle*,int,void const*,size_t) ;
 int FUNC_3 (struct rad_handle*) ;

int
FUNC_4(struct rad_handle *VAR_6, int VAR_7, const void *VAR_8, size_t VAR_9)
{
 int VAR_10;

 if (!VAR_6->out_created) {
  FUNC_0(VAR_6, "Please call rad_create_request()"
      " before putting attributes");
  return -1;
 }

 if (VAR_6->out[VAR_0] == VAR_1) {
  if (VAR_7 == VAR_3) {
   FUNC_0(VAR_6, "EAP-Message attribute is not valid"
       " in accounting requests");
   return -1;
  }
 }





 if (VAR_7 == VAR_3) {
  if (FUNC_3(VAR_6) == -1)
   return -1;
 }

 if (VAR_7 == VAR_5) {
  VAR_10 = FUNC_1(VAR_6, VAR_7, VAR_8, VAR_9);
 } else if (VAR_7 == VAR_4) {
  VAR_10 = FUNC_3(VAR_6);
 } else {
  VAR_10 = FUNC_2(VAR_6, VAR_7, VAR_8, VAR_9);
  if (VAR_10 == 0) {
   if (VAR_7 == VAR_2)
    VAR_6->chap_pass = 1;
   else if (VAR_7 == VAR_3)
    VAR_6->eap_msg = 1;
  }
 }

 return VAR_10;
}
