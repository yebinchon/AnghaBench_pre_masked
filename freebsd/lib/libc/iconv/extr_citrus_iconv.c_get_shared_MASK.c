
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _citrus_iconv_shared {int ci_used_count; } ;
typedef int convname ;


 int VAR_0 ;
 int FUNC_0 (int *,struct _citrus_iconv_shared*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,struct _citrus_iconv_shared*,int ,int) ;
 int FUNC_4 (int *,struct _citrus_iconv_shared*,int ,int ,char*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (char*) ;
 int VAR_4 ;
 int FUNC_6 (struct _citrus_iconv_shared**,char*,char const*,char const*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_7 (char*,int,char*,char const*,char const*) ;

__attribute__((used)) static int
FUNC_8(struct _citrus_iconv_shared * __restrict * __restrict VAR_8,
    const char *VAR_9, const char *VAR_10)
{
 struct _citrus_iconv_shared * VAR_11;
 char VAR_12[VAR_0];
 int VAR_13, VAR_14 = 0;

 FUNC_7(VAR_12, sizeof(VAR_12), "%s/%s", VAR_9, VAR_10);

 FUNC_2(&VAR_2);


 VAR_13 = FUNC_5(VAR_12);
 FUNC_4(&VAR_6, VAR_11, VAR_1, VAR_4,
     VAR_12, VAR_13);
 if (VAR_11 != ((void*)0)) {

  if (VAR_11->ci_used_count == 0) {
   FUNC_0(&VAR_7, VAR_11, VAR_3);
   VAR_5--;
  }
  VAR_11->ci_used_count++;
  *VAR_8 = VAR_11;
  goto quit;
 }


 VAR_14 = FUNC_6(&VAR_11, VAR_12, VAR_9, VAR_10);
 if (VAR_14)
  goto quit;

 FUNC_3(&VAR_6, VAR_11, VAR_1, VAR_13);
 VAR_11->ci_used_count = 1;
 *VAR_8 = VAR_11;

quit:
 FUNC_1(&VAR_2);

 return (VAR_14);
}
