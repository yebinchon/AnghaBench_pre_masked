
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
typedef scalar_t__ ldns_status ;
typedef int const ldns_rr_list ;
typedef int ldns_rr ;
typedef int ldns_buffer ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *,int *,int const*,int const*) ;
 int FUNC_3 (int const*,int const*) ;
 int const* FUNC_4 (int const*) ;
 int FUNC_5 (int const*) ;
 int FUNC_6 (int const*) ;
 int const* FUNC_7 () ;
 int FUNC_8 (int const*,int ) ;
 int FUNC_9 (int const*,scalar_t__) ;
 scalar_t__ FUNC_10 (int const*) ;
 scalar_t__ FUNC_11 (int *,int *,int const*,int ) ;

ldns_status
FUNC_12(const ldns_rr_list *VAR_5,
      const ldns_rr *VAR_6,
      const ldns_rr_list *VAR_7,
      ldns_rr_list *VAR_8)
{
 ldns_buffer *VAR_9;
 ldns_buffer *VAR_10;
 uint16_t VAR_11;
 ldns_status VAR_12, VAR_13;
 ldns_rr_list *VAR_14;
 ldns_rr_list *VAR_15;

 if (!VAR_5) {
  return VAR_2;
 }

 VAR_15 = FUNC_7();
 if (!VAR_15) {
  return VAR_3;
 }


 VAR_14 = FUNC_4(VAR_5);


 VAR_9 = FUNC_1(VAR_0);
 VAR_10 = FUNC_1(VAR_0);

 VAR_12 = FUNC_2(VAR_9, VAR_10,
  VAR_14, VAR_6);
 if(VAR_12 != VAR_4) {
  FUNC_0(VAR_10);
  FUNC_0(VAR_9);
  FUNC_5(VAR_14);
  FUNC_6(VAR_15);
  return VAR_12;
 }

 VAR_12 = VAR_1;
 for(VAR_11 = 0; VAR_11 < FUNC_10(VAR_7); VAR_11++) {
  VAR_13 = FUNC_11(VAR_9, VAR_10,
   VAR_6, FUNC_9(VAR_7, VAR_11));
  if (VAR_13 == VAR_4) {




   if (!FUNC_8(VAR_15,
    FUNC_9(VAR_7,VAR_11))) {

    FUNC_0(VAR_9);
    FUNC_0(VAR_10);
    FUNC_5(VAR_14);
    FUNC_6(VAR_15);
    return VAR_3;
   }

   VAR_12 = VAR_13;
  }

  if (VAR_12 == VAR_1) {
   VAR_12 = VAR_13;
  }
 }


 FUNC_5(VAR_14);
 FUNC_0(VAR_9);
 FUNC_0(VAR_10);

 if (FUNC_10(VAR_15) == 0) {

  FUNC_6(VAR_15);
  return VAR_12;
 }



 FUNC_3(VAR_8, VAR_15);
 FUNC_6(VAR_15);
 return VAR_4;
}
