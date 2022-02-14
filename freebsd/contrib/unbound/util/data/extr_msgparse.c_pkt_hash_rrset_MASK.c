
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
typedef int type ;
typedef int sldns_buffer ;
typedef int hashvalue_type ;
typedef int dclass ;


 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (int *,int,int) ;

hashvalue_type
FUNC_2(sldns_buffer* VAR_0, uint8_t* VAR_1, uint16_t VAR_2,
 uint16_t VAR_3, uint32_t VAR_4)
{


 hashvalue_type VAR_5 = 0xab;
 VAR_5 = FUNC_0(VAR_0, VAR_1, VAR_5);
 VAR_5 = FUNC_1(&VAR_2, sizeof(VAR_2), VAR_5);
 VAR_5 = FUNC_1(&VAR_3, sizeof(VAR_3), VAR_5);
 VAR_5 = FUNC_1(&VAR_4, sizeof(uint32_t), VAR_5);
 return VAR_5;
}
