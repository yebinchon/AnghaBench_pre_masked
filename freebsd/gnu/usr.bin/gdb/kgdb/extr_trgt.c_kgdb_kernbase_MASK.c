
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct minimal_symbol {int dummy; } ;
typedef scalar_t__ CORE_ADDR ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct minimal_symbol*) ;
 struct minimal_symbol* FUNC_1 (char*,int *,int *) ;

__attribute__((used)) static CORE_ADDR
FUNC_2 (void)
{
 static CORE_ADDR VAR_1;
 struct minimal_symbol *VAR_2;

 if (VAR_1 == 0) {
  VAR_2 = FUNC_1 ("kernbase", ((void*)0), ((void*)0));
  if (VAR_2 == ((void*)0)) {
   VAR_1 = VAR_0;
  } else {
   VAR_1 = FUNC_0 (VAR_2);
  }
 }
 return VAR_1;
}
