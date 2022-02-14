
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct symbol {scalar_t__ start; } ;
typedef int int64_t ;


 int FUNC_0 (struct symbol*,struct symbol*) ;

__attribute__((used)) static int64_t FUNC_1(struct symbol *VAR_0, struct symbol *VAR_1,
         u64 VAR_2, u64 VAR_3)
{
 if (!VAR_0 || !VAR_1)
  return FUNC_0(VAR_0, VAR_1);

 if (VAR_0 == VAR_1)
  return 0;

 if (VAR_0)
  VAR_2 = VAR_0->start;
 if (VAR_1)
  VAR_3 = VAR_1->start;

 return (int64_t)(VAR_3 - VAR_2);
}
