
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct bhnd_usb_softc {scalar_t__ sc_maddr; } ;
struct bhnd_usb_devinfo {int sdi_irq_mapped; int sdi_msize; int sdi_rl; scalar_t__ sdi_irq; scalar_t__ sdi_maddr; } ;
typedef int * device_t ;


 int FUNC_0 (int *,char*,char const*,...) ;
 int FUNC_1 (int *,char*,char const*,scalar_t__,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *,int ,scalar_t__*) ;
 int FUNC_3 (int *,scalar_t__) ;
 int * FUNC_4 (int *,int ,char const*,int) ;
 struct bhnd_usb_softc* FUNC_5 (int *) ;
 int FUNC_6 (int *,struct bhnd_usb_devinfo*) ;
 int FUNC_7 (struct bhnd_usb_devinfo*,int ) ;
 struct bhnd_usb_devinfo* FUNC_8 (int,int ,int) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (int *,int ,int ,scalar_t__,scalar_t__,int) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (char const*,char*,int) ;

__attribute__((used)) static device_t
FUNC_14(device_t VAR_5, u_int VAR_6, const char *VAR_7, int VAR_8)
{
 struct bhnd_usb_softc *VAR_9;
 struct bhnd_usb_devinfo *VAR_10;
 device_t VAR_11;
 int VAR_12;

 VAR_9 = FUNC_5(VAR_5);

 VAR_10 = FUNC_8(sizeof(struct bhnd_usb_devinfo), VAR_0, VAR_1|VAR_2);
 if (VAR_10 == ((void*)0))
  return (((void*)0));

 FUNC_12(&VAR_10->sdi_rl);
 VAR_10->sdi_irq_mapped = 0;

 if (FUNC_13(VAR_7, "ohci", 4) == 0)
 {
  VAR_10->sdi_maddr = VAR_9->sc_maddr + 0x000;
  VAR_10->sdi_msize = 0x200;
 }
 else if (FUNC_13(VAR_7, "ehci", 4) == 0)
 {
  VAR_10->sdi_maddr = VAR_9->sc_maddr + 0x000;
  VAR_10->sdi_msize = 0x1000;
 }
 else
 {
  FUNC_9("Unknown subdevice");
 }


 if ((VAR_12 = FUNC_2(VAR_5, 0, &VAR_10->sdi_irq))) {
  FUNC_0(VAR_5, "could not map %s interrupt: %d", VAR_7,
      VAR_12);
  goto failed;
 }
 VAR_10->sdi_irq_mapped = 1;

 FUNC_1(VAR_5, "%s: irq=%ju maddr=0x%jx", VAR_7, VAR_10->sdi_irq,
     VAR_10->sdi_maddr);




 FUNC_10(&VAR_10->sdi_rl, VAR_4, 0, VAR_10->sdi_maddr,
     VAR_10->sdi_maddr + VAR_10->sdi_msize - 1, VAR_10->sdi_msize);

 FUNC_10(&VAR_10->sdi_rl, VAR_3, 0, VAR_10->sdi_irq,
     VAR_10->sdi_irq, 1);

 VAR_11 = FUNC_4(VAR_5, VAR_6, VAR_7, VAR_8);
 if (VAR_11 == ((void*)0)) {
  FUNC_0(VAR_5, "could not add %s", VAR_7);
  goto failed;
 }

 FUNC_6(VAR_11, VAR_10);
 return (VAR_11);

failed:
 if (VAR_10->sdi_irq_mapped)
  FUNC_3(VAR_5, VAR_10->sdi_irq);

 FUNC_11(&VAR_10->sdi_rl);

 FUNC_7(VAR_10, VAR_0);
 return (((void*)0));
}
