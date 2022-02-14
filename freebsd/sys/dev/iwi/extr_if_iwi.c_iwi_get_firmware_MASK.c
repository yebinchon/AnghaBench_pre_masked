
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {char const* data; int size; int name; struct firmware* fp; } ;
struct TYPE_7__ {char const* data; int size; int name; TYPE_1__* fp; } ;
struct iwi_softc {int fw_mode; TYPE_3__ fw_fw; TYPE_2__ fw_uc; TYPE_3__ fw_boot; int sc_dev; } ;
struct iwi_firmware_hdr {int fsize; int usize; int bsize; } ;
struct firmware {int version; int datasize; int name; scalar_t__ data; } ;
typedef enum ieee80211_opmode { ____Placeholder_ieee80211_opmode } ieee80211_opmode ;
struct TYPE_6__ {scalar_t__ version; int name; } ;


 int VAR_0 ;



 int FUNC_0 (int ,char*,...) ;
 struct firmware* FUNC_1 (char*) ;
 int FUNC_2 (TYPE_3__*,char*,TYPE_2__*,char*) ;
 int FUNC_3 (struct iwi_softc*) ;
 int * FUNC_4 (struct iwi_softc*,TYPE_3__*) ;
 int * FUNC_5 (struct iwi_softc*,TYPE_2__*) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int
FUNC_7(struct iwi_softc *VAR_1, enum ieee80211_opmode VAR_2)
{
 const struct iwi_firmware_hdr *VAR_3;
 const struct firmware *VAR_4;


 if (VAR_1->fw_mode != VAR_2)
  FUNC_3(VAR_1);

 switch (VAR_2) {
 case 128:
  FUNC_2(&VAR_1->fw_fw, "iwi_bss", &VAR_1->fw_uc, "iwi_ucode_bss");
  break;
 case 130:
  FUNC_2(&VAR_1->fw_fw, "iwi_ibss", &VAR_1->fw_uc, "iwi_ucode_ibss");
  break;
 case 129:
  FUNC_2(&VAR_1->fw_fw, "iwi_monitor",
     &VAR_1->fw_uc, "iwi_ucode_monitor");
  break;
 default:
  FUNC_0(VAR_1->sc_dev, "unknown opmode %d\n", VAR_2);
  return VAR_0;
 }
 VAR_4 = VAR_1->fw_fw.fp;
 if (VAR_4 == ((void*)0)) {
  FUNC_0(VAR_1->sc_dev, "could not load firmware\n");
  goto bad;
 }
 if (VAR_4->version < 300) {
  if (VAR_1->fw_uc.fp == ((void*)0)) {
   FUNC_0(VAR_1->sc_dev, "could not load ucode\n");
   goto bad;
  }
  if (VAR_1->fw_boot.fp == ((void*)0)) {
   VAR_1->fw_boot.fp = FUNC_1("iwi_boot");
   if (VAR_1->fw_boot.fp == ((void*)0)) {
    FUNC_0(VAR_1->sc_dev,
     "could not load boot firmware\n");
    goto bad;
   }
  }
  if (VAR_1->fw_boot.fp->version != VAR_1->fw_fw.fp->version ||
      VAR_1->fw_boot.fp->version != VAR_1->fw_uc.fp->version) {
   FUNC_0(VAR_1->sc_dev,
       "firmware version mismatch: "
       "'%s' is %d, '%s' is %d, '%s' is %d\n",
       VAR_1->fw_boot.fp->name, VAR_1->fw_boot.fp->version,
       VAR_1->fw_uc.fp->name, VAR_1->fw_uc.fp->version,
       VAR_1->fw_fw.fp->name, VAR_1->fw_fw.fp->version
   );
   goto bad;
  }



  if (FUNC_5(VAR_1, &VAR_1->fw_uc) == ((void*)0) ||
      FUNC_4(VAR_1, &VAR_1->fw_boot) == ((void*)0) ||
      FUNC_4(VAR_1, &VAR_1->fw_fw) == ((void*)0))
   goto bad;
 } else {



  if (VAR_4->datasize < sizeof(struct iwi_firmware_hdr)) {
   FUNC_0(VAR_1->sc_dev, "image '%s' too small\n",
       VAR_4->name);
   goto bad;
  }
  VAR_3 = (const struct iwi_firmware_hdr *)VAR_4->data;
  if (VAR_4->datasize < sizeof(*VAR_3) + FUNC_6(VAR_3->bsize) + FUNC_6(VAR_3->usize)
    + FUNC_6(VAR_3->fsize)) {
   FUNC_0(VAR_1->sc_dev, "image '%s' too small (2)\n",
       VAR_4->name);
   goto bad;
  }
  VAR_1->fw_boot.data = ((const char *) VAR_4->data) + sizeof(*VAR_3);
  VAR_1->fw_boot.size = FUNC_6(VAR_3->bsize);
  VAR_1->fw_boot.name = VAR_4->name;
  VAR_1->fw_uc.data = VAR_1->fw_boot.data + VAR_1->fw_boot.size;
  VAR_1->fw_uc.size = FUNC_6(VAR_3->usize);
  VAR_1->fw_uc.name = VAR_4->name;
  VAR_1->fw_fw.data = VAR_1->fw_uc.data + VAR_1->fw_uc.size;
  VAR_1->fw_fw.size = FUNC_6(VAR_3->fsize);
  VAR_1->fw_fw.name = VAR_4->name;
 }





 VAR_1->fw_mode = VAR_2;
 return 0;
bad:
 FUNC_3(VAR_1);
 return 1;
}
