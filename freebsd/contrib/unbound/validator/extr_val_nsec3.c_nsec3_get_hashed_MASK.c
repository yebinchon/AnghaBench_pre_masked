
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int sldns_buffer ;


 int FUNC_0 (char*,int) ;
 size_t FUNC_1 (int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int,unsigned char*,int ,unsigned char*) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int *,size_t) ;

size_t
FUNC_9(sldns_buffer* VAR_0, uint8_t* VAR_1, size_t VAR_2, int VAR_3,
 size_t VAR_4, uint8_t* VAR_5, size_t VAR_6, uint8_t* VAR_7, size_t VAR_8)
{
 size_t VAR_9, VAR_10;

 FUNC_5(VAR_0);
 FUNC_8(VAR_0, VAR_1, VAR_2);
 FUNC_2(FUNC_4(VAR_0));
 FUNC_8(VAR_0, VAR_5, VAR_6);
 FUNC_6(VAR_0);
 VAR_10 = FUNC_1(VAR_3);
 if(VAR_10 == 0) {
  FUNC_0("nsec3 hash of unknown algo %d", VAR_3);
  return 0;
 }
 if(VAR_10 > VAR_8)
  return 0;
 if(!FUNC_3(VAR_3, (unsigned char*)FUNC_4(VAR_0),
  FUNC_7(VAR_0), (unsigned char*)VAR_7))
  return 0;
 for(VAR_9=0; VAR_9<VAR_4; VAR_9++) {
  FUNC_5(VAR_0);
  FUNC_8(VAR_0, VAR_7, VAR_10);
  FUNC_8(VAR_0, VAR_5, VAR_6);
  FUNC_6(VAR_0);
  if(!FUNC_3(VAR_3,
   (unsigned char*)FUNC_4(VAR_0),
   FUNC_7(VAR_0), (unsigned char*)VAR_7))
   return 0;
 }
 return VAR_10;
}
