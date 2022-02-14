
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char uint8_t ;


 scalar_t__ FUNC_0 (unsigned char) ;
 scalar_t__ FUNC_1 (char**,size_t*,char*,size_t) ;
 scalar_t__ FUNC_2 (char**,size_t*,char*,...) ;

int FUNC_3(char** VAR_0, size_t* VAR_1, uint8_t* VAR_2,
 size_t VAR_3)
{
 int VAR_4 = 0;
 size_t VAR_5, VAR_6=0;
 VAR_4 += FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3);
 for(VAR_5=0; VAR_5<VAR_3; VAR_5++) {
  if(FUNC_0((unsigned char)VAR_2[VAR_5]) || VAR_2[VAR_5] == '\t') {
   if(!VAR_6) {
    VAR_4 += FUNC_2(VAR_0, VAR_1, " (");
    VAR_6 = 1;
   }
   VAR_4 += FUNC_2(VAR_0, VAR_1, "%c", (char)VAR_2[VAR_5]);
  }
 }
 if(VAR_6)
  VAR_4 += FUNC_2(VAR_0, VAR_1, ")");
 return VAR_4;
}
