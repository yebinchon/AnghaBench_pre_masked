
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tm ;
typedef scalar_t__ time_t ;
struct tm {int dummy; } ;
typedef scalar_t__ int32_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__*,struct tm*) ;
 int FUNC_1 (char*,char const*,...) ;
 int FUNC_2 (struct tm*,int ,int) ;
 scalar_t__ FUNC_3 (char*,int,char*,struct tm*) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void
FUNC_4(const char* VAR_2, int32_t VAR_3, int32_t VAR_4, int32_t VAR_5)
{
 struct tm VAR_6;
 char VAR_7[16];
 char VAR_8[16];
 char VAR_9[16];
 time_t VAR_10, VAR_11, VAR_12;

 if(VAR_1 < VAR_0)
  return;
 VAR_10 = (time_t)VAR_3;
 VAR_11 = (time_t)VAR_4;
 VAR_12 = (time_t)VAR_5;
 FUNC_2(&VAR_6, 0, sizeof(VAR_6));
 if(FUNC_0(&VAR_10, &VAR_6) && FUNC_3(VAR_7, 15, "%Y%m%d%H%M%S", &VAR_6)
  &&FUNC_0(&VAR_11, &VAR_6) && FUNC_3(VAR_8, 15, "%Y%m%d%H%M%S", &VAR_6)
  &&FUNC_0(&VAR_12, &VAR_6) && FUNC_3(VAR_9, 15, "%Y%m%d%H%M%S", &VAR_6)) {
  FUNC_1("%s expi=%s incep=%s now=%s", VAR_2, VAR_7,
   VAR_8, VAR_9);
 } else
  FUNC_1("%s expi=%u incep=%u now=%u", VAR_2, (unsigned)VAR_3,
   (unsigned)VAR_4, (unsigned)VAR_5);
}
