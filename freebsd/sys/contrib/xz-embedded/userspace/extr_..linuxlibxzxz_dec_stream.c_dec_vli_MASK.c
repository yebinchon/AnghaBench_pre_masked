
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vli_type ;
typedef int uint8_t ;
struct xz_dec {int pos; int vli; } ;
typedef enum xz_ret { ____Placeholder_xz_ret } xz_ret ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static enum xz_ret FUNC_0(struct xz_dec *VAR_4, const uint8_t *VAR_5,
      size_t *VAR_6, size_t VAR_7)
{
 uint8_t VAR_8;

 if (VAR_4->pos == 0)
  VAR_4->vli = 0;

 while (*VAR_6 < VAR_7) {
  VAR_8 = VAR_5[*VAR_6];
  ++*VAR_6;

  VAR_4->vli |= (vli_type)(VAR_8 & 0x7F) << VAR_4->pos;

  if ((VAR_8 & 0x80) == 0) {

   if (VAR_8 == 0 && VAR_4->pos != 0)
    return VAR_1;

   VAR_4->pos = 0;
   return VAR_3;
  }

  VAR_4->pos += 7;
  if (VAR_4->pos == 7 * VAR_0)
   return VAR_1;
 }

 return VAR_2;
}
