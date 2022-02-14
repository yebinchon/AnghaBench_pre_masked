
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct __line_walk_param {scalar_t__ retval; int data; int callback; } ;
typedef int Dwarf_Die ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int,int ,int ) ;

__attribute__((used)) static int FUNC_1(Dwarf_Die *VAR_2, void *VAR_3)
{
 struct __line_walk_param *VAR_4 = VAR_3;

 VAR_4->retval = FUNC_0(VAR_2, 1, VAR_4->callback, VAR_4->data);
 if (VAR_4->retval != 0)
  return VAR_0;

 return VAR_1;
}
