
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fdt_property {void* data; void* len; void* nameoff; void* tag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void*) ;
 scalar_t__ FUNC_1 (int) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (void*,char const*) ;
 struct fdt_property* FUNC_4 (void*,scalar_t__) ;

int FUNC_5(void *VAR_2, const char *VAR_3, int VAR_4, void **VAR_5)
{
 struct fdt_property *VAR_6;
 int VAR_7;

 FUNC_0(VAR_2);

 VAR_7 = FUNC_3(VAR_2, VAR_3);
 if (VAR_7 == 0)
  return -VAR_0;

 VAR_6 = FUNC_4(VAR_2, sizeof(*VAR_6) + FUNC_1(VAR_4));
 if (! VAR_6)
  return -VAR_0;

 VAR_6->tag = FUNC_2(VAR_1);
 VAR_6->nameoff = FUNC_2(VAR_7);
 VAR_6->len = FUNC_2(VAR_4);
 *VAR_5 = VAR_6->data;
 return 0;
}
