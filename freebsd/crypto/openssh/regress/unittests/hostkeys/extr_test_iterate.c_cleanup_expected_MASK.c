
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * key; } ;
struct expected {TYPE_1__ l; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void
FUNC_1(struct expected *VAR_0, size_t VAR_1)
{
 size_t VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++) {
  FUNC_0(VAR_0[VAR_2].l.key);
  VAR_0[VAR_2].l.key = ((void*)0);
 }
}
