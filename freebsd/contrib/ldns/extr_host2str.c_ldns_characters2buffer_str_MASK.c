
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char uint8_t ;
typedef int ldns_buffer ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *,char*,unsigned int) ;

__attribute__((used)) static void
FUNC_2(ldns_buffer* VAR_0,
  size_t VAR_1, const uint8_t* VAR_2)
{
 uint8_t VAR_3;
 while (VAR_1 > 0) {
  VAR_3 = *VAR_2++;
  if (FUNC_0((int)VAR_3) || VAR_3 == '\t') {
   if (VAR_3 == '\"' || VAR_3 == '\\')
    FUNC_1(VAR_0, "\\%c", VAR_3);
   else
    FUNC_1(VAR_0, "%c", VAR_3);
  } else {
   FUNC_1(VAR_0, "\\%03u",
                                (unsigned)(uint8_t) VAR_3);
  }
  VAR_1--;
 }
}
