
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource {int dummy; } ;
struct ahc_softc {TYPE_1__* platform_data; int dev_softc; void* bsh; void* tag; } ;
struct TYPE_2__ {int regs_res_type; int regs_res_id; struct resource* regs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct ahc_softc*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_6 ;
 struct resource* FUNC_4 (int ,int,int*,int ) ;
 int FUNC_5 (int ,int,int,struct resource*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,char*,...) ;
 int FUNC_9 (char*) ;
 scalar_t__ FUNC_10 (int ,int ,char*,int*) ;
 void* FUNC_11 (struct resource*) ;
 void* FUNC_12 (struct resource*) ;

int
FUNC_13(struct ahc_softc *VAR_7)
{
 struct resource *VAR_8;
 int VAR_9;
 int VAR_10;
 int VAR_11;

 VAR_8 = ((void*)0);
 VAR_9 = 0;
 VAR_10 = 0;


 if (FUNC_10(FUNC_6(VAR_7->dev_softc),
          FUNC_7(VAR_7->dev_softc),
          "allow_memio", &VAR_11) != 0) {
  if (VAR_6)
   FUNC_8(VAR_7->dev_softc, "Defaulting to MEMIO ");





  if (VAR_6)
   FUNC_9("off\n");
  VAR_11 = 0;

 }

 if (VAR_11 != 0) {

  VAR_9 = VAR_5;
  VAR_10 = VAR_1;
  VAR_8 = FUNC_4(VAR_7->dev_softc, VAR_9,
           &VAR_10, VAR_3);
  if (VAR_8 != ((void*)0)) {
   VAR_7->tag = FUNC_12(VAR_8);
   VAR_7->bsh = FUNC_11(VAR_8);





   if (FUNC_0(VAR_7) != 0) {
    FUNC_8(VAR_7->dev_softc,
           "PCI Device %d:%d:%d failed memory "
           "mapped test.  Using PIO.\n",
           FUNC_1(VAR_7->dev_softc),
           FUNC_3(VAR_7->dev_softc),
           FUNC_2(VAR_7->dev_softc));
    FUNC_5(VAR_7->dev_softc, VAR_9,
           VAR_10, VAR_8);
    VAR_8 = ((void*)0);
   }
  }
 }

 if (VAR_8 == ((void*)0)) {
  VAR_9 = VAR_4;
  VAR_10 = VAR_0;
  VAR_8 = FUNC_4(VAR_7->dev_softc, VAR_9,
           &VAR_10, VAR_3);
  if (VAR_8 != ((void*)0)) {
   VAR_7->tag = FUNC_12(VAR_8);
   VAR_7->bsh = FUNC_11(VAR_8);
   if (FUNC_0(VAR_7) != 0) {
    FUNC_8(VAR_7->dev_softc,
           "PCI Device %d:%d:%d failed I/O "
           "mapped test.\n",
           FUNC_1(VAR_7->dev_softc),
           FUNC_3(VAR_7->dev_softc),
           FUNC_2(VAR_7->dev_softc));
    FUNC_5(VAR_7->dev_softc, VAR_9,
           VAR_10, VAR_8);
    VAR_8 = ((void*)0);
   }
  }
 }
 if (VAR_8 == ((void*)0)) {
  FUNC_8(VAR_7->dev_softc,
         "can't allocate register resources\n");
  return (VAR_2);
 }
 VAR_7->platform_data->regs_res_type = VAR_9;
 VAR_7->platform_data->regs_res_id = VAR_10;
 VAR_7->platform_data->regs = VAR_8;
 return (0);
}
