
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int ocs_textbuf_t ;
typedef int int32_t ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,...) ;

void
FUNC_1(ocs_textbuf_t *VAR_1, void *VAR_2, uint32_t VAR_3,
   uint32_t VAR_4, int32_t VAR_5, uint32_t VAR_6)
{
 uint32_t VAR_7;
 uint32_t VAR_8;
 uint8_t *VAR_9;
 uint32_t *VAR_10;
 uint32_t VAR_11 = 0;
 uint32_t VAR_12 = VAR_3 / sizeof(uint32_t);

 if ((VAR_6 == (uint32_t)-1) || (VAR_6 > VAR_4)) {

  VAR_11 = VAR_4;
  VAR_5 = 0;
 } else {
  VAR_11 = VAR_6;

  VAR_5 -= (VAR_6 - 1);
  if (VAR_5 < 0) {
   VAR_5 += VAR_4;
  }

 }

 FUNC_0(VAR_1, "<qentries>\n");
 for (VAR_7 = 0; VAR_7 < VAR_11; VAR_7++){
  VAR_9 = VAR_2;
  VAR_9 += VAR_5 * VAR_3;
  VAR_10 = (uint32_t *)VAR_9;

  FUNC_0(VAR_1, "[%04x] ", VAR_5);
  for (VAR_8 = 0; VAR_8 < VAR_12; VAR_8++) {
   FUNC_0(VAR_1, "%08x ", *VAR_10++);
   if (((VAR_8+1) == VAR_12) ||
       ((VAR_8 % 8) == (8 - 1))) {
    FUNC_0(VAR_1, "\n");
    if ((VAR_8+1) < VAR_12) {
     FUNC_0(VAR_1, "       ");
    }
   }
  }

  VAR_5++;
  if ((uint32_t)VAR_5 >= VAR_4) {
   VAR_5 = 0;
  }
 }
 FUNC_0(VAR_1, "</qentries>\n");
}
