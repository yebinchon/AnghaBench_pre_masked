
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint16_t ;
typedef scalar_t__ ldns_status ;
typedef scalar_t__ ldns_rr_type ;
typedef int ldns_rr_list ;
typedef int ldns_rr ;
typedef int ldns_rdf ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int *,int const*) ;
 scalar_t__ FUNC_1 (int const*,int const*) ;
 int FUNC_2 (scalar_t__*,size_t,int ) ;
 int FUNC_3 (int *,int ,int ,scalar_t__,int ,int const*) ;
 int * FUNC_4 (int const*,int ,scalar_t__,int ,int const*) ;
 scalar_t__ FUNC_5 (int const*,int ) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;
 int * FUNC_8 (int const*,size_t) ;
 size_t FUNC_9 (int const*) ;
 int * FUNC_10 (int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,int ) ;
 int FUNC_13 (int *,int *) ;
 int FUNC_14 (int *,int *,int) ;
 int FUNC_15 (int *,int ) ;
 int FUNC_16 (int const*,int const*) ;

ldns_rr *
FUNC_17(const ldns_rdf *VAR_4,
                  const ldns_rdf *VAR_5,
                  const ldns_rr_list *VAR_6,
                  uint8_t VAR_7,
                  uint8_t VAR_8,
                  uint16_t VAR_9,
                  uint8_t VAR_10,
                  const uint8_t *VAR_11,
                  bool VAR_12)
{
 size_t VAR_13;
 ldns_rr *VAR_14;
 uint16_t VAR_15;

 ldns_rr *VAR_16 = ((void*)0);
 ldns_rdf *VAR_17 = ((void*)0);

 ldns_status VAR_18;

    ldns_rr_type VAR_19[1024];
 size_t VAR_20 = 0;

 VAR_17 = FUNC_4(VAR_4,
         VAR_7,
         VAR_9,
         VAR_10,
         VAR_11);
 VAR_18 = FUNC_0(VAR_17, VAR_5);
        if(VAR_18 != VAR_3) {
  FUNC_6(VAR_17);
                return ((void*)0);
 }
 VAR_16 = FUNC_10(VAR_0);
        if(!VAR_16) {
  FUNC_6(VAR_17);
                return ((void*)0);
 }
 FUNC_15(VAR_16, VAR_0);
 FUNC_13(VAR_16, VAR_17);

 FUNC_3(VAR_16,
       VAR_7,
       VAR_8,
       VAR_9,
       VAR_10,
       VAR_11);
 (void) FUNC_14(VAR_16, ((void*)0), 4);


 for (VAR_13 = 0; VAR_13 < FUNC_9(VAR_6); VAR_13++) {
  VAR_14 = FUNC_8(VAR_6, VAR_13);
  if (FUNC_5(VAR_4,
       FUNC_11(VAR_14)) == 0) {
   VAR_15 = FUNC_7(VAR_14);
   if (VAR_20 == 0 || VAR_19[VAR_20-1] != VAR_15) {
    VAR_19[VAR_20] = VAR_15;
    VAR_20++;
   }
  }
 }



 if (!VAR_12 && !FUNC_16(VAR_5, VAR_6)) {
  VAR_19[VAR_20] = VAR_1;
  VAR_20++;
 }


 if (FUNC_1(VAR_5, VAR_4) == 0) {
  VAR_19[VAR_20] = VAR_2;
  VAR_20++;
 }

 FUNC_12(VAR_16,
      FUNC_2(VAR_19,
      VAR_20, VAR_0));

 return VAR_16;
}
