
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ tree ;
struct TYPE_3__ {scalar_t__ type_list; } ;
struct TYPE_4__ {TYPE_1__ allowed; } ;
struct eh_region {TYPE_2__ u; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 struct eh_region* FUNC_3 (int ,struct eh_region*) ;

struct eh_region *
FUNC_4 (struct eh_region *VAR_1, tree VAR_2)
{
  struct eh_region *VAR_3 = FUNC_3 (VAR_0, VAR_1);
  VAR_3->u.allowed.type_list = VAR_2;

  for (; VAR_2 ; VAR_2 = FUNC_0 (VAR_2))
    FUNC_2 (FUNC_1 (VAR_2));

  return VAR_3;
}
