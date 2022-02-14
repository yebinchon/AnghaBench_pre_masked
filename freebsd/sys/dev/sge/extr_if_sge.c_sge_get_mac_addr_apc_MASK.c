
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct apc_tbl TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint16_t ;
struct sge_softc {int sge_flags; int sge_dev; } ;
typedef int * device_t ;
typedef int devclass_t ;
struct apc_tbl {scalar_t__ vid; scalar_t__ did; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (char*) ;
 int * FUNC_2 (int ,int) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int *,int ***,int*) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int **,int ) ;
 int FUNC_7 (int) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (int,int) ;
 scalar_t__ FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (int *) ;
 int FUNC_14 (int *,int,int) ;
 int FUNC_15 (int *,int,int,int) ;

__attribute__((used)) static int
FUNC_16(struct sge_softc *VAR_7, uint8_t *VAR_8)
{

 devclass_t VAR_9;
 device_t VAR_10, VAR_11 = ((void*)0);
 device_t *VAR_12;
 struct apc_tbl {
  uint16_t vid;
  uint16_t did;
 } *VAR_13, VAR_14[] = {
  { VAR_6, 0x0965 },
  { VAR_6, 0x0966 },
  { VAR_6, 0x0968 }
 };
 uint8_t VAR_15;
 int VAR_16, VAR_17, VAR_18, VAR_19;

 VAR_9 = FUNC_1("pci");
 for (VAR_16 = 0; VAR_16 < FUNC_3(VAR_9); VAR_16++) {
  VAR_10 = FUNC_2(VAR_9, VAR_16);
  if (!VAR_10)
   continue;
  if (FUNC_4(VAR_10, &VAR_12, &VAR_19) != 0)
   continue;
  for (VAR_17 = 0; VAR_17 < VAR_19; VAR_17++) {
   VAR_11 = VAR_12[VAR_17];
   if (FUNC_10(VAR_11) == VAR_3 &&
       FUNC_12(VAR_11) == VAR_4) {
    VAR_13 = VAR_14;
    for (VAR_18 = 0; VAR_18 < FUNC_8(VAR_14); VAR_18++) {
     if (FUNC_13(VAR_11) == VAR_13->vid &&
         FUNC_11(VAR_11) == VAR_13->did) {
      FUNC_6(VAR_12, VAR_2);
      goto apc_found;
     }
     VAR_13++;
    }
   }
                }
  FUNC_6(VAR_12, VAR_2);
 }
 FUNC_5(VAR_7->sge_dev, "couldn't find PCI-ISA bridge\n");
 return (VAR_0);
apc_found:

 VAR_15 = FUNC_14(VAR_11, 0x48, 1);
 FUNC_15(VAR_11, 0x48, VAR_15 & ~0x02, 1);
 FUNC_0(50);
 FUNC_14(VAR_11, 0x48, 1);

 for (VAR_17 = 0; VAR_17 < VAR_1; VAR_17++) {
  FUNC_9(0x78, 0x09 + VAR_17);
  VAR_8[VAR_17] = FUNC_7(0x79);
 }
 FUNC_9(0x78, 0x12);
 if ((FUNC_7(0x79) & 0x80) != 0)
  VAR_7->sge_flags |= VAR_5;

 FUNC_15(VAR_11, 0x48, VAR_15, 1);

 return (0);



}
