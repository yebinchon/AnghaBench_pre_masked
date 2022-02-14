
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct config_file {int num_tags; char** tagname; } ;


 int FUNC_0 (struct config_file*,char const*) ;
 int FUNC_1 (char**) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (char**,char**,int) ;
 char* FUNC_4 (char const*) ;

int
FUNC_5(struct config_file* VAR_0, const char* VAR_1)
{
 char** VAR_2;
 char* VAR_3;
 if(FUNC_0(VAR_0, VAR_1) != -1)
  return 1;
 VAR_2 = (char**)FUNC_2(sizeof(char*)*(VAR_0->num_tags+1));
 if(!VAR_2)
  return 0;
 VAR_3 = FUNC_4(VAR_1);
 if(!VAR_3) {
  FUNC_1(VAR_2);
  return 0;
 }
 if(VAR_0->tagname) {
  FUNC_3(VAR_2, VAR_0->tagname, sizeof(char*)*VAR_0->num_tags);
  FUNC_1(VAR_0->tagname);
 }
 VAR_2[VAR_0->num_tags++] = VAR_3;
 VAR_0->tagname = VAR_2;
 return 1;
}
