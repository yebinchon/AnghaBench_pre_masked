
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct config_file {int local_zones; int local_zones_nodefault; } ;
typedef int buf ;


 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (unsigned char) ;
 char* FUNC_3 (char const*) ;
 int FUNC_4 (char*,char const*) ;
 char* FUNC_5 (char const*) ;
 scalar_t__ FUNC_6 (char const*,char*) ;
 int FUNC_7 (char const*) ;
 int FUNC_8 (char*,char const*,int) ;

int
FUNC_9(struct config_file* VAR_0, const char* VAR_1)
{
 const char *VAR_2, *VAR_3, *VAR_4;
 char VAR_5[256];


 VAR_4 = VAR_1;
 while(*VAR_4 && FUNC_2((unsigned char)*VAR_4))
  VAR_4++;
 if(!*VAR_4) {
  FUNC_4("syntax error: too short: %s", VAR_1);
  return 0;
 }
 VAR_3 = FUNC_5(VAR_4);
 if(!VAR_3 || !*VAR_3) {
  FUNC_4("syntax error: expected zone type: %s", VAR_1);
  return 0;
 }
 if (VAR_3 - VAR_4 > 255) {
  FUNC_4("syntax error: bad zone name: %s", VAR_1);
  return 0;
 }
 (void)FUNC_8(VAR_5, VAR_4, sizeof(VAR_5));
 VAR_5[VAR_3-VAR_4] = '\0';

 VAR_2 = FUNC_3(VAR_3);
 while(VAR_2 && *VAR_2 && FUNC_2((unsigned char)*VAR_2))
  VAR_2++;
 if(!VAR_2 || !*VAR_2) {
  FUNC_4("syntax error: expected zone type: %s", VAR_1);
  return 0;
 }

 if(FUNC_6(VAR_2, "nodefault")==0) {
  return FUNC_1(&VAR_0->local_zones_nodefault,
   FUNC_7(VAR_4));
 } else {
  return FUNC_0(&VAR_0->local_zones, FUNC_7(VAR_5),
   FUNC_7(VAR_2));
 }
}
