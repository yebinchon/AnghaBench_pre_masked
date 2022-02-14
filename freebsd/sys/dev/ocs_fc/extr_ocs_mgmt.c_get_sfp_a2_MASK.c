
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char uint8_t ;
typedef int ocs_textbuf_t ;
typedef int ocs_t ;
typedef int int32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,int) ;
 char* FUNC_1 (int *,int,int) ;
 int FUNC_2 (int *,int ,char*,char*) ;
 int FUNC_3 (int *,int,char*,int) ;
 int FUNC_4 (char*,int,char*,char) ;

__attribute__((used)) static void
FUNC_5(ocs_t *VAR_4, char *VAR_5, ocs_textbuf_t *VAR_6)
{
 uint8_t *VAR_7;
 char *VAR_8;
 int VAR_9;
 int32_t VAR_10;

 VAR_7 = FUNC_1(VAR_4, VAR_3, VAR_2 | VAR_1);
 if (VAR_7 == ((void*)0)) {
  return;
 }

 VAR_8 = FUNC_1(VAR_4, (VAR_3 * 3) + 1, VAR_2 | VAR_1);
 if (VAR_8 == ((void*)0)) {
  FUNC_0(VAR_4, VAR_7, VAR_3);
  return;
 }

 VAR_10 = FUNC_3(VAR_4, 0xa2, VAR_7, VAR_3);

 if (VAR_10 <= 0) {
  FUNC_2(VAR_6, VAR_0, "sfp_a2", "(unknown)");
 } else {
  char *VAR_11 = VAR_8;
  uint8_t *VAR_12 = VAR_7;
  int VAR_13 = (VAR_3 * 3) + 1;
  int VAR_14;

  for (VAR_9=0; VAR_9 < VAR_10; VAR_9++) {
   VAR_14 = FUNC_4(VAR_11, VAR_13, "%02x ", *VAR_12);
   ++VAR_12;
   VAR_11 += VAR_14;
   VAR_13 -= VAR_14;
  }
  *VAR_11 = '\0';
  FUNC_2(VAR_6, VAR_0, "sfp_a2", VAR_8);
 }

 FUNC_0(VAR_4, VAR_7, VAR_3);
 FUNC_0(VAR_4, VAR_8, (3 * VAR_3) + 1);
}
