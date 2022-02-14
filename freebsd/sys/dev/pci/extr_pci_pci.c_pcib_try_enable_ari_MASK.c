
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct pcib_softc {int dummy; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ VAR_7 ;
 struct pcib_softc* FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,scalar_t__) ;
 int FUNC_3 (int ,int ,int*) ;
 int FUNC_4 (int ,int ,int*) ;
 int FUNC_5 (int ,int,int) ;
 int FUNC_6 (struct pcib_softc*,int) ;

__attribute__((used)) static int
FUNC_7(device_t VAR_8, device_t VAR_9)
{
 struct pcib_softc *VAR_10;
 int VAR_11;
 uint32_t VAR_12;
 int VAR_13;
 uint32_t VAR_14;
 uint32_t VAR_15;

 VAR_10 = FUNC_1(VAR_8);






 VAR_11 = FUNC_3(VAR_8, VAR_5, &VAR_15);
 if (VAR_11 != 0)
  return (VAR_0);


 VAR_12 = FUNC_5(VAR_8, VAR_15 + VAR_4, 4);
 if (!(VAR_12 & VAR_3))
  return (VAR_0);





 VAR_11 = FUNC_4(VAR_9, VAR_6, &VAR_13);
 if (VAR_11 != 0)
  return (VAR_0);





 VAR_14 = FUNC_5(VAR_9, VAR_13, 4);
 if (FUNC_0(VAR_14) != VAR_2) {
  if (VAR_7)
   FUNC_2(VAR_8,
       "Unsupported version of ARI (%d) detected\n",
       FUNC_0(VAR_14));

  return (VAR_1);
 }

 FUNC_6(VAR_10, VAR_15);

 return (0);
}
