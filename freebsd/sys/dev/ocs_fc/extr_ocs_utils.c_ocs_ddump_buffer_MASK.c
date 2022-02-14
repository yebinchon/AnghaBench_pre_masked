
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int ocs_textbuf_t ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,...) ;

void
FUNC_1(ocs_textbuf_t *VAR_1, const char *VAR_2, uint32_t VAR_3, void *VAR_4, uint32_t VAR_5)
{
 uint32_t *VAR_6;
 uint32_t VAR_7;
 uint32_t VAR_8;

 VAR_8 = VAR_5 / sizeof(uint32_t);

 if (VAR_8 == 0) {
  return;
 }

 FUNC_0(VAR_1, "<%s type=\"buffer\" instance=\"%d\">\n", VAR_2, VAR_3);

 VAR_6 = VAR_4;
 for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++) {

  FUNC_0(VAR_1, "%08x ", *VAR_6++);
  if ((VAR_7 % 8) == (8 - 1)) {
   FUNC_0(VAR_1, "\n");
  }
 }

 FUNC_0(VAR_1, "</%s>\n", VAR_2);
}
