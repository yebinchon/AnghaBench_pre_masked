
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct _citrus_iconv_shared {TYPE_1__* ci_ops; } ;
struct _citrus_iconv {struct _citrus_iconv_shared* cv_shared; } ;
typedef int path ;
struct TYPE_2__ {int (* io_init_context ) (struct _citrus_iconv*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* VAR_3 ;
 int VAR_4 ;
 char* VAR_5 ;
 char const* FUNC_0 (char*,char const*,char*,size_t,int ) ;
 int VAR_6 ;
 int FUNC_1 (struct _citrus_iconv*) ;
 int FUNC_2 (struct _citrus_iconv_shared**,char*,char*) ;
 int FUNC_3 () ;
 struct _citrus_iconv* FUNC_4 (int) ;
 char* FUNC_5 (int ) ;
 int FUNC_6 (struct _citrus_iconv_shared*) ;
 int FUNC_7 (char*,int,char*,char*,char*) ;
 int * FUNC_8 (char*,char) ;
 scalar_t__ FUNC_9 (char const*,char*) ;
 int FUNC_10 (char*,char const*,size_t) ;
 int FUNC_11 (struct _citrus_iconv*) ;

int
FUNC_12(struct _citrus_iconv * __restrict * __restrict VAR_7,
    const char * __restrict VAR_8, const char * __restrict VAR_9)
{
 struct _citrus_iconv *VAR_10 = ((void*)0);
 struct _citrus_iconv_shared *VAR_11 = ((void*)0);
 char VAR_12[VAR_2], VAR_13[VAR_2];



 int VAR_14;

 FUNC_3();


 if ((FUNC_9(VAR_8, "") == 0) || (FUNC_9(VAR_8, "char") == 0))
  VAR_8 = FUNC_5(VAR_0);
 if ((FUNC_9(VAR_9, "") == 0) || (FUNC_9(VAR_9, "char") == 0))
  VAR_9 = FUNC_5(VAR_0);
 FUNC_10(VAR_13, VAR_8, (size_t)VAR_2);
 FUNC_10(VAR_12, VAR_9, (size_t)VAR_2);



 if (FUNC_8(VAR_13, '/') != ((void*)0) || FUNC_8(VAR_12, '/'))
  return (VAR_1);


 VAR_14 = FUNC_2(&VAR_11, VAR_13, VAR_12);
 if (VAR_14)
  return (VAR_14);


 if (*VAR_7 == ((void*)0)) {
  VAR_10 = FUNC_4(sizeof(*VAR_10));
  if (VAR_10 == ((void*)0)) {
   VAR_14 = VAR_6;
   FUNC_6(VAR_11);
   return (VAR_14);
  }
  *VAR_7 = VAR_10;
 }
 (*VAR_7)->cv_shared = VAR_11;
 VAR_14 = (*VAR_11->ci_ops->io_init_context)(*VAR_7);
 if (VAR_14) {
  FUNC_6(VAR_11);
  FUNC_1(VAR_10);
  return (VAR_14);
 }
 return (0);
}
