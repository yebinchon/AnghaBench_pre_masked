
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwi_softc {int sc_dev; } ;
struct iwi_fw {char const* data; int size; int name; struct firmware* fp; } ;
struct iwi_firmware_ohdr {int version; } ;
struct firmware {int datasize; int name; scalar_t__ data; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int ,char*,int ,...) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static const struct iwi_firmware_ohdr *
FUNC_4(struct iwi_softc *VAR_2, struct iwi_fw *VAR_3)
{
 const struct firmware *VAR_4 = VAR_3->fp;
 const struct iwi_firmware_ohdr *VAR_5;

 if (VAR_4->datasize < sizeof (struct iwi_firmware_ohdr)) {
  FUNC_2(VAR_2->sc_dev, "image '%s' too small\n", VAR_4->name);
  return ((void*)0);
 }
 VAR_5 = (const struct iwi_firmware_ohdr *)VAR_4->data;
 if ((FUNC_0(FUNC_3(VAR_5->version)) != VAR_0) ||
     (FUNC_1(FUNC_3(VAR_5->version)) != VAR_1)) {
  FUNC_2(VAR_2->sc_dev, "version for '%s' %d.%d != %d.%d\n",
      VAR_4->name, FUNC_0(FUNC_3(VAR_5->version)),
      FUNC_1(FUNC_3(VAR_5->version)), VAR_0,
      VAR_1);
  return ((void*)0);
 }
 VAR_3->data = ((const char *) VAR_4->data) + sizeof(struct iwi_firmware_ohdr);
 VAR_3->size = VAR_4->datasize - sizeof(struct iwi_firmware_ohdr);
 VAR_3->name = VAR_4->name;
 return VAR_5;
}
