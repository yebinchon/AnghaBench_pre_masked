
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int asn1len; int len; int data; } ;
typedef TYPE_1__ br_asn1_uint ;


 int FUNC_0 (unsigned char*,int) ;
 int FUNC_1 (unsigned char*,int ,int) ;

size_t
FUNC_2(void *VAR_0, br_asn1_uint VAR_1)
{
 unsigned char *VAR_2;
 size_t VAR_3;

 if (VAR_0 == ((void*)0)) {
  return 1 + FUNC_0(((void*)0), VAR_1.asn1len) + VAR_1.asn1len;
 }
 VAR_2 = VAR_0;
 *VAR_2 ++ = 0x02;
 VAR_3 = FUNC_0(VAR_2, VAR_1.asn1len);
 VAR_2 += VAR_3;
 *VAR_2 = 0x00;
 FUNC_1(VAR_2 + VAR_1.asn1len - VAR_1.len, VAR_1.data, VAR_1.len);
 return 1 + VAR_3 + VAR_1.asn1len;
}
