
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef int tm ;
typedef scalar_t__ time_t ;
struct tm {int dummy; } ;
typedef int buf ;


 int VAR_0 ;
 int FUNC_0 (struct tm*,int ,int) ;
 scalar_t__ FUNC_1 (struct tm*) ;
 int FUNC_2 (char*,int,char*,char const*,char const*,char const*,...) ;
 int FUNC_3 (char const*) ;
 int * FUNC_4 (char*,char*,struct tm*) ;

int
FUNC_5(const char *VAR_1, uint64_t *VAR_2)
{
 struct tm VAR_3;
 time_t VAR_4;
 char VAR_5[32], *VAR_6;

 *VAR_2 = 0;






 switch (FUNC_3(VAR_1)) {
 case 8:
  VAR_6 = "%Y-%m-%d";
  FUNC_2(VAR_5, sizeof(VAR_5), "%.4s-%.2s-%.2s", VAR_1, VAR_1 + 4, VAR_1 + 6);
  break;
 case 12:
  VAR_6 = "%Y-%m-%dT%H:%M";
  FUNC_2(VAR_5, sizeof(VAR_5), "%.4s-%.2s-%.2sT%.2s:%.2s",
      VAR_1, VAR_1 + 4, VAR_1 + 6, VAR_1 + 8, VAR_1 + 10);
  break;
 case 14:
  VAR_6 = "%Y-%m-%dT%H:%M:%S";
  FUNC_2(VAR_5, sizeof(VAR_5), "%.4s-%.2s-%.2sT%.2s:%.2s:%.2s",
      VAR_1, VAR_1 + 4, VAR_1 + 6, VAR_1 + 8, VAR_1 + 10, VAR_1 + 12);
  break;
 default:
  return VAR_0;
 }

 FUNC_0(&VAR_3, 0, sizeof(VAR_3));
 if (FUNC_4(VAR_5, VAR_6, &VAR_3) == ((void*)0))
  return VAR_0;
 if ((VAR_4 = FUNC_1(&VAR_3)) < 0)
  return VAR_0;

 *VAR_2 = (uint64_t)VAR_4;
 return 0;
}
