
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ldns_rr_list ;
typedef int ldns_pkt_type ;
typedef int ldns_pkt ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (int const*) ;
 scalar_t__ FUNC_1 (int const*) ;
 scalar_t__ FUNC_2 (int const*) ;
 int FUNC_3 (int const*) ;
 int * FUNC_4 (int const*,int ,int ) ;
 int FUNC_5 (int *) ;

ldns_pkt_type
FUNC_6(const ldns_pkt *VAR_9)
{
 ldns_rr_list *VAR_10;

 if (!VAR_9) {
  return VAR_4;
 }

 if (FUNC_2(VAR_9) == VAR_5) {
  return VAR_2;
 }

 if (FUNC_0(VAR_9) == 0 && FUNC_1(VAR_9) == 0
   && FUNC_3(VAR_9) == 1) {


  VAR_10 = FUNC_4(VAR_9, VAR_7,
     VAR_8);
  if (VAR_10) {
   FUNC_5(VAR_10);
   return VAR_1;
  } else {

  }
 }

 if (FUNC_0(VAR_9) == 0 && FUNC_3(VAR_9) > 0) {
  VAR_10 = FUNC_4(VAR_9, VAR_6,
                                 VAR_8);
  if (VAR_10) {

   FUNC_5(VAR_10);
   return VAR_3;
  } else {

  }
  FUNC_5(VAR_10);
 }




 return VAR_0;
}
