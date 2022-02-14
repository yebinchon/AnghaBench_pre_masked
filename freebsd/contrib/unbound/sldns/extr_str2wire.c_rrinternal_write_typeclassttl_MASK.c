
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
typedef int sldns_buffer ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static int
FUNC_4(sldns_buffer* VAR_2, uint8_t* VAR_3, size_t VAR_4,
 size_t VAR_5, uint16_t VAR_6, uint16_t VAR_7, uint32_t VAR_8, int VAR_9)
{
 if(VAR_9) {

  if(VAR_5 + 4 > VAR_4)
   return FUNC_0(VAR_0,
    FUNC_1(VAR_2));
  FUNC_2(VAR_3+VAR_5, VAR_6);
  FUNC_2(VAR_3+VAR_5+2, VAR_7);
  return VAR_1;
 }


 if(VAR_5 + 10 > VAR_4)
  return FUNC_0(VAR_0,
   FUNC_1(VAR_2));
 FUNC_2(VAR_3+VAR_5, VAR_6);
 FUNC_2(VAR_3+VAR_5+2, VAR_7);
 FUNC_3(VAR_3+VAR_5+4, VAR_8);
 FUNC_2(VAR_3+VAR_5+8, 0);
 return VAR_1;
}
