
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ar_obj {struct ar_obj* name; scalar_t__ elf; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct ar_obj*) ;

__attribute__((used)) static void
FUNC_2(struct ar_obj *VAR_0)
{
 if (VAR_0->elf)
  FUNC_0(VAR_0->elf);

 FUNC_1(VAR_0->name);
 FUNC_1(VAR_0);
}
