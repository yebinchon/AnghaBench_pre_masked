
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 size_t VAR_0 ;
 scalar_t__ FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (int *) ;
 scalar_t__ FUNC_14 (int *) ;
 int FUNC_15 (char*,int **,size_t*,char**,size_t*) ;
 int FUNC_16 (char**,size_t*,char*,...) ;
 scalar_t__ FUNC_17 (char**,size_t*,int) ;
 scalar_t__ FUNC_18 (char**,size_t*,int) ;

int FUNC_19(uint8_t** VAR_1, size_t* VAR_2, char** VAR_3,
 size_t* VAR_4)
{
 int VAR_5 = 0;
 int VAR_6, VAR_7;
 VAR_5 += FUNC_16(VAR_3, VAR_4, ";; ->>HEADER<<- ");
 if(*VAR_2 == 0)
  return VAR_5+FUNC_16(VAR_3, VAR_4, "Error empty packet");
 if(*VAR_2 < 4)
  return VAR_5+FUNC_15("Error header too short 0x", VAR_1, VAR_2, VAR_3, VAR_4);
 VAR_6 = (int)FUNC_7(*VAR_1);
 VAR_7 = (int)FUNC_11(*VAR_1);
 VAR_5 += FUNC_16(VAR_3, VAR_4, "opcode: ");
 VAR_5 += FUNC_17(VAR_3, VAR_4, VAR_6);
 VAR_5 += FUNC_16(VAR_3, VAR_4, ", ");
 VAR_5 += FUNC_16(VAR_3, VAR_4, "rcode: ");
 VAR_5 += FUNC_18(VAR_3, VAR_4, VAR_7);
 VAR_5 += FUNC_16(VAR_3, VAR_4, ", ");
 VAR_5 += FUNC_16(VAR_3, VAR_4, "id: %d\n", (int)FUNC_5(*VAR_1));
 VAR_5 += FUNC_16(VAR_3, VAR_4, ";; flags:");
 if(FUNC_9(*VAR_1)) VAR_5 += FUNC_16(VAR_3, VAR_4, " qr");
 if(FUNC_0(*VAR_1)) VAR_5 += FUNC_16(VAR_3, VAR_4, " aa");
 if(FUNC_13(*VAR_1)) VAR_5 += FUNC_16(VAR_3, VAR_4, " tc");
 if(FUNC_12(*VAR_1)) VAR_5 += FUNC_16(VAR_3, VAR_4, " rd");
 if(FUNC_4(*VAR_1)) VAR_5 += FUNC_16(VAR_3, VAR_4, " cd");
 if(FUNC_10(*VAR_1)) VAR_5 += FUNC_16(VAR_3, VAR_4, " ra");
 if(FUNC_1(*VAR_1)) VAR_5 += FUNC_16(VAR_3, VAR_4, " ad");
 if(FUNC_14(*VAR_1)) VAR_5 += FUNC_16(VAR_3, VAR_4, " z");
 VAR_5 += FUNC_16(VAR_3, VAR_4, " ; ");
 if(*VAR_2 < VAR_0)
  return VAR_5+FUNC_15("Error header too short 0x", VAR_1, VAR_2, VAR_3, VAR_4);
 VAR_5 += FUNC_16(VAR_3, VAR_4, "QUERY: %d, ", (int)FUNC_8(*VAR_1));
 VAR_5 += FUNC_16(VAR_3, VAR_4, "ANSWER: %d, ", (int)FUNC_2(*VAR_1));
 VAR_5 += FUNC_16(VAR_3, VAR_4, "AUTHORITY: %d, ", (int)FUNC_6(*VAR_1));
 VAR_5 += FUNC_16(VAR_3, VAR_4, "ADDITIONAL: %d ", (int)FUNC_3(*VAR_1));
 *VAR_1 += VAR_0;
 *VAR_2 -= VAR_0;
 return VAR_5;
}
