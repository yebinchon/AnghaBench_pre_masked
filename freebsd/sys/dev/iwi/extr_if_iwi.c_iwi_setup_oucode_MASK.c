
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwi_softc {int sc_dev; } ;
struct iwi_fw {int name; } ;
struct iwi_firmware_ohdr {int mode; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 struct iwi_firmware_ohdr* FUNC_1 (struct iwi_softc*,struct iwi_fw*) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static const struct iwi_firmware_ohdr *
FUNC_3(struct iwi_softc *VAR_1, struct iwi_fw *VAR_2)
{
 const struct iwi_firmware_ohdr *VAR_3;

 VAR_3 = FUNC_1(VAR_1, VAR_2);
 if (VAR_3 != ((void*)0) && FUNC_2(VAR_3->mode) != VAR_0) {
  FUNC_0(VAR_1->sc_dev, "%s is not a ucode image\n",
      VAR_2->name);
  VAR_3 = ((void*)0);
 }
 return VAR_3;
}
