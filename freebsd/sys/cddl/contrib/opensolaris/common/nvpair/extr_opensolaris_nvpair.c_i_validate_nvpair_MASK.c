
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int nvp_size; } ;
typedef TYPE_1__ nvpair_t ;
typedef int data_type_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,int ,int ) ;
 scalar_t__ FUNC_6 (TYPE_1__*) ;
 scalar_t__ FUNC_7 (int ,int ,int ) ;

__attribute__((used)) static int
FUNC_8(nvpair_t *VAR_1)
{
 data_type_t VAR_2 = FUNC_1(VAR_1);
 int VAR_3, VAR_4;


 if (FUNC_6(VAR_1) != 0)
  return (VAR_0);

 if (FUNC_7(VAR_2, FUNC_0(VAR_1), FUNC_3(VAR_1)) != 0)
  return (VAR_0);





 VAR_4 = FUNC_5(VAR_2, FUNC_3(VAR_1), FUNC_0(VAR_1));
 VAR_3 = VAR_1->nvp_size - FUNC_2(VAR_1);
 if (VAR_4 < 0 || VAR_3 != FUNC_4(VAR_4))
  return (VAR_0);

 return (0);
}
