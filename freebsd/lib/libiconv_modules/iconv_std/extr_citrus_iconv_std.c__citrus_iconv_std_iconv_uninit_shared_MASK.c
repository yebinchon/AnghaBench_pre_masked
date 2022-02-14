
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _citrus_iconv_std_shared {int is_srcs; int is_dst_encoding; int is_src_encoding; } ;
struct _citrus_iconv_shared {struct _citrus_iconv_std_shared* ci_closure; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct _citrus_iconv_std_shared*) ;

__attribute__((used)) static void
FUNC_3(struct _citrus_iconv_shared *VAR_0)
{
 struct _citrus_iconv_std_shared *VAR_1 = VAR_0->ci_closure;

 if (VAR_1 == ((void*)0))
  return;

 FUNC_0(VAR_1->is_src_encoding);
 FUNC_0(VAR_1->is_dst_encoding);
 FUNC_1(&VAR_1->is_srcs);
 FUNC_2(VAR_1);
}
