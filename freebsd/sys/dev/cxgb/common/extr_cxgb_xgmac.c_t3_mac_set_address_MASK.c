
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct cmac {unsigned int ext_port; unsigned int nucast; TYPE_2__* adapter; scalar_t__ multiport; } ;
struct TYPE_3__ {unsigned int nports; } ;
struct TYPE_4__ {TYPE_1__ params; } ;


 int VAR_0 ;
 int FUNC_0 (struct cmac*,unsigned int,int *) ;
 int FUNC_1 (TYPE_2__*,int *,unsigned int) ;

int FUNC_2(struct cmac *VAR_1, unsigned int VAR_2, u8 VAR_3[6])
{
 if (VAR_1->multiport)
  VAR_2 = VAR_1->ext_port + VAR_2 * VAR_1->adapter->params.nports;
 if (VAR_2 >= VAR_1->nucast)
  return -VAR_0;
 FUNC_0(VAR_1, VAR_2, VAR_3);
 if (VAR_1->multiport && VAR_2 < VAR_1->adapter->params.nports)
  FUNC_1(VAR_1->adapter, VAR_3, VAR_2);
 return 0;
}
