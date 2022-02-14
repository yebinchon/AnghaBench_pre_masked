
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct firmware {int datasize; int name; scalar_t__ data; } ;
struct bwi_softc {int sc_dev; } ;
struct bwi_fwhdr {int fw_type; int fw_gen; int fw_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int ,int,...) ;

__attribute__((used)) static __inline int
FUNC_2(struct bwi_softc *VAR_2, const struct firmware *VAR_3,
       uint8_t VAR_4)
{
 const struct bwi_fwhdr *VAR_5;

 if (VAR_3->datasize < sizeof(*VAR_5)) {
  FUNC_1(VAR_2->sc_dev,
      "invalid firmware (%s): invalid size %zu\n",
      VAR_3->name, VAR_3->datasize);
  return 0;
 }

 VAR_5 = (const struct bwi_fwhdr *)VAR_3->data;

 if (VAR_4 != VAR_1) {



  if (FUNC_0(VAR_5->fw_size) != VAR_3->datasize - sizeof(*VAR_5)) {
   FUNC_1(VAR_2->sc_dev,
       "invalid firmware (%s): size mismatch, "
       "fw %u, real %zu\n", VAR_3->name,
       FUNC_0(VAR_5->fw_size), VAR_3->datasize - sizeof(*VAR_5));
   return 0;
  }
 }

 if (VAR_5->fw_type != VAR_4) {
  FUNC_1(VAR_2->sc_dev,
      "invalid firmware (%s): type mismatch, "
      "fw \'%c\', target \'%c\'\n", VAR_3->name,
      VAR_5->fw_type, VAR_4);
  return 0;
 }

 if (VAR_5->fw_gen != VAR_0) {
  FUNC_1(VAR_2->sc_dev,
      "invalid firmware (%s): wrong generation, "
      "fw %d, target %d\n", VAR_3->name, VAR_5->fw_gen, VAR_0);
  return 0;
 }
 return 1;
}
