
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee802_1x_mka_hdr {unsigned int length; unsigned int length1; } ;



__attribute__((used)) static void FUNC_0(void *VAR_0, unsigned int VAR_1)
{
 struct ieee802_1x_mka_hdr *VAR_2 = VAR_0;
 VAR_2->length = (VAR_1 >> 8) & 0x0f;
 VAR_2->length1 = VAR_1 & 0xff;
}
