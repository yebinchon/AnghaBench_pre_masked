
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bhnd_erom_io {int dummy; } ;
struct TYPE_2__ {struct bhnd_erom_io eio; } ;
struct bhndb_pci_probe {void* dev; int m_valid; int * hr; int * cores; int * erom; int hostb_core; int ncores; int cid; int * erom_class; TYPE_1__ erom_io; int * m_res; int * m_win; void* pci_dev; } ;
struct bhndb_hwcfg {int dummy; } ;
struct bhnd_chipid {int dummy; } ;
typedef void* device_t ;
typedef int bhnd_devclass_t ;


 struct bhnd_chipid* FUNC_0 (void*,void*) ;
 struct bhndb_hwcfg* FUNC_1 (void*,void*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * FUNC_3 (int *,int *,struct bhnd_erom_io*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,int **,int *) ;
 int FUNC_7 (struct bhnd_erom_io*) ;
 int FUNC_8 (struct bhnd_erom_io*,int ,int ) ;
 int * FUNC_9 (int ,struct bhnd_erom_io*,struct bhnd_chipid const*,int *) ;
 int FUNC_10 (int **,void*,void*,struct bhndb_hwcfg const*) ;
 int FUNC_11 (int *,int ,int ,int *) ;
 int FUNC_12 (TYPE_1__*,struct bhndb_pci_probe*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (void*) ;
 void* FUNC_15 (void*) ;
 int FUNC_16 (void*,char*,...) ;
 int FUNC_17 (struct bhndb_pci_probe*,int ) ;
 struct bhndb_pci_probe* FUNC_18 (int,int ,int) ;

__attribute__((used)) static int
FUNC_19(struct bhndb_pci_probe **VAR_6, device_t VAR_7,
    bhnd_devclass_t VAR_8)
{
 struct bhndb_pci_probe *VAR_9;
 struct bhnd_erom_io *VAR_10;
 const struct bhndb_hwcfg *VAR_11;
 const struct bhnd_chipid *VAR_12;
 device_t VAR_13;
 int VAR_14;

 VAR_13 = FUNC_15(VAR_7);
 VAR_10 = ((void*)0);

 VAR_9 = FUNC_18(sizeof(*VAR_9), VAR_3, VAR_5|VAR_4);
 VAR_9->dev = VAR_7;
 VAR_9->pci_dev = VAR_13;




 VAR_9->m_win = ((void*)0);
 VAR_9->m_res = ((void*)0);
 VAR_9->m_valid = 0;

 FUNC_12(&VAR_9->erom_io, VAR_9);
 VAR_10 = &VAR_9->erom_io.eio;


 VAR_11 = FUNC_1(VAR_13, VAR_7);
 VAR_12 = FUNC_0(VAR_13, VAR_7);


 VAR_14 = FUNC_10(&VAR_9->hr, VAR_7, VAR_13, VAR_11);
 if (VAR_14) {
  VAR_9->hr = ((void*)0);
  goto failed;
 }


 VAR_14 = FUNC_8(VAR_10, VAR_0,
     VAR_1);
 if (VAR_14)
  goto failed;


 VAR_9->erom_class = FUNC_9(
     FUNC_14(VAR_7), VAR_10, VAR_12, &VAR_9->cid);
 if (VAR_9->erom_class == ((void*)0)) {
  FUNC_16(VAR_7, "device enumeration unsupported; no "
      "compatible driver found\n");

  VAR_14 = VAR_2;
  goto failed;
 }


 VAR_9->erom = FUNC_3(VAR_9->erom_class, &VAR_9->cid, VAR_10);
 if (VAR_9->erom == ((void*)0)) {
  FUNC_16(VAR_7, "failed to allocate device enumeration "
      "table parser\n");
  VAR_14 = VAR_2;
  goto failed;
 }


 VAR_10 = ((void*)0);


 VAR_14 = FUNC_6(VAR_9->erom, &VAR_9->cores, &VAR_9->ncores);
 if (VAR_14) {
  FUNC_16(VAR_9->dev, "error fetching core table: %d\n",
      VAR_14);

  VAR_9->cores = ((void*)0);
  goto failed;
 }


 VAR_14 = FUNC_11(VAR_9->cores, VAR_9->ncores, VAR_8,
     &VAR_9->hostb_core);
 if (VAR_14) {
  FUNC_16(VAR_7, "failed to identify the host bridge "
      "core: %d\n", VAR_14);

  goto failed;
 }

 *VAR_6 = VAR_9;
 return (0);

failed:
 if (VAR_10 != ((void*)0)) {
  FUNC_2(VAR_9->erom == ((void*)0), ("I/O instance will be freed by "
      "its owning parser"));

  FUNC_7(VAR_10);
 }

 if (VAR_9->erom != ((void*)0)) {
  if (VAR_9->cores != ((void*)0))
   FUNC_5(VAR_9->erom, VAR_9->cores);

  FUNC_4(VAR_9->erom);
 } else {
  FUNC_2(VAR_9->cores == ((void*)0), ("cannot free erom-owned core table "
      "without erom reference"));
 }

 if (VAR_9->hr != ((void*)0))
  FUNC_13(VAR_9->hr);

 FUNC_17(VAR_9, VAR_3);

 return (VAR_14);
}
