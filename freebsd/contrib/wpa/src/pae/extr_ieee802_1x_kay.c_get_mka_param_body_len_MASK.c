
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee802_1x_mka_hdr {int length; int length1; } ;



__attribute__((used)) static unsigned int FUNC_0(const void *VAR_0)
{
 const struct ieee802_1x_mka_hdr *VAR_1 = VAR_0;
 return (VAR_1->length << 8) | VAR_1->length1;
}
