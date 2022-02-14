
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
typedef int ib_portid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (int ,char*,char*,...) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int *,int *,int,int,int ,int ,int ) ;
 char* FUNC_3 (int *) ;
 int FUNC_4 (int *,int *,int,int,int ,int ) ;
 int VAR_11 ;

__attribute__((used)) static void FUNC_5(ib_portid_t * VAR_12, uint16_t VAR_13,
         char *VAR_14, int VAR_15)
{
 uint8_t VAR_16[1024] = { 0 };



 uint32_t VAR_17 = 0;

 if (VAR_7) {
  VAR_17 |= 0xFFF;
  if (VAR_13 & VAR_5)
   VAR_17 |= 0x10000;
 }
 if (VAR_6)
  VAR_17 |= 0xF000;

 if (VAR_17)
  if (!FUNC_2(VAR_16, VAR_12, VAR_15, VAR_17, VAR_9,
        VAR_0, VAR_10))
   FUNC_0(VAR_11, "Failed to reset errors %s port %d\n", VAR_14,
    VAR_15);

 if (VAR_7 && VAR_8) {
  FUNC_1(VAR_16, 0, 1024);
  FUNC_2(VAR_16, VAR_12, VAR_15, 0xf, VAR_9,
          VAR_2,
          VAR_10);
  FUNC_1(VAR_16, 0, 1024);
  FUNC_2(VAR_16, VAR_12, VAR_15, 0x3f, VAR_9,
          VAR_1,
          VAR_10);
 }

 if (VAR_6 &&
     (VAR_13 &
      (VAR_4 | VAR_3))) {
  if (VAR_13 & VAR_4)
   VAR_17 = 0xFF;
  else
   VAR_17 = 0x0F;

  if (!FUNC_4(VAR_16, VAR_12, VAR_15, VAR_17, VAR_9,
      VAR_10))
   FUNC_0(VAR_11, "Failed to reset extended data counters %s, "
    "%s port %d\n", VAR_14, FUNC_3(VAR_12),
    VAR_15);
 }
}
