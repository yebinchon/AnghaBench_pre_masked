
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {scalar_t__ if_type; } ;
typedef TYPE_1__ sli4_t ;
typedef int int32_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (TYPE_1__*,int ) ;

int32_t
FUNC_4(sli4_t *VAR_6)
{
 uint32_t VAR_7;
 int32_t VAR_8 = -1;




 if (VAR_0 == VAR_6->if_type ||
     VAR_1 == VAR_6->if_type) {
  VAR_7 = FUNC_3(VAR_6, VAR_4);
  VAR_8 = ((VAR_3 ==
         FUNC_1(VAR_7)) &&
        (!FUNC_0(VAR_7)) ? 1 : 0);
 } else if (VAR_2 == VAR_6->if_type) {
  VAR_7 = FUNC_3(VAR_6, VAR_5);
  VAR_8 = (FUNC_2(VAR_7) ? 1 : 0);
 }
 return VAR_8;
}
