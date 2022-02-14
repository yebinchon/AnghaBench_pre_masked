
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef char const* ldns_status ;
typedef int ldns_pkt ;
typedef int FILE ;


 int FUNC_0 (scalar_t__*) ;
 char const* VAR_0 ;
 int FUNC_1 (char*,char const*) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (char const*,char*) ;
 int FUNC_4 (int *,char*,...) ;
 char* FUNC_5 (scalar_t__**,int const*,size_t*) ;

void
FUNC_6(const ldns_pkt *VAR_1, const char *VAR_2)
{
 uint8_t *VAR_3 = ((void*)0);
 size_t VAR_4, VAR_5;
 FILE *VAR_6;
 ldns_status VAR_7;

 VAR_6 = FUNC_3(VAR_2, "w");

 if (VAR_6 == ((void*)0)) {
  FUNC_1("Unable to open %s for writing", VAR_2);
  return;
 }

 VAR_7 = FUNC_5(&VAR_3, VAR_1, &VAR_4);

 if (VAR_7 != VAR_0) {
  FUNC_1("Unable to convert packet: error code %u", VAR_7);
  FUNC_0(VAR_3);
  FUNC_2(VAR_6);
  return;
 }

 FUNC_4(VAR_6, "; 0");
 for (VAR_5 = 1; VAR_5 < 20; VAR_5++) {
  FUNC_4(VAR_6, " %2u", (unsigned int) VAR_5);
 }
 FUNC_4(VAR_6, "\n");
 FUNC_4(VAR_6, ";--");
 for (VAR_5 = 1; VAR_5 < 20; VAR_5++) {
  FUNC_4(VAR_6, " --");
 }
 FUNC_4(VAR_6, "\n");
 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
  if (VAR_5 % 20 == 0 && VAR_5 > 0) {
   FUNC_4(VAR_6, "\t;\t%4u-%4u\n", (unsigned int) VAR_5-19, (unsigned int) VAR_5);
  }
  FUNC_4(VAR_6, " %02x", (unsigned int)VAR_3[VAR_5]);
 }
 FUNC_4(VAR_6, "\n");
 FUNC_2(VAR_6);
 FUNC_0(VAR_3);
}
