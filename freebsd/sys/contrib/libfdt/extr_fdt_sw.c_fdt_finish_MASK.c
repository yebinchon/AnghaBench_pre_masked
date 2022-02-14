
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct fdt_property {void* nameoff; } ;
typedef void* fdt32_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (void*) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (void*) ;
 void** FUNC_3 (void*,int) ;
 scalar_t__ FUNC_4 (void*,int,int*) ;
 int FUNC_5 (void*) ;
 struct fdt_property* FUNC_6 (void*,int) ;
 int FUNC_7 (void*,int ) ;
 int FUNC_8 (void*,int) ;
 int FUNC_9 (void*,int) ;
 int FUNC_10 (void*) ;
 int FUNC_11 (void*) ;
 int FUNC_12 (void*) ;
 int FUNC_13 (char*,char*,int) ;

int FUNC_14(void *VAR_4)
{
 char *VAR_5 = (char *)VAR_4;
 fdt32_t *VAR_6;
 int VAR_7, VAR_8;
 uint32_t VAR_9;
 int VAR_10, VAR_11;

 FUNC_0(VAR_4);


 VAR_6 = FUNC_3(VAR_4, sizeof(*VAR_6));
 if (! VAR_6)
  return -VAR_1;
 *VAR_6 = FUNC_1(VAR_0);


 VAR_7 = FUNC_12(VAR_4) - FUNC_10(VAR_4);
 VAR_8 = FUNC_5(VAR_4) + FUNC_11(VAR_4);
 FUNC_13(VAR_5 + VAR_8, VAR_5 + VAR_7, FUNC_10(VAR_4));
 FUNC_8(VAR_4, VAR_8);


 VAR_10 = 0;
 while ((VAR_9 = FUNC_4(VAR_4, VAR_10, &VAR_11)) != VAR_0) {
  if (VAR_9 == VAR_3) {
   struct fdt_property *VAR_12 =
    FUNC_6(VAR_4, VAR_10);
   int VAR_13;

   VAR_13 = FUNC_2(VAR_12->nameoff);
   VAR_13 += FUNC_10(VAR_4);
   VAR_12->nameoff = FUNC_1(VAR_13);
  }
  VAR_10 = VAR_11;
 }
 if (VAR_11 < 0)
  return VAR_11;


 FUNC_9(VAR_4, VAR_8 + FUNC_10(VAR_4));
 FUNC_7(VAR_4, VAR_2);
 return 0;
}
