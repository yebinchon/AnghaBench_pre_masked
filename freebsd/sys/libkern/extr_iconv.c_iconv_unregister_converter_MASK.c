
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobj_class {int dummy; } ;
struct iconv_converter_class {int refs; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int *,struct iconv_converter_class*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct kobj_class*) ;

__attribute__((used)) static int
FUNC_3(struct iconv_converter_class *VAR_3)
{
 VAR_3->refs--;
 if (VAR_3->refs > 1) {
  FUNC_0("converter has %d references left\n", VAR_3->refs);
  return VAR_0;
 }
 FUNC_1(&VAR_2, VAR_3, VAR_1);
 FUNC_2((struct kobj_class*)VAR_3);
 return 0;
}
