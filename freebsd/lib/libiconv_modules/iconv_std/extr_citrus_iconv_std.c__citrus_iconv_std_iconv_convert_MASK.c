
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct _citrus_iconv_std_shared {int is_invalid; scalar_t__ is_use_invalid; } ;
struct _citrus_iconv_std_context {int sc_dst_encoding; int sc_src_encoding; } ;
struct _citrus_iconv {TYPE_1__* cv_shared; struct _citrus_iconv_std_context* cv_closure; } ;
typedef int _index_t ;
typedef int _csid_t ;
struct TYPE_2__ {scalar_t__ ci_ilseq_invalid; int ci_hooks; int ci_discard_ilseq; struct _citrus_iconv_std_shared* ci_closure; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int FUNC_0 (int *,char*,size_t,int ,int ,size_t*,int ) ;
 int FUNC_1 (struct _citrus_iconv_std_shared const*,int *,int *) ;
 int FUNC_2 (int *,int*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *,int *,char**,size_t,size_t*,int ) ;
 int FUNC_5 (int *,char*,size_t,size_t*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,char*,size_t,int ,size_t*,int ) ;

__attribute__((used)) static int
FUNC_9(struct _citrus_iconv * __restrict VAR_4,
    char * __restrict * __restrict VAR_5, size_t * __restrict VAR_6,
    char * __restrict * __restrict VAR_7, size_t * __restrict VAR_8,
    uint32_t VAR_9, size_t * __restrict VAR_10)
{
 const struct _citrus_iconv_std_shared *VAR_11 = VAR_4->cv_shared->ci_closure;
 struct _citrus_iconv_std_context *VAR_12 = VAR_4->cv_closure;
 _csid_t VAR_13;
 _index_t VAR_14;
 char *VAR_15;
 size_t VAR_16, VAR_17, VAR_18;
 int VAR_19, VAR_20 = 0;

 VAR_16 = 0;
 if (VAR_5 == ((void*)0) || *VAR_5 == ((void*)0)) {

  if (VAR_7 != ((void*)0) && *VAR_7 != ((void*)0)) {

   FUNC_7(&VAR_12->sc_src_encoding);
   FUNC_7(&VAR_12->sc_dst_encoding);
   VAR_18 = 0;

   VAR_19 = FUNC_5(&VAR_12->sc_dst_encoding,
       *VAR_7, *VAR_8, &VAR_18);
   if (VAR_19)
    goto err;

   if (VAR_18 == (size_t)-2) {

    VAR_19 = VAR_1;
    goto err;
   }
   *VAR_7 += VAR_18;
   *VAR_8 -= VAR_18;
  } else

   FUNC_3(&VAR_12->sc_dst_encoding);
  FUNC_3(&VAR_12->sc_src_encoding);
  *VAR_10 = 0;
  return (0);
 }


 for (;;) {
  if (*VAR_6 == 0) {
   VAR_19 = FUNC_2(&VAR_12->sc_src_encoding, &VAR_20);
   if (VAR_20 == 129 ||
       VAR_20 == 128)
    break;
  }


  FUNC_7(&VAR_12->sc_src_encoding);
  FUNC_7(&VAR_12->sc_dst_encoding);


  VAR_15 = *VAR_5;
  VAR_17 = VAR_18 = 0;
  VAR_19 = FUNC_4(&VAR_12->sc_src_encoding, &VAR_13, &VAR_14, &VAR_15,
      *VAR_6, &VAR_17, VAR_4->cv_shared->ci_hooks);
  if (VAR_19)
   goto err;

  if (VAR_17 == (size_t)-2) {

   VAR_19 = FUNC_2(&VAR_12->sc_src_encoding, &VAR_20);
   if (VAR_19) {
    VAR_19 = VAR_1;
    goto err;
   }
   switch (VAR_20) {
   case 129:
   case 128:

    goto next;
   }
   VAR_19 = VAR_1;
   goto err;
  }

  VAR_19 = FUNC_1(VAR_11, &VAR_13, &VAR_14);
  if (VAR_19) {
   if (VAR_19 == VAR_2) {






    if (VAR_4->cv_shared->ci_ilseq_invalid != 0) {
     VAR_19 = VAR_0;
     goto err;
    }
    VAR_16++;
    VAR_18 = 0;
    if ((((VAR_9 & VAR_3) == 0) &&
        !VAR_4->cv_shared->ci_discard_ilseq) &&
        VAR_11->is_use_invalid) {
     VAR_19 = FUNC_8(&VAR_12->sc_dst_encoding,
         *VAR_7, *VAR_8, VAR_11->is_invalid,
         &VAR_18, VAR_4->cv_shared->ci_hooks);
     if (VAR_19)
      goto err;
    }
    goto next;
   } else
    goto err;
  }

  VAR_19 = FUNC_0(&VAR_12->sc_dst_encoding,
      *VAR_7, *VAR_8, VAR_13, VAR_14, &VAR_18,
      VAR_4->cv_shared->ci_hooks);
  if (VAR_19)
   goto err;
next:
  *VAR_6 -= VAR_15-*VAR_5;
  *VAR_5 = VAR_15;
  *VAR_8 -= VAR_18;
  *VAR_7 += VAR_18;
 }
 *VAR_10 = VAR_16;

 return (0);

err:
 FUNC_6(&VAR_12->sc_src_encoding);
 FUNC_6(&VAR_12->sc_dst_encoding);
 *VAR_10 = VAR_16;

 return (VAR_19);
}
