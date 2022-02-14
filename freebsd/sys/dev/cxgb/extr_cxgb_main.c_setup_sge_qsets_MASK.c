
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u_int ;
struct port_info {int nqsets; } ;
struct TYPE_8__ {int * qset; } ;
struct TYPE_9__ {scalar_t__ rev; int nports; TYPE_1__ sge; } ;
struct TYPE_10__ {int flags; int nqsets; int dev; TYPE_2__ params; struct port_info* port; } ;
typedef TYPE_3__ adapter_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (TYPE_3__*,int) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*,int,int,int,int *,int ,struct port_info*) ;

__attribute__((used)) static int
FUNC_4(adapter_t *VAR_3)
{
 int VAR_4, VAR_5, VAR_6, VAR_7 = 0, VAR_8 = 0;
 u_int VAR_9 = VAR_0;

 if ((VAR_6 = FUNC_2(VAR_3)) != 0) {
  FUNC_0(VAR_3->dev, "t3_sge_alloc returned %d\n", VAR_6);
  return (VAR_6);
 }

 if (VAR_3->params.rev > 0 && !(VAR_3->flags & VAR_1))
  VAR_7 = -1;

 for (VAR_4 = 0; VAR_4 < (VAR_3)->params.nports; VAR_4++) {
  struct port_info *VAR_10 = &VAR_3->port[VAR_4];

  for (VAR_5 = 0; VAR_5 < VAR_10->nqsets; VAR_5++, VAR_8++) {
   VAR_6 = FUNC_3(VAR_3, VAR_8, (VAR_3)->params.nports,
       (VAR_3->flags & VAR_2) ? VAR_8 + 1 : VAR_7,
       &VAR_3->params.sge.qset[VAR_8], VAR_9, VAR_10);
   if (VAR_6) {
    FUNC_1(VAR_3, VAR_8);
    FUNC_0(VAR_3->dev,
        "t3_sge_alloc_qset failed with %d\n", VAR_6);
    return (VAR_6);
   }
  }
 }

 VAR_3->nqsets = VAR_8;

 return (0);
}
