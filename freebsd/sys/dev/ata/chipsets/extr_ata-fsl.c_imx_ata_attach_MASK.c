
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ata_pci_controller {int channels; int ichannels; scalar_t__ legacy; int setmode; int ch_attach; scalar_t__ r_rid1; int r_type1; int r_res1; int * dev; int ch_detach; } ;
typedef int * device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ,scalar_t__*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int) ;
 int * FUNC_5 (int *,char*,int) ;
 struct ata_pci_controller* FUNC_6 (int *) ;
 int FUNC_7 (int *,char*) ;
 int FUNC_8 (int *,void*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static int
FUNC_9(device_t VAR_9)
{
 struct ata_pci_controller *VAR_10;
 device_t VAR_11;
 int VAR_12;

 VAR_10 = FUNC_6(VAR_9);

 VAR_10->legacy = FUNC_0(VAR_9);
 VAR_10->channels = 1;
 VAR_10->ichannels = -1;
 VAR_10->ch_attach = VAR_4;
 VAR_10->ch_detach = VAR_5;
 VAR_10->dev = VAR_9;

 VAR_10->r_type1 = VAR_2;
 VAR_10->r_rid1 = 0;
 VAR_10->r_res1 = FUNC_2(VAR_9, VAR_10->r_type1,
     &VAR_10->r_rid1, VAR_1);

 if (FUNC_1(VAR_9, VAR_7)) {
  FUNC_7(VAR_9, "failed to setup interrupt\n");
      return VAR_0;
 }

 VAR_10->channels = 1;

 VAR_10->ch_attach = VAR_6;
 VAR_10->setmode = VAR_8;


 VAR_12 = 0;
 VAR_11 = FUNC_5(VAR_9, "ata", ((VAR_12 == 0) && VAR_10->legacy) ?
      VAR_12 : FUNC_4(VAR_3, 2));
 if (VAR_11 == ((void*)0))
  FUNC_7(VAR_9, "failed to add ata child device\n");
 else
  FUNC_8(VAR_11, (void *)(intptr_t)VAR_12);

 FUNC_3(VAR_9);
 return 0;
}
