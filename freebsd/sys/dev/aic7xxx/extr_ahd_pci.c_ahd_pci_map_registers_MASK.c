
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource {int dummy; } ;
struct ahd_softc {int bugs; TYPE_1__* platform_data; void** bshs; void** tags; int dev_softc; } ;
struct TYPE_2__ {int* regs_res_type; int* regs_res_id; struct resource** regs; } ;


 int FUNC_0 (struct ahd_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct ahd_softc*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_2 (struct ahd_softc*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ VAR_8 ;
 struct resource* FUNC_6 (int ,int,int*,int ) ;
 int FUNC_7 (int ,int,int,struct resource*) ;
 int FUNC_8 (void*,void*,int,int,void**) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,char*,...) ;
 scalar_t__ FUNC_12 (int ,int ,char*,int*) ;
 void* FUNC_13 (struct resource*) ;
 void* FUNC_14 (struct resource*) ;

int
FUNC_15(struct ahd_softc *VAR_9)
{
 struct resource *VAR_10;
 struct resource *VAR_11;
 int VAR_12;
 int VAR_13;
 int VAR_14;
 int VAR_15;

 VAR_10 = ((void*)0);
 VAR_11 = ((void*)0);
 VAR_12 = 0;
 VAR_13 = 0;


 if (FUNC_12(FUNC_9(VAR_9->dev_softc),
          FUNC_10(VAR_9->dev_softc),
          "allow_memio", &VAR_15) != 0) {
  if (VAR_8)
   FUNC_11(VAR_9->dev_softc,
          "Defaulting to MEMIO on\n");
  VAR_15 = 1;
 }

 if ((VAR_9->bugs & VAR_0) == 0
  && VAR_15 != 0) {

  VAR_12 = VAR_7;
  VAR_13 = VAR_3;
  VAR_10 = FUNC_6(VAR_9->dev_softc, VAR_12,
           &VAR_13, VAR_5);
  if (VAR_10 != ((void*)0)) {
   int VAR_16;

   VAR_9->tags[0] = FUNC_14(VAR_10);
   VAR_9->bshs[0] = FUNC_13(VAR_10);
   VAR_9->tags[1] = VAR_9->tags[0];
   VAR_16 = FUNC_8(VAR_9->tags[0], VAR_9->bshs[0],
                    0x100,
                  0x100,
          &VAR_9->bshs[1]);




   if (VAR_16 != 0
    || FUNC_2(VAR_9) != 0) {
    FUNC_11(VAR_9->dev_softc,
           "PCI Device %d:%d:%d failed memory "
           "mapped test.  Using PIO.\n",
           FUNC_3(VAR_9->dev_softc),
           FUNC_5(VAR_9->dev_softc),
           FUNC_4(VAR_9->dev_softc));
    FUNC_7(VAR_9->dev_softc, VAR_12,
           VAR_13, VAR_10);
    VAR_10 = ((void*)0);
    FUNC_0(VAR_9);
   }
  }
 }
 if (VAR_10 == ((void*)0)) {
  VAR_12 = VAR_6;
  VAR_13 = VAR_1;
  VAR_10 = FUNC_6(VAR_9->dev_softc, VAR_12,
           &VAR_13, VAR_5);
  if (VAR_10 == ((void*)0)) {
   FUNC_11(VAR_9->dev_softc,
          "can't allocate register resources\n");
   FUNC_1(VAR_9);
   return (VAR_4);
  }
  VAR_9->tags[0] = FUNC_14(VAR_10);
  VAR_9->bshs[0] = FUNC_13(VAR_10);


  VAR_14 = VAR_2;
  VAR_11 = FUNC_6(VAR_9->dev_softc, VAR_12,
            &VAR_14, VAR_5);
  if (VAR_11 == ((void*)0)) {
   FUNC_11(VAR_9->dev_softc,
          "can't allocate register resources\n");
   FUNC_1(VAR_9);
   return (VAR_4);
  }
  VAR_9->tags[1] = FUNC_14(VAR_11);
  VAR_9->bshs[1] = FUNC_13(VAR_11);
  VAR_9->platform_data->regs_res_type[1] = VAR_12;
  VAR_9->platform_data->regs_res_id[1] = VAR_14;
  VAR_9->platform_data->regs[1] = VAR_11;
 }
 VAR_9->platform_data->regs_res_type[0] = VAR_12;
 VAR_9->platform_data->regs_res_id[0] = VAR_13;
 VAR_9->platform_data->regs[0] = VAR_10;
 return (0);
}
