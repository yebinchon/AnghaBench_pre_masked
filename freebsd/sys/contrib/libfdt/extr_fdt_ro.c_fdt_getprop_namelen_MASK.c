
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fdt_property {void const* data; int len; } ;


 int FUNC_0 (int ) ;
 struct fdt_property* FUNC_1 (void const*,int,char const*,int,int*,int*) ;
 int FUNC_2 (void const*) ;

const void *FUNC_3(const void *VAR_0, int VAR_1,
    const char *VAR_2, int VAR_3, int *VAR_4)
{
 int VAR_5;
 const struct fdt_property *VAR_6;

 VAR_6 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4,
      &VAR_5);
 if (!VAR_6)
  return ((void*)0);


 if (FUNC_2(VAR_0) < 0x10 && (VAR_5 + sizeof(*VAR_6)) % 8 &&
     FUNC_0(VAR_6->len) >= 8)
  return VAR_6->data + 4;
 return VAR_6->data;
}
