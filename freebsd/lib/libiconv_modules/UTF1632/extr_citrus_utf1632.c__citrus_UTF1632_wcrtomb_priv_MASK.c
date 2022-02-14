
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int wchar_t ;
struct TYPE_5__ {int current_endian; } ;
typedef TYPE_1__ _UTF1632State ;
struct TYPE_6__ {int mode; int preffered_endian; } ;
typedef TYPE_2__ _UTF1632EncodingInfo ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,char const*,size_t) ;

__attribute__((used)) static int
FUNC_1(_UTF1632EncodingInfo *VAR_5, char *VAR_6, size_t VAR_7,
    wchar_t VAR_8, _UTF1632State *VAR_9, size_t *VAR_10)
{
 wchar_t VAR_11;
 static const char VAR_12[4] = {
     0x00, 0x00, 0xFE, 0xFF,
 };
 const char *VAR_13 = &VAR_12[0];
 size_t VAR_14;

 VAR_14 = (size_t)0;
 if (VAR_9->current_endian == VAR_2) {
  if ((VAR_5->mode & VAR_3) == 0) {
   if (VAR_5->mode & VAR_4)
    VAR_14 = 4;
   else {
    VAR_14 = 2;
    VAR_13 += 2;
   }
   if (VAR_7 < VAR_14)
    goto e2big;
   FUNC_0(VAR_6, VAR_13, VAR_14);
   VAR_6 += VAR_14, VAR_7 -= VAR_14;
  }
  VAR_9->current_endian = VAR_5->preffered_endian;
 }

 VAR_11 = 0;
 if ((VAR_5->mode & VAR_4)==0) {

  if (VAR_8 > 0xFFFF) {

   if (VAR_8 > 0x10FFFF)
    goto ilseq;
   if (VAR_7 < 4)
    goto e2big;
   VAR_14 += 4;
   VAR_8 -= 0x10000;
   VAR_11 = (VAR_8 & 0x3FF) | 0xDC00;
   VAR_8 = (VAR_8>>10) | 0xD800;
  } else {
   if (VAR_7 < 2)
    goto e2big;
   VAR_14 += 2;
  }

surrogate:
  switch (VAR_9->current_endian) {
  case 129:
   VAR_6[1] = VAR_8;
   VAR_6[0] = (VAR_8 >>= 8);
   break;
  case 128:
   VAR_6[0] = VAR_8;
   VAR_6[1] = (VAR_8 >>= 8);
   break;
  }
  if (VAR_11 != 0) {
   VAR_8 = VAR_11;
   VAR_11 = 0;
   VAR_6 += 2;
   goto surrogate;
  }
 } else {

  if (VAR_8 >= 0xD800 && VAR_8 <= 0xDFFF)
   goto ilseq;
  if (VAR_7 < 4)
   goto e2big;
  VAR_14 += 4;
  switch (VAR_9->current_endian) {
  case 129:
   VAR_6[3] = VAR_8;
   VAR_6[2] = (VAR_8 >>= 8);
   VAR_6[1] = (VAR_8 >>= 8);
   VAR_6[0] = (VAR_8 >>= 8);
   break;
  case 128:
   VAR_6[0] = VAR_8;
   VAR_6[1] = (VAR_8 >>= 8);
   VAR_6[2] = (VAR_8 >>= 8);
   VAR_6[3] = (VAR_8 >>= 8);
   break;
  }
 }
 *VAR_10 = VAR_14;

 return (0);

ilseq:
 *VAR_10 = (size_t)-1;
 return (VAR_1);
e2big:
 *VAR_10 = (size_t)-1;
 return (VAR_0);
}
