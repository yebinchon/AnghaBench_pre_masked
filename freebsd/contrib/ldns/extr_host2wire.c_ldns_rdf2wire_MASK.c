
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ ldns_status ;
typedef int ldns_rdf ;
typedef int ldns_buffer ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int ) ;
 size_t FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int const*) ;

ldns_status
FUNC_5(uint8_t **VAR_3, const ldns_rdf *VAR_4, size_t *VAR_5)
{
 ldns_buffer *VAR_6 = FUNC_2(VAR_0);
 ldns_status VAR_7;
 *VAR_5 = 0;
 *VAR_3 = ((void*)0);
 if(!VAR_6) return VAR_1;

 VAR_7 = FUNC_4(VAR_6, VAR_4);
 if (VAR_7 == VAR_2) {
  *VAR_5 = FUNC_3(VAR_6);
  *VAR_3 = (uint8_t *) FUNC_0(VAR_6);
 }
 FUNC_1(VAR_6);
 return VAR_7;
}
