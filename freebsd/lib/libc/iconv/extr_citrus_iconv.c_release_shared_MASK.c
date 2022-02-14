
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _citrus_iconv_shared {scalar_t__ ci_used_count; } ;


 struct _citrus_iconv_shared* FUNC_0 (int *) ;
 int FUNC_1 (int *,struct _citrus_iconv_shared*,int ) ;
 int FUNC_2 (int *,struct _citrus_iconv_shared*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct _citrus_iconv_shared*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_6 (struct _citrus_iconv_shared*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void
FUNC_7(struct _citrus_iconv_shared * __restrict VAR_6)
{

 FUNC_4(&VAR_1);
 VAR_6->ci_used_count--;
 if (VAR_6->ci_used_count == 0) {

  VAR_4++;
  FUNC_1(&VAR_5, VAR_6, VAR_2);

  while (VAR_4 > VAR_3) {
   VAR_6 = FUNC_0(&VAR_5);
   FUNC_2(&VAR_5, VAR_6, VAR_2);
   FUNC_5(VAR_6, VAR_0);
   VAR_4--;
   FUNC_6(VAR_6);
  }
 }

 FUNC_3(&VAR_1);
}
