
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint16_t ;
typedef int ib_portid_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int *,int,int,int,int ,char*,int ,int ) ;
 int FUNC_2 (int ,int *,int,int,int ,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (int *,int,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static void FUNC_4(ib_portid_t * VAR_8, int VAR_9,
      uint64_t VAR_10, uint16_t VAR_11)
{
 int VAR_12 = VAR_10;

 if (!VAR_6) {
  if (FUNC_3(VAR_8, VAR_9, VAR_11))
   FUNC_1(VAR_8, VAR_9, VAR_12, 1, 0,
        "PortExtendedSpeedsCounters with RS-FEC Active",
        VAR_0,
        VAR_3);
  else
   FUNC_1(VAR_8, VAR_9, VAR_12, 1, 0,
       "PortExtendedSpeedsCounters",
       VAR_0,
       VAR_2);
 }

 if ((VAR_6 || VAR_5) &&
     !FUNC_2(VAR_4, VAR_8, VAR_9, VAR_10, VAR_1, VAR_7))
  FUNC_0("cannot reset PortExtendedSpeedsCounters");
}
