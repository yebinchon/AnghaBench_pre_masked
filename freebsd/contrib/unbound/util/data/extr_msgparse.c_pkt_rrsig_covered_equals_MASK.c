
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint16_t ;
typedef int sldns_buffer ;


 scalar_t__ FUNC_0 (int *,int *,scalar_t__*) ;

__attribute__((used)) static int
FUNC_1(sldns_buffer* VAR_0, uint8_t* VAR_1, uint16_t VAR_2)
{
 uint16_t VAR_3;
 if(FUNC_0(VAR_0, VAR_1, &VAR_3) && VAR_3 == VAR_2)
  return 1;
 return 0;
}
