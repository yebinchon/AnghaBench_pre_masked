
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int sldns_buffer ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,scalar_t__) ;
 int FUNC_2 (int *,scalar_t__*,scalar_t__*) ;
 scalar_t__* FUNC_3 (int *,int ) ;

__attribute__((used)) static int
FUNC_4(sldns_buffer* VAR_0, uint8_t* VAR_1,
 uint8_t* VAR_2, uint8_t* VAR_3)
{
 if(FUNC_0(*VAR_1)) {

  uint8_t* VAR_4 = FUNC_3(VAR_0, FUNC_1(VAR_1[0], VAR_1[1]));
  if( VAR_4 == VAR_2 || VAR_4 == VAR_3 )
   return 0;

  if(FUNC_0(*VAR_3) &&
   VAR_3[0] == VAR_1[0] && VAR_3[1] == VAR_1[1])
   return 0;
 }
 return FUNC_2(VAR_0, VAR_1, VAR_3);
}
