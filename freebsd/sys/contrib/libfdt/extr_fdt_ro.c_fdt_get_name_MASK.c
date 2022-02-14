
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fdt_node_header {char* name; } ;


 int VAR_0 ;
 int FUNC_0 (void const*) ;
 int FUNC_1 (void const*,int) ;
 struct fdt_node_header* FUNC_2 (void const*,int) ;
 int FUNC_3 (void const*) ;
 int FUNC_4 (char const*) ;
 char* FUNC_5 (char const*,char) ;

const char *FUNC_6(const void *VAR_1, int VAR_2, int *VAR_3)
{
 const struct fdt_node_header *VAR_4 = FUNC_2(VAR_1, VAR_2);
 const char *VAR_5;
 int VAR_6;

 if (((VAR_6 = FUNC_0(VAR_1)) != 0)
     || ((VAR_6 = FUNC_1(VAR_1, VAR_2)) < 0))
   goto fail;

 VAR_5 = VAR_4->name;

 if (FUNC_3(VAR_1) < 0x10) {





  const char *VAR_7;
  VAR_7 = FUNC_5(VAR_5, '/');
  if (VAR_7 == ((void*)0)) {
   VAR_6 = -VAR_0;
   goto fail;
  }
  VAR_5 = VAR_7+1;
 }

 if (VAR_3)
  *VAR_3 = FUNC_4(VAR_5);

 return VAR_5;

 fail:
 if (VAR_3)
  *VAR_3 = VAR_6;
 return ((void*)0);
}
