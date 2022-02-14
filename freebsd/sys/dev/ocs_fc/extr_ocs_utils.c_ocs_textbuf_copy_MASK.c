
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int ocs_textbuf_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;

void
FUNC_2(ocs_textbuf_t *VAR_0, uint8_t *VAR_1, uint32_t VAR_2)
{
 char *VAR_3;

 if (!FUNC_0(VAR_0)) {
  return;
 }

 VAR_3 = (char*) VAR_1;
 while(*VAR_3) {
  FUNC_1(VAR_0, *VAR_3++);
 }

}
