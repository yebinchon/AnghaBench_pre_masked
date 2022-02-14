
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mpt_softc {int * eh; } ;
typedef int device_t ;


 int FUNC_0 (int ,int *) ;
 int VAR_0 ;
 int FUNC_1 (struct mpt_softc*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct mpt_softc*) ;
 int FUNC_4 (struct mpt_softc*) ;
 int FUNC_5 (struct mpt_softc*) ;
 int FUNC_6 (struct mpt_softc*) ;
 int FUNC_7 (struct mpt_softc*) ;
 int FUNC_8 (struct mpt_softc*,int ) ;
 int FUNC_9 (struct mpt_softc*) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_10(device_t VAR_2)
{
 struct mpt_softc *VAR_3;

 VAR_3 = (struct mpt_softc*)FUNC_2(VAR_2);

 if (VAR_3) {
  FUNC_4(VAR_3);
  FUNC_3(VAR_3);
  FUNC_8(VAR_3, VAR_0);
  FUNC_7(VAR_3);
  FUNC_5(VAR_3);
  FUNC_6(VAR_3);



  if (VAR_3->eh != ((void*)0)) {
                        FUNC_0(VAR_1, VAR_3->eh);
  }
  FUNC_1(VAR_3);
 }
 return(0);
}
