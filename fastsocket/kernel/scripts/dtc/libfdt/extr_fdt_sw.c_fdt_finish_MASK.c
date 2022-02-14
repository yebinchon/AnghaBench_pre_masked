
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct fdt_property {void* nameoff; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (void*) ;
 scalar_t__* FUNC_1 (void*,int) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (void*) ;
 scalar_t__ FUNC_4 (void*,int,int*) ;
 int FUNC_5 (void*) ;
 struct fdt_property* FUNC_6 (void*,int,int) ;
 int FUNC_7 (void*,int ) ;
 int FUNC_8 (void*,int) ;
 int FUNC_9 (void*,int) ;
 int FUNC_10 (void*) ;
 int FUNC_11 (void*) ;
 int FUNC_12 (void*) ;
 int FUNC_13 (char*,char*,int) ;

int FUNC_14(void *VAR_5)
{
 char *VAR_6 = (char *)VAR_5;
 uint32_t *VAR_7;
 int VAR_8, VAR_9;
 uint32_t VAR_10;
 int VAR_11, VAR_12;

 FUNC_0(VAR_5);


 VAR_7 = FUNC_1(VAR_5, sizeof(*VAR_7));
 if (! VAR_7)
  return -VAR_2;
 *VAR_7 = FUNC_2(VAR_0);


 VAR_8 = FUNC_12(VAR_5) - FUNC_10(VAR_5);
 VAR_9 = FUNC_5(VAR_5) + FUNC_11(VAR_5);
 FUNC_13(VAR_6 + VAR_9, VAR_6 + VAR_8, FUNC_10(VAR_5));
 FUNC_8(VAR_5, VAR_9);


 VAR_11 = 0;
 while ((VAR_10 = FUNC_4(VAR_5, VAR_11, &VAR_12)) != VAR_0) {
  if (VAR_10 == VAR_4) {
   struct fdt_property *VAR_13 =
    FUNC_6(VAR_5, VAR_11, sizeof(*VAR_13));
   int VAR_14;

   if (! VAR_13)
    return -VAR_1;

   VAR_14 = FUNC_3(VAR_13->nameoff);
   VAR_14 += FUNC_10(VAR_5);
   VAR_13->nameoff = FUNC_2(VAR_14);
  }
  VAR_11 = VAR_12;
 }


 FUNC_9(VAR_5, VAR_9 + FUNC_10(VAR_5));
 FUNC_7(VAR_5, VAR_3);
 return 0;
}
