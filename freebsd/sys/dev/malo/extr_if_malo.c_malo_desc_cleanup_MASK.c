
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct malo_softc {int dummy; } ;
struct malo_descdma {int dd_dmat; int dd_dmamap; int dd_desc; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (struct malo_descdma*,int ,int) ;

__attribute__((used)) static void
FUNC_4(struct malo_softc *VAR_0, struct malo_descdma *VAR_1)
{
 FUNC_1(VAR_1->dd_dmat, VAR_1->dd_dmamap);
 FUNC_2(VAR_1->dd_dmat, VAR_1->dd_desc, VAR_1->dd_dmamap);
 FUNC_0(VAR_1->dd_dmat);

 FUNC_3(VAR_1, 0, sizeof(*VAR_1));
}
