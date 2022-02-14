
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int * caddr_t ;
struct TYPE_2__ {int length; size_t count; int * addr; } ;


 scalar_t__ FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;
 int * FUNC_2 (int *) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static caddr_t
FUNC_3(int VAR_1)
{
 caddr_t VAR_2;
 size_t VAR_3;

 if (VAR_0.addr == ((void*)0))
  return (((void*)0));

 for (VAR_2 = VAR_0.addr, VAR_3 = 0;
      VAR_2 < VAR_0.addr + VAR_0.length && VAR_3 < VAR_0.count; VAR_3++) {
  if (FUNC_1(VAR_2, 0) == VAR_1)
   return VAR_2;

  VAR_2 = FUNC_2(VAR_2);
  while (FUNC_0(VAR_2, 0) != 0)
   VAR_2++;
  VAR_2 += 2;
 }

 return (((void*)0));
}
