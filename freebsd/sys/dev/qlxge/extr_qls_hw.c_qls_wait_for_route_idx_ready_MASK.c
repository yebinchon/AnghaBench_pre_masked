
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int qla_initiate_recovery; } ;
typedef TYPE_1__ qla_host_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int ) ;

__attribute__((used)) static int
FUNC_2(qla_host_t *VAR_1, uint32_t VAR_2)
{
 uint32_t VAR_3;
 uint32_t VAR_4 = 3;

 while (VAR_4--) {
  VAR_3 = FUNC_1(VAR_1, VAR_0);

  if (VAR_3 & VAR_2)
   return (0);

  FUNC_0(100);
 }
 VAR_1->qla_initiate_recovery = 1;
 return (-1);
}
