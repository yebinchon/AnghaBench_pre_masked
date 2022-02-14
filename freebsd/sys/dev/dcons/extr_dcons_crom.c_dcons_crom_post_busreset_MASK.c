
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* fc; } ;
struct dcons_crom_softc {int unit; int ver; int spec; TYPE_2__ fd; } ;
struct crom_src {int dummy; } ;
struct crom_chunk {int dummy; } ;
struct TYPE_3__ {struct crom_chunk* crom_root; struct crom_src* crom_src; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (struct crom_src*,struct crom_chunk*,int *,int ) ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (struct crom_src*,int *,int *,char*) ;
 int FUNC_6 (struct dcons_crom_softc*) ;
 int VAR_7 ;

__attribute__((used)) static void
FUNC_7(void *VAR_8)
{
 struct dcons_crom_softc *VAR_9;
 struct crom_src *VAR_10;
 struct crom_chunk *VAR_11;

 VAR_9 = (struct dcons_crom_softc *) VAR_8;
 VAR_10 = VAR_9->fd.fc->crom_src;
 VAR_11 = VAR_9->fd.fc->crom_root;

 FUNC_2(&VAR_9->unit, sizeof(struct crom_chunk));

 FUNC_3(VAR_10, VAR_11, &VAR_9->unit, VAR_0);
 FUNC_4(&VAR_9->unit, VAR_1, VAR_3);
 FUNC_5(VAR_10, &VAR_9->unit, &VAR_9->spec, "FreeBSD");
 FUNC_4(&VAR_9->unit, VAR_2, VAR_6);
 FUNC_5(VAR_10, &VAR_9->unit, &VAR_9->ver, "dcons");
 FUNC_4(&VAR_9->unit, VAR_4, FUNC_0(VAR_7));
 FUNC_4(&VAR_9->unit, VAR_5, FUNC_1(VAR_7));

 FUNC_6(VAR_9);

}
