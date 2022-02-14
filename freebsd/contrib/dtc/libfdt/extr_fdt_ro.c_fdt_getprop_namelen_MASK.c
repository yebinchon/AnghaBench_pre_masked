
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fdt_property {void const* data; } ;


 struct fdt_property* FUNC_0 (void const*,int,char const*,int,int*) ;

const void *FUNC_1(const void *VAR_0, int VAR_1,
    const char *VAR_2, int VAR_3, int *VAR_4)
{
 const struct fdt_property *VAR_5;

 VAR_5 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
 if (! VAR_5)
  return ((void*)0);

 return VAR_5->data;
}
