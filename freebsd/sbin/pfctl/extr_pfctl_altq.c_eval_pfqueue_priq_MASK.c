
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int default_classes; int qpris; } ;
struct pfctl_altq {TYPE_3__ meta; } ;
struct pfctl {int dummy; } ;
struct TYPE_4__ {int flags; } ;
struct TYPE_5__ {TYPE_1__ priq_opts; } ;
struct pf_altq {scalar_t__ priority; TYPE_2__ pq_u; int ifname; int qname; } ;


 scalar_t__ FUNC_0 (int ,scalar_t__,int *) ;
 int FUNC_1 (int ,scalar_t__,int *) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (char*,scalar_t__,...) ;

__attribute__((used)) static int
FUNC_3(struct pfctl *VAR_3, struct pf_altq *VAR_4, struct pfctl_altq *VAR_5)
{

 if (VAR_4->priority >= VAR_1) {
  FUNC_2("priority out of range: max %d", VAR_1 - 1);
  return (-1);
 }
 if (FUNC_0(VAR_2, VAR_4->priority, &VAR_5->meta.qpris)) {
  FUNC_2("%s does not have a unique priority on interface %s",
      VAR_4->qname, VAR_4->ifname);
  return (-1);
 } else
  FUNC_1(VAR_2, VAR_4->priority, &VAR_5->meta.qpris);

 if (VAR_4->pq_u.priq_opts.flags & VAR_0)
  VAR_5->meta.default_classes++;
 return (0);
}
