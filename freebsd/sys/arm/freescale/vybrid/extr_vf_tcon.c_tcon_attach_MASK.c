
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcon_softc {int * res; int bsh; int bst; } ;
typedef int device_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,int *) ;
 struct tcon_softc* FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 struct tcon_softc* VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_5(device_t VAR_3)
{
 struct tcon_softc *VAR_4;

 VAR_4 = FUNC_1(VAR_3);

 if (FUNC_0(VAR_3, VAR_2, VAR_4->res)) {
  FUNC_2(VAR_3, "could not allocate resources\n");
  return (VAR_0);
 }


 VAR_4->bst = FUNC_4(VAR_4->res[0]);
 VAR_4->bsh = FUNC_3(VAR_4->res[0]);

 VAR_1 = VAR_4;

 return (0);
}
