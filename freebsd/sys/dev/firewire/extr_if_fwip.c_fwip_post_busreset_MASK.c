
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int fwip_ifp; } ;
struct TYPE_7__ {scalar_t__ lo; scalar_t__ hi; } ;
struct TYPE_6__ {TYPE_1__* fc; } ;
struct fwip_softc {TYPE_4__ fw_softc; TYPE_3__ last_dest; int ver6; int unit6; int spec6; int ver4; int unit4; int spec4; TYPE_2__ fd; } ;
struct crom_src {int dummy; } ;
struct crom_chunk {int dummy; } ;
struct TYPE_5__ {struct crom_chunk* crom_root; struct crom_src* crom_src; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (struct crom_src*,struct crom_chunk*,int *,int ) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (struct crom_src*,int *,int *,char*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(void *VAR_4)
{
 struct fwip_softc *VAR_5 = VAR_4;
 struct crom_src *VAR_6;
 struct crom_chunk *VAR_7;

 VAR_6 = VAR_5->fd.fc->crom_src;
 VAR_7 = VAR_5->fd.fc->crom_root;


 FUNC_0(&VAR_5->unit4, sizeof(struct crom_chunk));
 FUNC_1(VAR_6, VAR_7, &VAR_5->unit4, VAR_0);
 FUNC_2(&VAR_5->unit4, VAR_1, VAR_3);
 FUNC_3(VAR_6, &VAR_5->unit4, &VAR_5->spec4, "IANA");
 FUNC_2(&VAR_5->unit4, VAR_2, 1);
 FUNC_3(VAR_6, &VAR_5->unit4, &VAR_5->ver4, "IPv4");


 FUNC_0(&VAR_5->unit6, sizeof(struct crom_chunk));
 FUNC_1(VAR_6, VAR_7, &VAR_5->unit6, VAR_0);
 FUNC_2(&VAR_5->unit6, VAR_1, VAR_3);
 FUNC_3(VAR_6, &VAR_5->unit6, &VAR_5->spec6, "IANA");
 FUNC_2(&VAR_5->unit6, VAR_2, 2);
 FUNC_3(VAR_6, &VAR_5->unit6, &VAR_5->ver6, "IPv6");

 VAR_5->last_dest.hi = 0;
 VAR_5->last_dest.lo = 0;
 FUNC_4(VAR_5->fw_softc.fwip_ifp);
}
