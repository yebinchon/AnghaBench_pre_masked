
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cbb_softc {int bsh; int bst; int * exca; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 struct cbb_softc* FUNC_4 (int ) ;
 int FUNC_5 (int ,int *,int ,int ) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_6(device_t VAR_2)
{
 int VAR_3;
 struct cbb_softc *VAR_4 = FUNC_4(VAR_2);


 VAR_3 = FUNC_0(FUNC_3(VAR_2), VAR_2, VAR_1);
 if (VAR_3 != 0 && VAR_3 != VAR_0)
  return (VAR_3);

 VAR_3 = FUNC_1(VAR_2);
 if (VAR_3 != 0)
  return (VAR_3);


 VAR_3 = FUNC_5(VAR_2, &VAR_4->exca[0], VAR_4->bst, VAR_4->bsh);
 FUNC_2(VAR_2);
 return (VAR_3);
}
