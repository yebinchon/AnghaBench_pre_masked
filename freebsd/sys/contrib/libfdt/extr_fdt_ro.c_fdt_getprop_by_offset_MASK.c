
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fdt_property {void const* data; int len; int nameoff; } ;


 int FUNC_0 (int ) ;
 struct fdt_property* FUNC_1 (void const*,int,int*) ;
 char* FUNC_2 (void const*,int) ;
 int FUNC_3 (void const*) ;

const void *FUNC_4(const void *VAR_0, int VAR_1,
      const char **VAR_2, int *VAR_3)
{
 const struct fdt_property *VAR_4;

 VAR_4 = FUNC_1(VAR_0, VAR_1, VAR_3);
 if (!VAR_4)
  return ((void*)0);
 if (VAR_2)
  *VAR_2 = FUNC_2(VAR_0, FUNC_0(VAR_4->nameoff));


 if (FUNC_3(VAR_0) < 0x10 && (VAR_1 + sizeof(*VAR_4)) % 8 &&
     FUNC_0(VAR_4->len) >= 8)
  return VAR_4->data + 4;
 return VAR_4->data;
}
