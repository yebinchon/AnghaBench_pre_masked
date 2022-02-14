
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct vtmmio_softc {int vtmmio_nvqs; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 struct vtmmio_softc* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct vtmmio_softc*,int) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct vtmmio_softc*,int ,int) ;

__attribute__((used)) static int
FUNC_7(device_t VAR_5, uint64_t VAR_6)
{
 struct vtmmio_softc *VAR_7;
 int VAR_8, VAR_9;

 VAR_7 = FUNC_0(VAR_5);

 if (FUNC_1(VAR_5) != VAR_3)
  FUNC_5(VAR_5);





 FUNC_4(VAR_5, VAR_1);
 FUNC_4(VAR_5, VAR_2);

 FUNC_2(VAR_5, VAR_6);

 FUNC_6(VAR_7, VAR_4,
     (1 << VAR_0));

 for (VAR_8 = 0; VAR_8 < VAR_7->vtmmio_nvqs; VAR_8++) {
  VAR_9 = FUNC_3(VAR_7, VAR_8);
  if (VAR_9)
   return (VAR_9);
 }

 return (0);
}
