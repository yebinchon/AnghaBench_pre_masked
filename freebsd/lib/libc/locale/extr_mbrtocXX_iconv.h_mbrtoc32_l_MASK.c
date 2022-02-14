
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct _citrus_iconv {TYPE_1__* cv_shared; } ;
typedef int mbstate_t ;
typedef int locale_t ;
typedef scalar_t__ charXX_t ;
struct TYPE_6__ {char* bytes; scalar_t__* widechar; } ;
struct TYPE_7__ {int initialized; int srcbuf_len; int dstbuf_len; char* srcbuf; TYPE_2__ dstbuf; struct _citrus_iconv iconv; } ;
typedef TYPE_3__ _ConversionState ;
struct TYPE_8__ {int mbrtocXX; } ;
struct TYPE_5__ {int ci_discard_ilseq; int * ci_hooks; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 TYPE_4__* FUNC_1 (int ) ;
 int FUNC_2 (struct _citrus_iconv*,char**,size_t*,char**,size_t*,int ,size_t*) ;
 scalar_t__ FUNC_3 (struct _citrus_iconv**,int ,int ) ;
 int FUNC_4 (int) ;
 int VAR_5 ;
 int FUNC_5 (char*,char const*,size_t) ;
 int FUNC_6 (char*,char*,int) ;
 int FUNC_7 (int ,int ) ;

size_t
FUNC_8(charXX_t * __restrict VAR_6, const char * __restrict VAR_7, size_t VAR_8,
    mbstate_t * __restrict VAR_9, locale_t VAR_10)
{
 _ConversionState *VAR_11;
 struct _citrus_iconv *VAR_12;
 size_t VAR_13, VAR_14;
 charXX_t VAR_15;

 FUNC_0(VAR_10);
 if (VAR_9 == ((void*)0))
  VAR_9 = &(FUNC_1(VAR_10)->mbrtocXX);
 VAR_11 = (_ConversionState *)VAR_9;
 VAR_12 = &VAR_11->iconv;


 if (VAR_7 == ((void*)0) || !VAR_11->initialized) {
  if (FUNC_3(&VAR_12,
      FUNC_7(VAR_0, VAR_10), VAR_4) != 0) {
   VAR_11->initialized = 0;
   VAR_5 = VAR_3;
   return (-1);
  }
  VAR_12->cv_shared->ci_discard_ilseq = 1;
  VAR_12->cv_shared->ci_hooks = ((void*)0);
  VAR_11->srcbuf_len = VAR_11->dstbuf_len = 0;
  VAR_11->initialized = 1;
  if (VAR_7 == ((void*)0))
   return (0);
 }


 if (VAR_11->dstbuf_len > 0) {
  VAR_14 = (size_t)-3;
  goto return_char;
 }


 if (VAR_8 > sizeof(VAR_11->srcbuf) - VAR_11->srcbuf_len)
  VAR_8 = sizeof(VAR_11->srcbuf) - VAR_11->srcbuf_len;
 FUNC_5(VAR_11->srcbuf + VAR_11->srcbuf_len, VAR_7, VAR_8);


 for (VAR_13 = 0; ; VAR_13++) {
  char *VAR_16, *VAR_17;
  size_t VAR_18, VAR_19, VAR_20;
  int VAR_21;

  VAR_16 = VAR_11->srcbuf;
  VAR_18 = VAR_11->srcbuf_len + VAR_8;
  VAR_17 = VAR_11->dstbuf.bytes;
  VAR_19 = VAR_13 * sizeof(charXX_t);
  FUNC_4(VAR_18 <= sizeof(VAR_11->srcbuf) &&
      VAR_19 <= sizeof(VAR_11->dstbuf.bytes));
  VAR_21 = FUNC_2(VAR_12, &VAR_16, &VAR_18,
      &VAR_17, &VAR_19, 0, &VAR_20);
  VAR_11->dstbuf_len = (VAR_17 - VAR_11->dstbuf.bytes) / sizeof(charXX_t);


  if (VAR_11->dstbuf_len > 0) {
   FUNC_4(VAR_16 - VAR_11->srcbuf > VAR_11->srcbuf_len);
   VAR_14 = VAR_16 - VAR_11->srcbuf - VAR_11->srcbuf_len;
   VAR_11->srcbuf_len = 0;
   goto return_char;
  }


  if (VAR_21 == VAR_1)
   continue;


  if (VAR_20 > 0) {
   VAR_11->srcbuf_len = 0;
   VAR_5 = VAR_2;
   return ((size_t)-1);
  }


  FUNC_6(VAR_11->srcbuf, VAR_16, VAR_18);
  VAR_11->srcbuf_len = VAR_18;
  return ((size_t)-2);
 }

return_char:
 VAR_15 = VAR_11->dstbuf.widechar[0];
 FUNC_6(&VAR_11->dstbuf.widechar[0], &VAR_11->dstbuf.widechar[1],
     --VAR_11->dstbuf_len * sizeof(charXX_t));
 if (VAR_6 != ((void*)0))
  *VAR_6 = VAR_15;
 if (VAR_15 == 0)
  return (0);
 return (VAR_14);
}
