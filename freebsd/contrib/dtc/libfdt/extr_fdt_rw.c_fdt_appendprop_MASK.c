
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fdt_property {scalar_t__ data; int len; } ;


 int FUNC_0 (void*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (void*,int,char const*,int,struct fdt_property**) ;
 int FUNC_3 (void*,scalar_t__,int ,int ) ;
 int FUNC_4 (int) ;
 struct fdt_property* FUNC_5 (void*,int,char const*,int*) ;
 int FUNC_6 (scalar_t__,void const*,int) ;

int FUNC_7(void *VAR_0, int VAR_1, const char *VAR_2,
     const void *VAR_3, int VAR_4)
{
 struct fdt_property *VAR_5;
 int VAR_6, VAR_7, VAR_8;

 FUNC_0(VAR_0);

 VAR_5 = FUNC_5(VAR_0, VAR_1, VAR_2, &VAR_7);
 if (VAR_5) {
  VAR_8 = VAR_4 + VAR_7;
  VAR_6 = FUNC_3(VAR_0, VAR_5->data,
      FUNC_1(VAR_7),
      FUNC_1(VAR_8));
  if (VAR_6)
   return VAR_6;
  VAR_5->len = FUNC_4(VAR_8);
  FUNC_6(VAR_5->data + VAR_7, VAR_3, VAR_4);
 } else {
  VAR_6 = FUNC_2(VAR_0, VAR_1, VAR_2, VAR_4, &VAR_5);
  if (VAR_6)
   return VAR_6;
  FUNC_6(VAR_5->data, VAR_3, VAR_4);
 }
 return 0;
}
