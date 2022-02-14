
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;
typedef int ldns_status ;
typedef int ldns_rdf ;
typedef int ldns_buffer ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,long long) ;
 int FUNC_1 (int *) ;
 int* FUNC_2 (int const*) ;
 int FUNC_3 (int const*) ;

ldns_status
FUNC_4(ldns_buffer *VAR_1,const ldns_rdf *VAR_2)
{

 uint64_t VAR_3 = 0;
 uint8_t *VAR_4 = FUNC_2(VAR_2);
 uint64_t VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;

 if (FUNC_3(VAR_2) < 6) {
  return VAR_0;
 }
 VAR_5 = VAR_4[0];
 VAR_6 = VAR_4[1];
 VAR_7 = VAR_4[2];
 VAR_8 = VAR_4[3];
 VAR_9 = VAR_4[4];
 VAR_10 = VAR_4[5];
 VAR_3 = (VAR_5<<40) | (VAR_6<<32) | (VAR_7<<24) | (VAR_8<<16) | (VAR_9<<8) | VAR_10;

 FUNC_0(VAR_1, "%llu ", (long long)VAR_3);

 return FUNC_1(VAR_1);
}
