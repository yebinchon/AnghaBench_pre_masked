
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct mips_pic_intr {scalar_t__ consumers; } ;
typedef int device_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,struct resource*) ;
 struct mips_pic_intr* FUNC_1 (struct resource*) ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int
FUNC_4(device_t VAR_3, struct resource *VAR_4)
{
 struct mips_pic_intr *VAR_5;
 int VAR_6;


 if ((VAR_5 = FUNC_1(VAR_4)) == ((void*)0)) {

  return (FUNC_0(VAR_3, VAR_4));
 }


 FUNC_2(&VAR_2);
 if (VAR_5->consumers == VAR_1) {
  FUNC_3(&VAR_2);
  return (VAR_0);
 }

 if (VAR_5->consumers == 0) {
  if ((VAR_6 = FUNC_0(VAR_3, VAR_4))) {
   FUNC_3(&VAR_2);
   return (VAR_6);
  }
 }

 VAR_5->consumers++;
 FUNC_3(&VAR_2);

 return (0);
}
