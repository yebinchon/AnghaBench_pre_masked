
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct ad7417_softc {int init_done; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int*) ;
 int FUNC_1 (int ,int ,int ,int*,int) ;
 int VAR_2 ;
 struct ad7417_softc* FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_3, uint32_t VAR_4)
{
 uint8_t VAR_5;
 int VAR_6;
 struct ad7417_softc *VAR_7;

 VAR_7 = FUNC_2(VAR_3);

 VAR_2 = 0;

 VAR_5 = 0;

 VAR_6 = FUNC_1(VAR_3, VAR_4, VAR_1, &VAR_5, 1);


 VAR_5 = 0;
 VAR_6 = FUNC_1(VAR_3, VAR_4, VAR_0, &VAR_5, 1);
 VAR_6 = FUNC_0(VAR_3, VAR_4, VAR_0, &VAR_5);
 VAR_2 = (uint8_t)VAR_5;


 VAR_2 &= 0xfe;
 VAR_5 = VAR_2;
 VAR_6 = FUNC_1(VAR_3, VAR_4, VAR_0, &VAR_5, 1);
 if (VAR_6 < 0)
  return (-1);

 VAR_7->init_done = 1;

 return (0);

}
