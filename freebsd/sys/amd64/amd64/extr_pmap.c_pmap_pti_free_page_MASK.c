
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* vm_page_t ;
struct TYPE_5__ {scalar_t__ ref_count; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static bool
FUNC_3(vm_page_t VAR_0)
{

 FUNC_0(VAR_0->ref_count > 0, ("page %p not referenced", VAR_0));
 if (!FUNC_2(VAR_0))
  return (0);
 FUNC_1(VAR_0);
 return (1);
}
