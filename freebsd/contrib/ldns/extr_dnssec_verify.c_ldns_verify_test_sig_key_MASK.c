
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int ldns_status ;
typedef int const ldns_rr ;
typedef int ldns_buffer ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int const*) ;
 scalar_t__ FUNC_3 (int *,int *) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int *) ;
 int * FUNC_6 (int const*,int) ;
 int FUNC_7 (int const*) ;
 int FUNC_8 (int *,int *,int *,scalar_t__) ;

__attribute__((used)) static ldns_status
FUNC_9(ldns_buffer* VAR_7, ldns_buffer* VAR_8,
 const ldns_rr* VAR_9, ldns_rr* VAR_10)
{
 uint8_t VAR_11;

 if (VAR_9 == ((void*)0)) {
  return VAR_2;
 }
 if (FUNC_6(VAR_9, 1) == ((void*)0)) {
  return VAR_5;
 }
 VAR_11 = FUNC_5(FUNC_6(VAR_9, 1));


 if (FUNC_2(VAR_10)
     ==
     FUNC_4(FUNC_7(VAR_9))
     ) {
  ldns_buffer* VAR_12 = FUNC_1(VAR_0);
  ldns_status VAR_13 = VAR_3;



  if (FUNC_6(VAR_10, 3) == ((void*)0)) {
   FUNC_0(VAR_12);
   return VAR_4;
  }
  if (FUNC_3(VAR_12, FUNC_6(VAR_10, 3))
           != VAR_6) {
   FUNC_0(VAR_12);



   return VAR_3;
  }

  if (FUNC_6(VAR_10, 2) == ((void*)0)) {
   VAR_13 = VAR_4;
  }
  else if (VAR_11 == FUNC_5(
     FUNC_6(VAR_10, 2))) {
   VAR_13 = FUNC_8(VAR_7,
    VAR_8, VAR_12, VAR_11);
  } else {

   VAR_13 = VAR_1;
  }

  FUNC_0(VAR_12);
  return VAR_13;
 }
 else {

  return VAR_1;
 }
}
