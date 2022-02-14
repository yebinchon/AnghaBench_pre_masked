
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
 const uint8_t *VAR_3;
 size_t VAR_4;

 VAR_3 = VAR_1;
 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
  FUNC_0((VAR_0,"%02x", VAR_3[VAR_4] & 0xff));
}
