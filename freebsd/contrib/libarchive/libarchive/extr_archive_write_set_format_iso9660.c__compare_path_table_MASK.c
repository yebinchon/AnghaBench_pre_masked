
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct isoent {char* identifier; int ext_off; TYPE_1__* parent; } ;
struct TYPE_2__ {int dir_number; } ;


 int FUNC_0 (char const*,char const*,int) ;

__attribute__((used)) static int
FUNC_1(const void *VAR_0, const void *VAR_1)
{
 const struct isoent *VAR_2, *VAR_3;
 const char *VAR_4, *VAR_5;
 int VAR_6, VAR_7;

 VAR_2 = *((const struct isoent **)(uintptr_t)VAR_0);
 VAR_3 = *((const struct isoent **)(uintptr_t)VAR_1);


 VAR_6 = VAR_2->parent->dir_number - VAR_3->parent->dir_number;
 if (VAR_6 != 0)
  return (VAR_6);


 VAR_4 = VAR_2->identifier;
 VAR_5 = VAR_3->identifier;
 VAR_7 = VAR_2->ext_off;
 if (VAR_7 > VAR_3->ext_off)
  VAR_7 = VAR_3->ext_off;
 VAR_6 = FUNC_0(VAR_4, VAR_5, VAR_7);
 if (VAR_6 != 0)
  return (VAR_6);
 if (VAR_2->ext_off < VAR_3->ext_off) {
  VAR_5 += VAR_7;
  VAR_7 = VAR_3->ext_off - VAR_2->ext_off;
  while (VAR_7--)
   if (0x20 != *VAR_5++)
    return (0x20
        - *(const unsigned char *)(VAR_5 - 1));
 } else if (VAR_2->ext_off > VAR_3->ext_off) {
  VAR_4 += VAR_7;
  VAR_7 = VAR_2->ext_off - VAR_3->ext_off;
  while (VAR_7--)
   if (0x20 != *VAR_4++)
    return (*(const unsigned char *)(VAR_4 - 1)
        - 0x20);
 }
 return (0);
}
