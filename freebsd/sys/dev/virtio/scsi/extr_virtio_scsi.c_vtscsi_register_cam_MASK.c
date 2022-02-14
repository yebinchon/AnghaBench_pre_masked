
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vtscsi_softc {int vtscsi_sim; int * vtscsi_path; int vtscsi_dev; } ;
typedef int device_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct vtscsi_softc*) ;
 int FUNC_1 (struct vtscsi_softc*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;
 scalar_t__ FUNC_4 (struct vtscsi_softc*) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ,int ,int ) ;
 scalar_t__ FUNC_7 (int **,int *,int ,int ,int ) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int
FUNC_9(struct vtscsi_softc *VAR_6)
{
 device_t VAR_7;
 int VAR_8, VAR_9;

 VAR_7 = VAR_6->vtscsi_dev;
 VAR_8 = 0;

 FUNC_0(VAR_6);

 if (FUNC_6(VAR_6->vtscsi_sim, VAR_7, 0) != VAR_2) {
  VAR_9 = VAR_5;
  FUNC_3(VAR_7, "cannot register XPT bus\n");
  goto fail;
 }

 VAR_8 = 1;

 if (FUNC_7(&VAR_6->vtscsi_path, ((void*)0),
     FUNC_2(VAR_6->vtscsi_sim), VAR_3,
     VAR_0) != VAR_1) {
  VAR_9 = VAR_5;
  FUNC_3(VAR_7, "cannot create bus path\n");
  goto fail;
 }

 if (FUNC_4(VAR_6) != VAR_1) {
  VAR_9 = VAR_4;
  FUNC_3(VAR_7, "cannot register async callback\n");
  goto fail;
 }

 FUNC_1(VAR_6);

 return (0);

fail:
 if (VAR_6->vtscsi_path != ((void*)0)) {
  FUNC_8(VAR_6->vtscsi_path);
  VAR_6->vtscsi_path = ((void*)0);
 }

 if (VAR_8 != 0)
  FUNC_5(FUNC_2(VAR_6->vtscsi_sim));

 FUNC_1(VAR_6);

 return (VAR_9);
}
