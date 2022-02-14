
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned char const* data; size_t len; size_t asn1len; } ;
typedef TYPE_1__ br_asn1_uint ;



br_asn1_uint
FUNC_0(const void *VAR_0, size_t VAR_1)
{
 const unsigned char *VAR_2;
 br_asn1_uint VAR_3;

 VAR_2 = VAR_0;
 while (VAR_1 > 0 && *VAR_2 == 0) {
  VAR_2 ++;
  VAR_1 --;
 }
 VAR_3.data = VAR_2;
 VAR_3.len = VAR_1;
 VAR_3.asn1len = VAR_1;
 if (VAR_1 == 0 || VAR_2[0] >= 0x80) {
  VAR_3.asn1len ++;
 }
 return VAR_3;
}
