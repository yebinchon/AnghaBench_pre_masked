
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uintmax_t ;
struct pfsync_upd_c {int dst; int src; int creatorid; int id; } ;
struct TYPE_5__ {int ndo_vflag; } ;
typedef TYPE_1__ netdissect_options ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*,int *,int *,int ) ;

__attribute__((used)) static void
FUNC_4(netdissect_options *VAR_1, const void *VAR_2)
{
 const struct pfsync_upd_c *VAR_3 = VAR_2;

 FUNC_0((VAR_1, "\n\tid: %016jx creatorid: %08x",
     (uintmax_t)FUNC_1(VAR_3->id), FUNC_2(VAR_3->creatorid)));
 if (VAR_1->ndo_vflag > 2) {
  FUNC_0((VAR_1, "\n\tTCP? :"));
  FUNC_3(VAR_1, &VAR_3->src, &VAR_3->dst, VAR_0);
 }
}
