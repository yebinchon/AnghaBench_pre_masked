
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fdt_node_header {char const* name; } ;


 int FUNC_0 (void const*,int) ;
 struct fdt_node_header* FUNC_1 (void const*,int) ;
 int FUNC_2 (void const*) ;
 int FUNC_3 (char const*) ;

const char *FUNC_4(const void *VAR_0, int VAR_1, int *VAR_2)
{
 const struct fdt_node_header *VAR_3 = FUNC_1(VAR_0, VAR_1);
 int VAR_4;

 if (((VAR_4 = FUNC_2(VAR_0)) != 0)
     || ((VAR_4 = FUNC_0(VAR_0, VAR_1)) < 0))
   goto fail;

 if (VAR_2)
  *VAR_2 = FUNC_3(VAR_3->name);

 return VAR_3->name;

 fail:
 if (VAR_2)
  *VAR_2 = VAR_4;
 return ((void*)0);
}
