
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regional {size_t first_size; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (size_t) ;
 int FUNC_2 (struct regional*) ;

struct regional*
FUNC_3(size_t VAR_0)
{
 struct regional* VAR_1 = (struct regional*)FUNC_1(VAR_0);
 FUNC_0(sizeof(struct regional) <= VAR_0);
 if(!VAR_1) return ((void*)0);
 VAR_1->first_size = VAR_0;
 FUNC_2(VAR_1);
 return VAR_1;
}
