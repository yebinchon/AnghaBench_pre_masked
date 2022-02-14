
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bucket {struct bucket* name; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct bucket*) ;

__attribute__((used)) static void
FUNC_1(void *VAR_1)
{
 size_t VAR_2;
 struct bucket *VAR_3 = (struct bucket *)VAR_1;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
  FUNC_0(VAR_3[VAR_2].name);
 FUNC_0(VAR_3);
}
