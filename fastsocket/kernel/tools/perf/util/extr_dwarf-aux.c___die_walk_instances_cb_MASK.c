
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_1__ ;


struct __instance_walk_param {scalar_t__ addr; scalar_t__ retval; int data; scalar_t__ (* callback ) (TYPE_1__*,int ) ;} ;
struct TYPE_12__ {scalar_t__ addr; } ;
typedef TYPE_1__ Dwarf_Die ;
typedef int Dwarf_Attribute ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int * FUNC_3 (TYPE_1__*,int ,int *) ;
 int FUNC_4 (TYPE_1__*,int*) ;
 TYPE_1__* FUNC_5 (int *,TYPE_1__*) ;
 scalar_t__ FUNC_6 (TYPE_1__*) ;
 scalar_t__ FUNC_7 (TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_8(Dwarf_Die *VAR_4, void *VAR_5)
{
 struct __instance_walk_param *VAR_6 = VAR_5;
 Dwarf_Attribute VAR_7;
 Dwarf_Die VAR_8;
 Dwarf_Attribute *VAR_9;
 Dwarf_Die *VAR_10;
 int VAR_11;

 VAR_9 = FUNC_3(VAR_4, VAR_2, &VAR_7);
 if (VAR_9 == ((void*)0))
  return VAR_0;

 VAR_10 = FUNC_5(VAR_9, &VAR_8);
 if (VAR_10 == ((void*)0) || VAR_10->addr != VAR_6->addr)
  return VAR_0;


 if (FUNC_6(VAR_4) == VAR_3) {
  FUNC_4(VAR_10, &VAR_11);
  if (FUNC_1(VAR_4) == VAR_11) {
   VAR_11 = FUNC_2(VAR_10);
   if (FUNC_0(VAR_4) == VAR_11)
    return VAR_0;
  }
 }

 VAR_6->retval = VAR_6->callback(VAR_4, VAR_6->data);

 return (VAR_6->retval) ? VAR_1 : VAR_0;
}
