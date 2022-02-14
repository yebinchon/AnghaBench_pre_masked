
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct config_file {int * tagname; } ;
typedef int buf ;


 int FUNC_0 (char*,int,char*,char*,int ) ;
 char* FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char*) ;

char* FUNC_3(struct config_file* VAR_0, uint8_t* VAR_1,
        size_t VAR_2)
{
 char VAR_3[10240];
 size_t VAR_4, VAR_5, VAR_6 = 0;
 VAR_3[0] = 0;
 for(VAR_4=0; VAR_4<VAR_2; VAR_4++) {
  if(VAR_1[VAR_4] == 0)
   continue;
  for(VAR_5=0; VAR_5<8; VAR_5++) {
   if((VAR_1[VAR_4] & (1<<VAR_5)) != 0) {
    size_t VAR_7 = VAR_4*8 + VAR_5;
    FUNC_0(VAR_3+VAR_6, sizeof(VAR_3)-VAR_6, "%s%s",
     (VAR_6==0?"":" "), VAR_0->tagname[VAR_7]);
    VAR_6 += FUNC_2(VAR_3+VAR_6);
   }
  }
 }
 return FUNC_1(VAR_3);
}
