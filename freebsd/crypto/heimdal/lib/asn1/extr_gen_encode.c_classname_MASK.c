
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t Der_class ;


 size_t VAR_0 ;
 size_t VAR_1 ;

const char *
FUNC_0(Der_class VAR_2)
{
    const char *VAR_3[] = { "ASN1_C_UNIV", "ASN1_C_APPL",
    "ASN1_C_CONTEXT", "ASN1_C_PRIV" };
    if(VAR_2 < VAR_1 || VAR_2 > VAR_0)
 return "???";
    return VAR_3[VAR_2];
}
