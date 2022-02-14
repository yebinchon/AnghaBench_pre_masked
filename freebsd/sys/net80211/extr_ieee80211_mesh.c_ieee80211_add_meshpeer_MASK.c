
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint16_t ;


 int FUNC_0 (int*,scalar_t__) ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int,char*) ;

uint8_t *
FUNC_2(uint8_t *VAR_4, uint8_t VAR_5, uint16_t VAR_6,
    uint16_t VAR_7, uint16_t VAR_8)
{

 FUNC_1(VAR_6 != 0, ("localid == 0"));

 *VAR_4++ = VAR_0;
 switch (VAR_5) {
 case 128:
  *VAR_4++ = VAR_1;
  FUNC_0(VAR_4, VAR_3);
  FUNC_0(VAR_4, VAR_6);
  break;
 case 129:
  FUNC_1(VAR_7 != 0, ("sending peer confirm without peer id"));
  *VAR_4++ = VAR_1 + 2;
  FUNC_0(VAR_4, VAR_3);
  FUNC_0(VAR_4, VAR_6);
  FUNC_0(VAR_4, VAR_7);
  break;
 case 130:
  if (VAR_7)
   *VAR_4++ = VAR_2;
  else
   *VAR_4++ = VAR_1 + 2;
  FUNC_0(VAR_4, VAR_3);
  FUNC_0(VAR_4, VAR_6);
  if (VAR_7)
   FUNC_0(VAR_4, VAR_7);
  FUNC_0(VAR_4, VAR_8);
  break;
 }
 return VAR_4;
}
