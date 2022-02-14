
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct mips_pic_intr {int consumers; } ;
typedef int device_t ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int ,struct resource*) ;
 struct mips_pic_intr* FUNC_2 (struct resource*) ;
 int VAR_0 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int
FUNC_5(device_t VAR_1, struct resource *VAR_2)
{
 struct mips_pic_intr *VAR_3;
 int VAR_4;


 if ((VAR_3 = FUNC_2(VAR_2)) == ((void*)0)) {

  return (FUNC_1(VAR_1, VAR_2));
 }


 FUNC_3(&VAR_0);
 FUNC_0(VAR_3->consumers > 0, ("refcount overrelease"));

 if (VAR_3->consumers == 1) {
  if ((VAR_4 = FUNC_1(VAR_1, VAR_2))) {
   FUNC_4(&VAR_0);
   return (VAR_4);
  }
 }
 VAR_3->consumers--;

 FUNC_4(&VAR_0);
 return (0);
}
