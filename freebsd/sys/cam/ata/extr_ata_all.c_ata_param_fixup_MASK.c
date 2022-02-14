
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ata_params {int serial; int revision; int model; } ;
typedef int int16_t ;


 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,char*,int) ;

void
FUNC_5(struct ata_params *VAR_0)
{
 int16_t *VAR_1;

 for (VAR_1 = (int16_t *)VAR_0;
      VAR_1 < (int16_t *)VAR_0 + sizeof(struct ata_params)/2; VAR_1++) {
  *VAR_1 = FUNC_3(*VAR_1);
 }
 if (FUNC_4(VAR_0->model, "FX", 2) &&
     FUNC_4(VAR_0->model, "NEC", 3) &&
     FUNC_4(VAR_0->model, "Pioneer", 7) &&
     FUNC_4(VAR_0->model, "SHARP", 5)) {
  FUNC_1(VAR_0->model, sizeof(VAR_0->model));
  FUNC_1(VAR_0->revision, sizeof(VAR_0->revision));
  FUNC_1(VAR_0->serial, sizeof(VAR_0->serial));
 }
 FUNC_2(VAR_0->model, sizeof(VAR_0->model));
 FUNC_0(VAR_0->model, VAR_0->model, sizeof(VAR_0->model));
 FUNC_2(VAR_0->revision, sizeof(VAR_0->revision));
 FUNC_0(VAR_0->revision, VAR_0->revision, sizeof(VAR_0->revision));
 FUNC_2(VAR_0->serial, sizeof(VAR_0->serial));
 FUNC_0(VAR_0->serial, VAR_0->serial, sizeof(VAR_0->serial));
}
