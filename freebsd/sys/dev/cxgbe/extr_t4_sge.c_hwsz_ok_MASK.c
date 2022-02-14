
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pad_boundary; } ;
struct TYPE_4__ {TYPE_1__ sge; } ;
struct adapter {TYPE_2__ params; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static inline int
FUNC_0(struct adapter *VAR_1, int VAR_2)
{
 int VAR_3 = VAR_0 ? VAR_1->params.sge.pad_boundary - 1 : 16 - 1;

 return (VAR_2 >= 64 && (VAR_2 & VAR_3) == 0);
}
