
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct typetable {scalar_t__ table; scalar_t__ stattable; } ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static inline void
FUNC_1(struct typetable *VAR_0)
{

 if (VAR_0->table != VAR_0->stattable)
  FUNC_0 (VAR_0->table);
}
