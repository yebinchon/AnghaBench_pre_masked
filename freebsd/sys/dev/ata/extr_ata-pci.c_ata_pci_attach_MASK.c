
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct ata_pci_controller {int channels; int ichannels; scalar_t__ legacy; scalar_t__ (* chipinit ) (int *) ;int r_rid1; int r_type1; int r_res1; int * dev; int ch_detach; int ch_attach; } ;
typedef int * device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int *,int ,int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int) ;
 int * FUNC_5 (int *,char*,int) ;
 struct ata_pci_controller* FUNC_6 (int *) ;
 int FUNC_7 (int *,char*) ;
 int FUNC_8 (int *,void*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int ,int) ;
 scalar_t__ FUNC_11 (int *) ;

int
FUNC_12(device_t VAR_10)
{
    struct ata_pci_controller *VAR_11 = FUNC_6(VAR_10);
    device_t VAR_12;
    u_int32_t VAR_13;
    int VAR_14;


    VAR_11->legacy = FUNC_1(VAR_10);
    if (VAR_11->legacy || FUNC_10(VAR_10, FUNC_0(2), 4) & VAR_2)
 VAR_11->channels = 2;
    else
 VAR_11->channels = 1;
    VAR_11->ichannels = -1;
    VAR_11->ch_attach = VAR_8;
    VAR_11->ch_detach = VAR_9;
    VAR_11->dev = VAR_10;


    FUNC_9(VAR_10);
    VAR_13 = FUNC_10(VAR_10, VAR_4, 2);


    if ((VAR_13 & VAR_3) == VAR_3) {
 VAR_11->r_type1 = VAR_6;
 VAR_11->r_rid1 = VAR_0;
 VAR_11->r_res1 = FUNC_2(VAR_10, VAR_11->r_type1, &VAR_11->r_rid1,
           VAR_5);
    }

    if (VAR_11->chipinit(VAR_10))
 return VAR_1;


    for (VAR_14 = 0; VAR_14 < VAR_11->channels; VAR_14++) {
 if ((VAR_11->ichannels & (1 << VAR_14)) == 0)
     continue;
 VAR_12 = FUNC_5(VAR_10, "ata",
     ((VAR_14 == 0 || VAR_14 == 1) && VAR_11->legacy) ?
     VAR_14 : FUNC_4(VAR_7, 2));
 if (VAR_12 == ((void*)0))
     FUNC_7(VAR_10, "failed to add ata child device\n");
 else
     FUNC_8(VAR_12, (void *)(intptr_t)VAR_14);
    }
    FUNC_3(VAR_10);
    return 0;
}
