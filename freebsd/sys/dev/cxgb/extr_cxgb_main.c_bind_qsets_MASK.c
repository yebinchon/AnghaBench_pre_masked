
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct port_info {int nqsets; int tx_chan; scalar_t__ first_qset; } ;
struct TYPE_6__ {int nports; } ;
struct TYPE_7__ {TYPE_1__ params; } ;
typedef TYPE_2__ adapter_t ;


 struct port_info* FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 (TYPE_2__*,int,scalar_t__,int,int,int ) ;

__attribute__((used)) static void
FUNC_2(adapter_t *VAR_0)
{
 int VAR_1, VAR_2;

 for (VAR_1 = 0; VAR_1 < (VAR_0)->params.nports; ++VAR_1) {
  const struct port_info *VAR_3 = FUNC_0(VAR_0, VAR_1);

  for (VAR_2 = 0; VAR_2 < VAR_3->nqsets; ++VAR_2) {
   FUNC_1(VAR_0, 1, VAR_3->first_qset + VAR_2, -1,
       -1, VAR_3->tx_chan);

  }
 }
}
