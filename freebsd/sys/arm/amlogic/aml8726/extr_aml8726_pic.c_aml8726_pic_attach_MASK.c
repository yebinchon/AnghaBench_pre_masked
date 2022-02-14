
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aml8726_pic_softc {int res; int dev; } ;
typedef int device_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct aml8726_pic_softc*,scalar_t__,unsigned int) ;
 int VAR_4 ;
 int VAR_5 ;
 struct aml8726_pic_softc* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_1 (int ,int ,int ) ;
 struct aml8726_pic_softc* FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_9)
{
 struct aml8726_pic_softc *VAR_10 = FUNC_2(VAR_9);
 int VAR_11;


 if (VAR_6 != ((void*)0))
  return (VAR_4);

 VAR_10->dev = VAR_9;

 if (FUNC_1(VAR_9, VAR_7, VAR_10->res)) {
  FUNC_3(VAR_9, "could not allocate resources for device\n");
  return (VAR_4);
 }




 for (VAR_11 = 0; VAR_11 < VAR_3; VAR_11++) {
  FUNC_0(VAR_10, VAR_1 + VAR_11 * 16, 0);
  FUNC_0(VAR_10, VAR_2 + VAR_11 * 16, ~0u);
  FUNC_0(VAR_10, VAR_0 + VAR_11 * 16, 0);
 }


 VAR_8 = VAR_5;




 VAR_6 = VAR_10;

 return (0);
}
