
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int wchar_t ;
struct TYPE_7__ {int chlen; int* ch; int current_endian; } ;
typedef TYPE_1__ _UTF1632State ;
struct TYPE_8__ {int mode; int preffered_endian; } ;
typedef TYPE_2__ _UTF1632EncodingInfo ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_2__*,TYPE_1__*) ;

__attribute__((used)) static int
FUNC_1(_UTF1632EncodingInfo *VAR_4, wchar_t *VAR_5,
    char **VAR_6, size_t VAR_7, _UTF1632State *VAR_8, size_t *VAR_9)
{
 char *VAR_10;
 size_t VAR_11;
 wchar_t VAR_12 = L'\0';
 int VAR_13, VAR_14, VAR_15;

 VAR_10 = *VAR_6;

 if (VAR_10 == ((void*)0)) {
  FUNC_0(VAR_4, VAR_8);
  *VAR_9 = 0;
  return (0);
 }

 VAR_11 = 0;
 VAR_13 = VAR_8->chlen;

refetch:
 VAR_15 = ((VAR_4->mode & VAR_3) != 0 || VAR_13 >= 2) ? 4 : 2;

 while (VAR_13 < VAR_15) {
  if (VAR_7 == 0)
   goto restart;
  VAR_8->ch[VAR_13++] = *VAR_10++;
  VAR_7--;
  VAR_11++;
 }


 if ((VAR_4->mode & VAR_3) == 0) {

  if (VAR_8->ch[0] == 0xFE && VAR_8->ch[1] == 0xFF) {
   VAR_8->current_endian = 129;
   VAR_13 = 0;
   goto refetch;
  } else if (VAR_8->ch[0] == 0xFF && VAR_8->ch[1] == 0xFE) {
   VAR_8->current_endian = 128;
   VAR_13 = 0;
   goto refetch;
  }
 } else {

  if (VAR_8->ch[0] == 0x00 && VAR_8->ch[1] == 0x00 &&
      VAR_8->ch[2] == 0xFE && VAR_8->ch[3] == 0xFF) {
   VAR_8->current_endian = 129;
   VAR_13 = 0;
   goto refetch;
  } else if (VAR_8->ch[0] == 0xFF && VAR_8->ch[1] == 0xFE &&
      VAR_8->ch[2] == 0x00 && VAR_8->ch[3] == 0x00) {
   VAR_8->current_endian = 128;
   VAR_13 = 0;
   goto refetch;
  }
 }
 VAR_14 = ((VAR_4->mode & VAR_2) != 0 ||
     VAR_8->current_endian == VAR_1) ? VAR_4->preffered_endian :
     VAR_8->current_endian;


 if ((VAR_4->mode & VAR_3) == 0) {

  if (VAR_15 == 2) {
   switch (VAR_14) {
   case 128:
    VAR_12 = (VAR_8->ch[0] |
        ((wchar_t)VAR_8->ch[1] << 8));
    break;
   case 129:
    VAR_12 = (VAR_8->ch[1] |
        ((wchar_t)VAR_8->ch[0] << 8));
    break;
   default:
    goto ilseq;
   }
   if (VAR_12 >= 0xD800 && VAR_12 <= 0xDBFF) {

    VAR_15 = 4;
    goto refetch;
   }
  } else {

   VAR_12 -= 0xD800;
   VAR_12 <<= 10;
   switch (VAR_14) {
   case 128:
    if (VAR_8->ch[3] < 0xDC || VAR_8->ch[3] > 0xDF)
     goto ilseq;
    VAR_12 |= VAR_8->ch[2];
    VAR_12 |= (wchar_t)(VAR_8->ch[3] & 3) << 8;
    break;
   case 129:
    if (VAR_8->ch[2]<0xDC || VAR_8->ch[2]>0xDF)
     goto ilseq;
    VAR_12 |= VAR_8->ch[3];
    VAR_12 |= (wchar_t)(VAR_8->ch[2] & 3) << 8;
    break;
   default:
    goto ilseq;
   }
   VAR_12 += 0x10000;
  }
 } else {

  switch (VAR_14) {
  case 128:
   VAR_12 = (VAR_8->ch[0] |
       ((wchar_t)VAR_8->ch[1] << 8) |
       ((wchar_t)VAR_8->ch[2] << 16) |
       ((wchar_t)VAR_8->ch[3] << 24));
   break;
  case 129:
   VAR_12 = (VAR_8->ch[3] |
       ((wchar_t)VAR_8->ch[2] << 8) |
       ((wchar_t)VAR_8->ch[1] << 16) |
       ((wchar_t)VAR_8->ch[0] << 24));
   break;
  default:
   goto ilseq;
  }
  if (VAR_12 >= 0xD800 && VAR_12 <= 0xDFFF)
   goto ilseq;
 }


 *VAR_5 = VAR_12;
 VAR_8->chlen = 0;
 *VAR_9 = VAR_11;
 *VAR_6 = VAR_10;

 return (0);

ilseq:
 *VAR_9 = (size_t)-1;
 VAR_8->chlen = 0;
 return (VAR_0);

restart:
 *VAR_9 = (size_t)-2;
 VAR_8->chlen = VAR_13;
 *VAR_6 = VAR_10;
 return (0);
}
