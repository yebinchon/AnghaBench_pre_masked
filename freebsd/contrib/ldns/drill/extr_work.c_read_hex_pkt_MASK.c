
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ ldns_status ;
typedef int ldns_pkt ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,char*,char*) ;
 char* FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int **,int *,size_t) ;
 size_t FUNC_3 (char*,int *) ;
 int VAR_3 ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int ) ;

ldns_pkt *
FUNC_6(char *VAR_4)
{
 uint8_t *VAR_5;
 size_t VAR_6;

 ldns_pkt *VAR_7 = ((void*)0);

 ldns_status VAR_8 = VAR_1;

 VAR_5 = FUNC_5(VAR_0);

 VAR_6 = FUNC_3(VAR_4, VAR_5);

 if (VAR_6 > 0) {
  VAR_8 = FUNC_2(&VAR_7, VAR_5, VAR_6);
 }

 FUNC_4(VAR_5);

 if (VAR_8 == VAR_2) {
  return VAR_7;
 } else {
  FUNC_0(VAR_3, "Error parsing hex file: %s\n",
      FUNC_1(VAR_8));
  return ((void*)0);
 }
}
