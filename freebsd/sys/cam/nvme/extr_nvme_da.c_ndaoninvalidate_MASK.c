
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nda_softc {int disk; int cam_iosched; int invalidations; } ;
struct cam_periph {int path; scalar_t__ softc; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int ,int ,struct cam_periph*,int ) ;

__attribute__((used)) static void
FUNC_3(struct cam_periph *VAR_2)
{
 struct nda_softc *VAR_3;

 VAR_3 = (struct nda_softc *)VAR_2->softc;




 FUNC_2(0, VAR_1, VAR_2, VAR_2->path);
 FUNC_0(VAR_3->cam_iosched, ((void*)0), VAR_0);

 FUNC_1(VAR_3->disk);
}
