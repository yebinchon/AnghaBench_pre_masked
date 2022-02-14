
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fdt_property {int nameoff; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (void const*,int) ;
 struct fdt_property* FUNC_2 (void const*,int,int *) ;
 int FUNC_3 (void const*,int) ;
 char* FUNC_4 (void const*,int ) ;
 int FUNC_5 (char const*) ;

__attribute__((used)) static int FUNC_6(const void *VAR_1, int VAR_2)
{
 const struct fdt_property *VAR_3;
 const char *VAR_4;
 int VAR_5;

 VAR_5 = FUNC_1(VAR_1, VAR_2);
 do {

  if (VAR_5 < 0)
   return VAR_5 == -VAR_0 ? 0 : VAR_5;
  VAR_3 = FUNC_2(VAR_1, VAR_5, ((void*)0));
  VAR_4 = FUNC_4(VAR_1, FUNC_0(VAR_3->nameoff));
  if (VAR_4)
   FUNC_5(VAR_4);
  VAR_5 = FUNC_3(VAR_1, VAR_5);
 } while (1);
}
