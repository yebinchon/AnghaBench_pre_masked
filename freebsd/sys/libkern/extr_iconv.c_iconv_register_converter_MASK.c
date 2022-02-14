
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobj_class {int dummy; } ;
struct iconv_converter_class {int refs; } ;


 int FUNC_0 (int *,struct iconv_converter_class*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct kobj_class*) ;

__attribute__((used)) static int
FUNC_2(struct iconv_converter_class *VAR_2)
{
 FUNC_1((struct kobj_class*)VAR_2);
 VAR_2->refs++;
 FUNC_0(&VAR_1, VAR_2, VAR_0);
 return 0;
}
