
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u_int ;
struct TYPE_2__ {char* rm_descr; int rm_type; int rm_end; scalar_t__ rm_start; } ;
struct chipc_softc {int dev; TYPE_1__ mem_rman; } ;
typedef int bhnd_port_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct chipc_softc*) ;
 int FUNC_3 (struct chipc_softc*,int ,size_t) ;
 int FUNC_4 (int ,char*,int,...) ;
 size_t FUNC_5 (int *) ;
 int FUNC_6 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_7(struct chipc_softc *VAR_3)
{
 u_int VAR_4;
 int VAR_5;


 bhnd_port_type VAR_6[] = {
     VAR_0
 };


 VAR_3->mem_rman.rm_start = 0;
 VAR_3->mem_rman.rm_end = VAR_1;
 VAR_3->mem_rman.rm_type = VAR_2;
 VAR_3->mem_rman.rm_descr = "ChipCommon Device Memory";
 if ((VAR_5 = FUNC_6(&VAR_3->mem_rman))) {
  FUNC_4(VAR_3->dev, "could not initialize mem_rman: %d\n",
      VAR_5);
  return (VAR_5);
 }


 for (u_int VAR_7 = 0; VAR_7 < FUNC_5(VAR_6); VAR_7++) {
  VAR_4 = FUNC_0(VAR_3->dev, VAR_6[VAR_7]);
  for (u_int VAR_8 = 0; VAR_8 < VAR_4; VAR_8++) {
   VAR_5 = FUNC_3(VAR_3, VAR_6[VAR_7], VAR_8);
   if (VAR_5) {
    FUNC_4(VAR_3->dev,
        "region init failed for %s%u: %d\n",
         FUNC_1(VAR_6[VAR_7]), VAR_8,
         VAR_5);

    goto failed;
   }
  }
 }

 return (0);

failed:
 FUNC_2(VAR_3);
 return (VAR_5);
}
