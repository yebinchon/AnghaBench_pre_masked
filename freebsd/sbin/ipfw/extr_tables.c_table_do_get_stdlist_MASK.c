
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint16_t ;
typedef int req ;
struct TYPE_6__ {size_t size; int opheader; } ;
typedef TYPE_1__ ipfw_obj_lheader ;


 scalar_t__ VAR_0 ;
 TYPE_1__* FUNC_0 (int,size_t) ;
 scalar_t__ FUNC_1 (int ,int *,size_t*) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int ,int) ;

__attribute__((used)) static int
FUNC_4(uint16_t VAR_2, ipfw_obj_lheader **VAR_3)
{
 ipfw_obj_lheader VAR_4, *VAR_5;
 size_t VAR_6;

 FUNC_3(&VAR_4, 0, sizeof(VAR_4));
 VAR_6 = sizeof(VAR_4);

 if (FUNC_1(VAR_2, &VAR_4.opheader, &VAR_6) != 0)
  if (VAR_1 != VAR_0)
   return (VAR_1);

 VAR_6 = VAR_4.size;
 if ((VAR_5 = FUNC_0(1, VAR_6)) == ((void*)0))
  return (VAR_0);

 VAR_5->size = VAR_6;
 if (FUNC_1(VAR_2, &VAR_5->opheader, &VAR_6) != 0) {
  FUNC_2(VAR_5);
  return (VAR_1);
 }

 *VAR_3 = VAR_5;
 return (0);
}
