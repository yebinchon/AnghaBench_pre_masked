
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int fl_pktshift; } ;
struct TYPE_4__ {TYPE_1__ sge; } ;
struct adapter {TYPE_2__ params; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline int
FUNC_0(struct adapter *VAR_2, int VAR_3)
{


 return (VAR_2->params.sge.fl_pktshift + VAR_0 +
     VAR_1 + VAR_3);
}
