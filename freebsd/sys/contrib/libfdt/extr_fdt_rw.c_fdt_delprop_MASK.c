
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fdt_property {int dummy; } ;


 int FUNC_0 (void*) ;
 int FUNC_1 (int) ;
 struct fdt_property* FUNC_2 (void*,int,char const*,int*) ;
 int FUNC_3 (void*,struct fdt_property*,int,int ) ;

int FUNC_4(void *VAR_0, int VAR_1, const char *VAR_2)
{
 struct fdt_property *VAR_3;
 int VAR_4, VAR_5;

 FUNC_0(VAR_0);

 VAR_3 = FUNC_2(VAR_0, VAR_1, VAR_2, &VAR_4);
 if (!VAR_3)
  return VAR_4;

 VAR_5 = sizeof(*VAR_3) + FUNC_1(VAR_4);
 return FUNC_3(VAR_0, VAR_3, VAR_5, 0);
}
