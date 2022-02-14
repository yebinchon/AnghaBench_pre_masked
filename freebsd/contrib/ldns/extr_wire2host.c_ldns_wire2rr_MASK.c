
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int ldns_status ;
typedef int ldns_rr ;
typedef int ldns_rdf ;
typedef scalar_t__ ldns_pkt_section ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int const*) ;
 int FUNC_2 (int const*) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 () ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int **,int const*,size_t,size_t*) ;
 int FUNC_11 (int *,int const*,size_t,size_t*) ;
 int VAR_3 ;

ldns_status
FUNC_12(ldns_rr **VAR_4, const uint8_t *VAR_5, size_t VAR_6,
             size_t *VAR_7, ldns_pkt_section VAR_8)
{
 ldns_rdf *VAR_9 = ((void*)0);
 ldns_rr *VAR_10 = FUNC_4();
 ldns_status VAR_11;

 VAR_11 = FUNC_10(&VAR_9, VAR_5, VAR_6, VAR_7);
 FUNC_0(VAR_11, VAR_3);

 FUNC_6(VAR_10, VAR_9);

 if (*VAR_7 + 4 > VAR_6) {
  VAR_11 = VAR_2;
  goto status_error;
 }

 FUNC_9(VAR_10, FUNC_1(&VAR_5[*VAR_7]));
 *VAR_7 = *VAR_7 + 2;

 FUNC_5(VAR_10, FUNC_1(&VAR_5[*VAR_7]));
 *VAR_7 = *VAR_7 + 2;

 if (VAR_8 != VAR_0) {
  if (*VAR_7 + 4 > VAR_6) {
   VAR_11 = VAR_2;
   goto status_error;
  }
  FUNC_8(VAR_10, FUNC_2(&VAR_5[*VAR_7]));

  *VAR_7 = *VAR_7 + 4;
  VAR_11 = FUNC_11(VAR_10, VAR_5, VAR_6, VAR_7);

  FUNC_0(VAR_11, VAR_3);
        FUNC_7(VAR_10, 0);
 } else {
        FUNC_7(VAR_10, 1);
    }

 *VAR_4 = VAR_10;
 return VAR_1;

status_error:
 FUNC_3(VAR_10);
 return VAR_11;
}
