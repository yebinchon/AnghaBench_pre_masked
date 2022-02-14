
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct peer {scalar_t__ refid; int srcadr; TYPE_1__* dstadr; } ;
struct TYPE_3__ {int flags; scalar_t__ addr_refid; } ;
typedef TYPE_1__ endpt ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (int *) ;

__attribute__((used)) static int
FUNC_1(
 struct peer * VAR_3
 )
{
 endpt * VAR_4;

 if (VAR_3->dstadr != ((void*)0) && !(VAR_1 & VAR_3->dstadr->flags))
  VAR_4 = VAR_3->dstadr;
 else
  VAR_4 = FUNC_0(&VAR_3->srcadr);

 if (VAR_4 != ((void*)0) && VAR_3->refid == VAR_4->addr_refid)
  return VAR_2;
 else
  return VAR_0;
}
