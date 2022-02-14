
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
typedef int ldns_status ;
typedef int ldns_rr_list ;
typedef int ldns_resolver ;
typedef int const ldns_rdf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int const* FUNC_0 (int const*) ;
 int FUNC_1 (int const*) ;
 scalar_t__ FUNC_2 (int const*) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int const*,int const*,int const*,int ) ;
 int * FUNC_5 (int const*,int const*,int *,int ) ;

ldns_rr_list *
FUNC_6(const ldns_resolver *VAR_3,
                             const ldns_rdf *VAR_4,
                             const ldns_rr_list *VAR_5,
        time_t VAR_6,
                             ldns_status *VAR_7)
{
 ldns_rr_list * VAR_8 = ((void*)0);
 ldns_rr_list * VAR_9 = ((void*)0);
 ldns_rdf * VAR_10;
 ldns_rdf * VAR_11;
 ldns_rr_list * VAR_12 = ((void*)0);

 if (VAR_3 && VAR_4 && VAR_5) {

  if ((VAR_8 = FUNC_4(VAR_3,
                                         VAR_4, VAR_5, VAR_6))) {
   *VAR_7 = VAR_2;
  } else {

   *VAR_7 = VAR_0;

   VAR_11 = FUNC_0(VAR_4);
   while (VAR_11 &&
     FUNC_2(VAR_11) > 0) {

    if ((VAR_12 =
     FUNC_6(VAR_3,
          VAR_11,
          VAR_5,
          VAR_6,
          VAR_7))) {

     if ((VAR_9 =
      FUNC_5(VAR_3,
           VAR_4,
           VAR_12,
           VAR_6))) {
      VAR_8 =
      FUNC_6(
        VAR_3,
        VAR_4,
        VAR_9,
        VAR_6,
        VAR_7);
      FUNC_3(VAR_9);
     } else {

      *VAR_7 = VAR_1 ;
     }
     FUNC_3(VAR_12);
     break;
    } else {
     VAR_11 = FUNC_0((
      VAR_10
       = VAR_11
      ));
     FUNC_1(VAR_10);
    }
   }
   if (VAR_11) {
    FUNC_1(VAR_11);
   }
  }
 }
 return VAR_8;
}
