
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_4__ {scalar_t__ ms_weight; int ms_group; scalar_t__ ms_activation_weight; int ms_allocatable; } ;
typedef TYPE_1__ metaslab_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int ,TYPE_1__*,scalar_t__) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(metaslab_t *VAR_3, uint64_t VAR_4)
{
 uint64_t VAR_5 = VAR_4 & ~VAR_1;






 FUNC_0(VAR_5 >= VAR_2 ||
     FUNC_3(VAR_3->ms_allocatable));
 FUNC_1(VAR_4 & VAR_0);

 VAR_3->ms_activation_weight = 0;
 FUNC_2(VAR_3->ms_group, VAR_3, VAR_4);
 FUNC_0((VAR_3->ms_weight & VAR_0) == 0);
}
