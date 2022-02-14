
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ,int ,int*) ;
 scalar_t__ FUNC_2 (int ,int ,int) ;
 int FUNC_3 (char*,int) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_4, uint8_t VAR_5)
{
 uint8_t VAR_6;
 uint8_t VAR_7;
 int VAR_8;

 if (FUNC_1(VAR_4, VAR_0, &VAR_6) != 0) {
  FUNC_0(VAR_4,
      "Couldn't read first byte before issuing command %d\n",
      VAR_5);
  return (-1);
 }

 VAR_7 = (VAR_6 & 0x1f) | VAR_5;
 if (FUNC_2(VAR_4, VAR_0, VAR_7) != 0) {
  FUNC_0(VAR_4, "Couldn't write command %d\n", VAR_5);
  return (-1);
 }

 FUNC_3("islconv", VAR_3/10);

 if (FUNC_1(VAR_4, VAR_1, &VAR_6) != 0) {
  FUNC_0(VAR_4,
      "Couldn't read first byte after command %d\n", VAR_5);
  return (-1);
 }

 VAR_8 = VAR_6;
 if (FUNC_1(VAR_4, VAR_2, &VAR_6) != 0) {
  FUNC_0(VAR_4, "Couldn't read second byte after command %d\n", VAR_5);
  return (-1);
 }
 VAR_8 += VAR_6 << 8;

 return (VAR_8);
}
