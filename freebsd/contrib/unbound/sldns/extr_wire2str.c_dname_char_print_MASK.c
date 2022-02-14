
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char uint8_t ;


 scalar_t__ FUNC_0 (unsigned char) ;
 scalar_t__ FUNC_1 (unsigned char) ;
 int FUNC_2 (char**,size_t*,char*,unsigned int) ;

__attribute__((used)) static int FUNC_3(char** VAR_0, size_t* VAR_1, uint8_t VAR_2)
{
 if(VAR_2 == '.' || VAR_2 == ';' || VAR_2 == '(' || VAR_2 == ')' || VAR_2 == '\\')
  return FUNC_2(VAR_0, VAR_1, "\\%c", VAR_2);
 else if(!(FUNC_0((unsigned char)VAR_2) && FUNC_1((unsigned char)VAR_2)))
  return FUNC_2(VAR_0, VAR_1, "\\%03u", (unsigned)VAR_2);

 if(*VAR_1) {
  **VAR_0 = (char)VAR_2;
  (*VAR_0)++;
  (*VAR_1)--;
 }
 return 1;
}
