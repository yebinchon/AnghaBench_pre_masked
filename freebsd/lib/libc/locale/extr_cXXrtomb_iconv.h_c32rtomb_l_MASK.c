
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
typedef int charXX_t ;
struct TYPE_6__ {char* bytes; int * widechar; } ;
struct TYPE_7__ {int initialized; int srcbuf_len; TYPE_2__ srcbuf; struct _citrus_iconv iconv; } ;
typedef TYPE_3__ _ConversionState ;
struct TYPE_8__ {int cXXrtomb; } ;
struct TYPE_5__ {int ci_discard_ilseq; int * ci_hooks; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 size_t FUNC_1 (int ) ;
 int VAR_3 ;
 TYPE_4__* FUNC_2 (int ) ;
 int FUNC_3 (struct _citrus_iconv*,char**,size_t*,char**,size_t*,int ,size_t*) ;
 scalar_t__ FUNC_4 (struct _citrus_iconv**,int ,int ) ;
 int FUNC_5 (int) ;
 int VAR_4 ;
 int FUNC_6 (int ,int ) ;

size_t
FUNC_7(char * __restrict VAR_5, charXX_t VAR_6, mbstate_t * __restrict VAR_7,
    locale_t VAR_8)
{
 _ConversionState *VAR_9;
 struct _citrus_iconv *VAR_10;
 char *VAR_11, *VAR_12;
 size_t VAR_13, VAR_14, VAR_15;
 int VAR_16;

 FUNC_0(VAR_8);
 if (VAR_7 == ((void*)0))
  VAR_7 = &(FUNC_2(VAR_8)->cXXrtomb);
 VAR_9 = (_ConversionState *)VAR_7;
 VAR_10 = &VAR_9->iconv;


 if (VAR_5 == ((void*)0) || !VAR_9->initialized) {
  if (FUNC_4(&VAR_10, VAR_3,
      FUNC_6(VAR_0, VAR_8)) != 0) {
   VAR_9->initialized = 0;
   VAR_4 = VAR_2;
   return (-1);
  }
  VAR_10->cv_shared->ci_discard_ilseq = 1;
  VAR_10->cv_shared->ci_hooks = ((void*)0);
  VAR_9->srcbuf_len = 0;
  VAR_9->initialized = 1;
  if (VAR_5 == ((void*)0))
   return (1);
 }

 FUNC_5(VAR_9->srcbuf_len < sizeof(VAR_9->srcbuf.widechar) / sizeof(charXX_t));
 VAR_9->srcbuf.widechar[VAR_9->srcbuf_len++] = VAR_6;


 VAR_11 = VAR_9->srcbuf.bytes;
 VAR_13 = VAR_9->srcbuf_len * sizeof(charXX_t);
 VAR_12 = VAR_5;
 VAR_14 = FUNC_1(VAR_8);
 VAR_16 = FUNC_3(VAR_10, &VAR_11, &VAR_13, &VAR_12, &VAR_14,
     0, &VAR_15);


 if (VAR_16 == VAR_2)
  return (0);
 VAR_9->srcbuf_len = 0;


 if (VAR_12 == VAR_5) {
  VAR_4 = VAR_1;
  return ((size_t)-1);
 }
 return (VAR_12 - VAR_5);
}
