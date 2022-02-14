
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _citrus_iconv_std_dst_list {int dummy; } ;
struct _citrus_iconv_std_dst {int sd_mapper; } ;


 struct _citrus_iconv_std_dst* FUNC_0 (struct _citrus_iconv_std_dst_list*) ;
 int FUNC_1 (struct _citrus_iconv_std_dst_list*,struct _citrus_iconv_std_dst*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct _citrus_iconv_std_dst*) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_4(struct _citrus_iconv_std_dst_list *VAR_1)
{
 struct _citrus_iconv_std_dst *VAR_2;

 while ((VAR_2 = FUNC_0(VAR_1)) != ((void*)0)) {
  FUNC_1(VAR_1, VAR_2, VAR_0);
  FUNC_2(VAR_2->sd_mapper);
  FUNC_3(VAR_2);
 }
}
