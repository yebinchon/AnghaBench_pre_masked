
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int netdissect_options ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,int) ;

__attribute__((used)) static void FUNC_2(netdissect_options *VAR_1, uint8_t VAR_2)
{
 uint8_t VAR_3;
 uint8_t VAR_4;

 VAR_4 = ((VAR_2 >> 4) & 1);

 if (VAR_4)
  FUNC_0((VAR_1, " Authoritative,"));
 else
  FUNC_0((VAR_1, " Non-Authoritative,"));

 VAR_3 = VAR_2 >> 5;
 FUNC_0((VAR_1, " %s,", FUNC_1(VAR_0, "unknown", VAR_3)));
}
