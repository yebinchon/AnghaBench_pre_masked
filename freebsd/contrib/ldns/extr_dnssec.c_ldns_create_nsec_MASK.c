
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
typedef scalar_t__ ldns_rr_type ;
typedef int ldns_rr_list ;
typedef int ldns_rr ;
typedef int ldns_rdf ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__*,size_t,scalar_t__) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (int *) ;
 int * FUNC_4 (int *,scalar_t__) ;
 scalar_t__ FUNC_5 (int *) ;
 int * FUNC_6 () ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int *,scalar_t__) ;

ldns_rr *
FUNC_11(ldns_rdf *VAR_2, ldns_rdf *VAR_3, ldns_rr_list *VAR_4)
{
 uint16_t VAR_5;
 ldns_rr *VAR_6;
 uint16_t VAR_7;

 ldns_rr *VAR_8 = ((void*)0);
 ldns_rr_type VAR_9[65536];
 size_t VAR_10 = 0;

 VAR_8 = FUNC_6();
 FUNC_10(VAR_8, VAR_0);
 FUNC_9(VAR_8, FUNC_1(VAR_2));
 FUNC_8(VAR_8, FUNC_1(VAR_3));

 for (VAR_5 = 0; VAR_5 < FUNC_5(VAR_4); VAR_5++) {
  VAR_6 = FUNC_4(VAR_4, VAR_5);
  if (FUNC_2(VAR_2,
       FUNC_7(VAR_6)) == 0) {
   VAR_7 = FUNC_3(VAR_6);
   if (VAR_7 != VAR_1 && VAR_7 != VAR_0) {
    if (VAR_10 == 0 || VAR_9[VAR_10-1] != VAR_7) {
     VAR_9[VAR_10] = VAR_7;
     VAR_10++;
    }
   }
  }
 }

 VAR_9[VAR_10] = VAR_1;
 VAR_10++;
 VAR_9[VAR_10] = VAR_0;
 VAR_10++;

 FUNC_8(VAR_8,
      FUNC_0(VAR_9,
      VAR_10, VAR_0));

 return VAR_8;
}
