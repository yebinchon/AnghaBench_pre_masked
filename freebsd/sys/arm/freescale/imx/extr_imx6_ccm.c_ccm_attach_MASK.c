
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ccm_softc {int * mem_res; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ccm_softc*,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct ccm_softc*,int ,int) ;
 int * FUNC_2 (int ,int ,int*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct ccm_softc*) ;
 struct ccm_softc* VAR_8 ;
 struct ccm_softc* FUNC_5 (int ) ;
 int FUNC_6 (int ,char*) ;

__attribute__((used)) static int
FUNC_7(device_t VAR_9)
{
 struct ccm_softc *VAR_10;
 int VAR_11, VAR_12;
 uint32_t VAR_13;

 VAR_10 = FUNC_5(VAR_9);
 VAR_11 = 0;


 VAR_12 = 0;
 VAR_10->mem_res = FUNC_2(VAR_9, VAR_7, &VAR_12,
     VAR_6);
 if (VAR_10->mem_res == ((void*)0)) {
  FUNC_6(VAR_9, "Cannot allocate memory resources\n");
  VAR_11 = VAR_5;
  goto out;
 }

 VAR_8 = VAR_10;
 VAR_13 = FUNC_0(VAR_10, VAR_0);
 VAR_13 |= VAR_1;
 FUNC_1(VAR_10, VAR_0, VAR_13);
 VAR_13 = FUNC_0(VAR_10, VAR_2);
 VAR_13 = (VAR_13 & ~VAR_3) | VAR_4;
 FUNC_1(VAR_10, VAR_2, VAR_13);

 FUNC_4(VAR_10);

 VAR_11 = 0;

out:

 if (VAR_11 != 0)
  FUNC_3(VAR_9);

 return (VAR_11);
}
