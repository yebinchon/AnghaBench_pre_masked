
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct config_file {scalar_t__ num_tags; } ;


 int * FUNC_0 (int,size_t) ;
 int FUNC_1 (int *,size_t,int) ;
 int FUNC_2 (struct config_file*,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,...) ;
 char* FUNC_5 (char**,char*) ;

uint8_t* FUNC_6(struct config_file* VAR_0, char* VAR_1,
        size_t* VAR_2)
{
 uint8_t* VAR_3 = ((void*)0);
 size_t VAR_4 = 0;
 char* VAR_5, *VAR_6;


 if(VAR_0->num_tags == 0) {
  FUNC_4("parse taglist, but no tags defined");
  return 0;
 }
 VAR_4 = (size_t)(VAR_0->num_tags+7)/8;
 VAR_3 = FUNC_0(1, VAR_4);
 if(!VAR_3) {
  FUNC_4("out of memory");
  return 0;
 }


 VAR_6 = VAR_1;
 while((VAR_5=FUNC_5(&VAR_6, " \t\n")) != ((void*)0)) {
  if(*VAR_5) {
   int VAR_7 = FUNC_2(VAR_0, VAR_5);

   if(VAR_7 == -1) {
    FUNC_4("unknown tag: %s", VAR_5);
    FUNC_3(VAR_3);
    return 0;
   }
   FUNC_1(VAR_3, VAR_4, VAR_7);
  }
 }

 *VAR_2 = VAR_4;
 return VAR_3;
}
