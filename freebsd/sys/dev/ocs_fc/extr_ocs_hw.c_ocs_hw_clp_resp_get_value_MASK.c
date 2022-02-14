
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int os; } ;
typedef TYPE_1__ ocs_hw_t ;
typedef int int32_t ;


 int FUNC_0 (int ,char*,...) ;
 char* FUNC_1 (char*,char) ;
 int FUNC_2 (char*,char*,int) ;
 char* FUNC_3 (char const*,char const*) ;

__attribute__((used)) static int32_t
FUNC_4(ocs_hw_t *VAR_0, const char *VAR_1, char *VAR_2, uint32_t VAR_3, const char *VAR_4, uint32_t VAR_5)
{
 char *VAR_6 = ((void*)0);
 char *VAR_7 = ((void*)0);


 VAR_6 = FUNC_3(VAR_4, VAR_1);
 if (VAR_6 == ((void*)0)) {
  FUNC_0(VAR_0->os, "could not find keyword=%s in CLP response\n",
        VAR_1);
  return -1;
 }


 VAR_6 = FUNC_1(VAR_6, '=');
 if (VAR_6 == ((void*)0)) {
  FUNC_0(VAR_0->os, "could not find \'=\' in CLP response for keyword=%s\n",
        VAR_1);
  return -1;
 }
 VAR_6++;


 VAR_7 = FUNC_3(VAR_6, "\r\n");
 if (VAR_7 == ((void*)0)) {
  FUNC_0(VAR_0->os, "could not find \\r\\n for keyword=%s in CLP response\n",
        VAR_1);
  return -1;
 }


 if ((VAR_7 - VAR_6 + 1) > VAR_3) {
  FUNC_0(VAR_0->os, "value len=%d not large enough for actual=%ld\n",
        VAR_3, (VAR_7-VAR_6));
  return -1;
 }

 FUNC_2(VAR_2, VAR_6, (VAR_7 - VAR_6));
 VAR_2[VAR_7-VAR_6] = '\0';
 return (VAR_7-VAR_6+1);
}
