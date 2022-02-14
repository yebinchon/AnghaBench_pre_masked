
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symbol {scalar_t__ name; } ;


 int VAR_0 ;
 int FUNC_0 (int *,scalar_t__,int ,int *,int ) ;

__attribute__((used)) static bool FUNC_1(struct symbol *VAR_1)
{
 if (VAR_1->name && !FUNC_0(&VAR_0, VAR_1->name, 0, ((void*)0), 0))
  return 1;

 return 0;
}
