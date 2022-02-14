
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobj_class {int dummy; } ;
struct iconv_xlat {struct iconv_cspair* d_csp; int d_table; } ;
struct iconv_cspair {int cp_refcount; int cp_data; } ;
struct iconv_converter_class {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct kobj_class*,int ,int ) ;

__attribute__((used)) static int
FUNC_1(struct iconv_converter_class *VAR_2,
 struct iconv_cspair *VAR_3, struct iconv_cspair *VAR_4, void **VAR_5)
{
 struct iconv_xlat *VAR_6;

 VAR_6 = (struct iconv_xlat *)FUNC_0((struct kobj_class*)VAR_2, VAR_0, VAR_1);
 VAR_6->d_table = VAR_3->cp_data;
 VAR_6->d_csp = VAR_3;
 VAR_3->cp_refcount++;
 *VAR_5 = (void*)VAR_6;
 return 0;
}
