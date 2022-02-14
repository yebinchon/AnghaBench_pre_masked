
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfsrvcache {int rc_flag; int rc_xid; } ;
struct mtx {int dummy; } ;
struct TYPE_2__ {struct mtx mtx; } ;


 int VAR_0 ;
 size_t FUNC_0 (int ) ;
 struct mtx VAR_1 ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static __inline struct mtx *
FUNC_1(struct nfsrvcache *VAR_3)
{

 if ((VAR_3->rc_flag & VAR_0) != 0)
  return (&VAR_1);
 return (&VAR_2[FUNC_0(VAR_3->rc_xid)].mtx);
}
