
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tm ;
typedef scalar_t__ time_t ;
struct tm {int tm_hour; int tm_min; } ;


 int FUNC_0 (struct tm*,int ,int) ;
 int FUNC_1 (char*,...) ;
 scalar_t__ FUNC_2 (struct tm*) ;
 int FUNC_3 (char const*,char*,int*,int*,...) ;
 char* FUNC_4 (char const*,char*,struct tm*) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static time_t
FUNC_5(const char* VAR_1)
{
 time_t VAR_2 = 0;
 struct tm VAR_3;
 const char* VAR_4;


 VAR_4 = VAR_1;
 if(VAR_4[0] == '-') VAR_4++;
 FUNC_0(&VAR_3, 0, sizeof(VAR_3));

 VAR_4 = FUNC_4(VAR_4, "%t%Y%t-%t%m%t-%t%d%tT%t%H%t:%t%M%t:%t%S%t", &VAR_3);
 if(!VAR_4) {
  if(VAR_0) FUNC_1("xml_convertdate parse failure %s\n", VAR_1);
  return 0;
 }

 if(*VAR_4 == '.') {

  int VAR_5 = 0, VAR_6 = 0;
  if(FUNC_3(VAR_4+1, "%d%n", &VAR_5, &VAR_6) < 1) {
   if(VAR_0) FUNC_1("xml_convertdate f failure %s\n", VAR_1);
   return 0;
  }

  VAR_4++;
  VAR_4+=VAR_6;
 }
 if(*VAR_4 == 'Z' || *VAR_4 == 'z') {

  VAR_4++;
 } else if(*VAR_4 == '+' || *VAR_4 == '-') {

  int VAR_7 = 0, VAR_8 = 0, VAR_9 = 0;
  if(FUNC_3(VAR_4+1, "%d:%d%n", &VAR_7, &VAR_8, &VAR_9) < 2) {
   if(VAR_0) FUNC_1("xml_convertdate tz failure %s\n", VAR_1);
   return 0;
  }
  if(*VAR_4 == '+') {
   VAR_3.tm_hour += VAR_7;
   VAR_3.tm_min += VAR_8;
  } else {
   VAR_3.tm_hour -= VAR_7;
   VAR_3.tm_min -= VAR_8;
  }
  VAR_4++;
  VAR_4 += VAR_9;
 }
 if(*VAR_4 != 0) {


 }

 VAR_2 = FUNC_2(&VAR_3);
 if(VAR_2 == (time_t)-1) {
  if(VAR_0) FUNC_1("xml_convertdate mktime failure\n");
  return 0;
 }
 return VAR_2;
}
