
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fdt_property {char const* data; } ;


 int FUNC_0 () ;
 struct fdt_property* FUNC_1 (int *,int,char*,int*) ;
 int FUNC_2 (int *,int,int*) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 () ;
 int * VAR_0 ;
 int FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (char const*,char*) ;

const char *
FUNC_7(int *VAR_1, int *VAR_2)
{
 const struct fdt_property *VAR_3;
 const struct fdt_property *VAR_4;
 int VAR_5, VAR_6 = -1;
 static int VAR_7 = 0;

 if (VAR_0 == ((void*)0)) {
  FUNC_4();
  FUNC_0();
 }

 if (*VAR_1 != 0) {
  VAR_5 = *VAR_1;

  if (VAR_5 < 0)
   return (((void*)0));
 } else {
  VAR_5 = FUNC_3(VAR_0, "/");
  if (VAR_5 < 0) {
   FUNC_5("Can't find dtb\n");
   return (((void*)0));
  }
  VAR_7 = 0;
 }


 while (1) {
  VAR_3 = ((void*)0);
  if (VAR_5 >= 0 && VAR_7 >= 0) {

   VAR_4 = FUNC_1(VAR_0, VAR_5, "status", &VAR_6);
   if (VAR_6 > 0) {
    if (FUNC_6(VAR_4->data, "disabled") == 0) {
     VAR_5 = FUNC_2(VAR_0, VAR_5, &VAR_7);
     if (VAR_5 < 0)
      return (((void*)0));
     continue;
    }
   }

   VAR_3 = FUNC_1(VAR_0, VAR_5, "compatible", &VAR_6);
  }
  if (VAR_3)
   break;
  VAR_5 = FUNC_2(VAR_0, VAR_5, &VAR_7);
  if (VAR_5 < 0)
   return (((void*)0));
 }


 VAR_5 = FUNC_2(VAR_0, VAR_5, &VAR_7);
 *VAR_1 = VAR_5;

 if (VAR_6 >= 0) {
  *VAR_2 = VAR_6;
  return (VAR_3->data);
 }
 return (((void*)0));
}
