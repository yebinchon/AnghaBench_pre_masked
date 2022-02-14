
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int tree ;
struct ivopts_data {int dummy; } ;
struct TYPE_3__ {int (* type_for_size ) (unsigned int,int) ;} ;
struct TYPE_4__ {TYPE_1__ types; } ;


 int FUNC_0 (struct ivopts_data*,int ,int ,int,int *) ;
 int FUNC_1 (int ,int) ;
 TYPE_2__ VAR_0 ;
 int FUNC_2 (unsigned int,int) ;

__attribute__((used)) static void
FUNC_3 (struct ivopts_data *VAR_1,
         unsigned int VAR_2)
{
  tree VAR_3 = VAR_0.types.type_for_size (VAR_2, 1);
  FUNC_0 (VAR_1, FUNC_1 (VAR_3, 0), FUNC_1 (VAR_3, 1),
   1, ((void*)0));
}
