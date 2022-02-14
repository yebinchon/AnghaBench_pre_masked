
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pio_softc {void* dev; int * res; int bsh; int bst; } ;
struct fdt_ic {int iph; void* dev; } ;
typedef int phandle_t ;
typedef void* device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,struct fdt_ic*,int ) ;
 scalar_t__ FUNC_1 (void*,int ,int *) ;
 struct pio_softc* FUNC_2 (void*) ;
 int FUNC_3 (void*,char*) ;
 int VAR_4 ;
 int VAR_5 ;
 struct fdt_ic* FUNC_4 (int,int ,int) ;
 int FUNC_5 (void*) ;
 int VAR_6 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int
FUNC_8(device_t VAR_7)
{
 struct pio_softc *VAR_8;
 struct fdt_ic *VAR_9;
 phandle_t VAR_10;

 VAR_8 = FUNC_2(VAR_7);
 VAR_8->dev = VAR_7;

 if (FUNC_1(VAR_7, VAR_6, VAR_8->res)) {
  FUNC_3(VAR_7, "could not allocate resources\n");
  return (VAR_0);
 }


 VAR_8->bst = FUNC_7(VAR_8->res[0]);
 VAR_8->bsh = FUNC_6(VAR_8->res[0]);

 if ((VAR_10 = FUNC_5(VAR_8->dev)) == -1)
  return (VAR_0);

 VAR_9 = FUNC_4(sizeof(*VAR_9), VAR_1, VAR_2|VAR_3);
 VAR_9->iph = VAR_10;
 VAR_9->dev = VAR_7;
 FUNC_0(&VAR_4, VAR_9, VAR_5);

 return (0);
}
