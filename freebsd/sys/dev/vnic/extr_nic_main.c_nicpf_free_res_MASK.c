
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nicpf {int * reg_base; int dev; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(struct nicpf *VAR_1)
{
 device_t VAR_2;

 VAR_2 = VAR_1->dev;

 if (VAR_1->reg_base != ((void*)0)) {
  FUNC_0(VAR_2, VAR_0,
      FUNC_1(VAR_1->reg_base), VAR_1->reg_base);
 }
}
