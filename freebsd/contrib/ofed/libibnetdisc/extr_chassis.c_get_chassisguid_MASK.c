
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_4__ {int info; } ;
typedef TYPE_1__ ibnd_node_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static uint64_t FUNC_5(ibnd_node_t * VAR_5)
{
 uint32_t VAR_6 = FUNC_1(VAR_5->info, 0, VAR_1);
 uint64_t VAR_7 =
     FUNC_2(VAR_5->info, 0, VAR_0);

 if (VAR_6 == VAR_3 || VAR_6 == VAR_2)
  return FUNC_3(VAR_7);
 else if (VAR_6 == VAR_4 || FUNC_0(VAR_7))
  return FUNC_4(VAR_5);
 else
  return VAR_7;
}
