
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int netdissect_options ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void
FUNC_1(netdissect_options *VAR_0, const uint8_t *VAR_1, size_t VAR_2)
{
 const uint8_t *VAR_3, *VAR_4;

 VAR_4 = VAR_1;
 VAR_3 = VAR_1 + VAR_2;
 while (VAR_2 > 0 && VAR_4 < VAR_3) {
  if (VAR_4 > VAR_1)
                        FUNC_0((VAR_0,":"));
  FUNC_0((VAR_0,"%02x", *VAR_4++));
  VAR_2--;
 }
}
