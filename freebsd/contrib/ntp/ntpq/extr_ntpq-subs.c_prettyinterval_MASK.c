
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (long) ;
 int FUNC_1 (char*,size_t,char*,unsigned int) ;
 int FUNC_2 (char*,char*,size_t) ;

__attribute__((used)) static char *
FUNC_3(
 char *VAR_0,
 size_t VAR_1,
 long VAR_2
 )
{
 if (VAR_2 <= 0) {
  VAR_0[0] = '-';
  VAR_0[1] = 0;
  return VAR_0;
 }

 if (VAR_2 <= 2048) {
  FUNC_1(VAR_0, VAR_1, "%u", (unsigned int)VAR_2);
  return VAR_0;
 }

 VAR_2 = (VAR_2 + 29) / 60;
 if (VAR_2 <= 300) {
  FUNC_1(VAR_0, VAR_1, "%um", (unsigned int)VAR_2);
  return VAR_0;
 }

 VAR_2 = (VAR_2 + 29) / 60;
 if (VAR_2 <= 96) {
  FUNC_1(VAR_0, VAR_1, "%uh", (unsigned int)VAR_2);
  return VAR_0;
 }

 VAR_2 = (VAR_2 + 11) / 24;
 if (VAR_2 <= 999) {
  FUNC_1(VAR_0, VAR_1, "%ud", (unsigned int)VAR_2);
  return VAR_0;
 }


 VAR_2 = (long)FUNC_0(VAR_2 / 365.25 + 0.5);
 if (VAR_2 <= 999) {
  FUNC_1(VAR_0, VAR_1, "%uy", (unsigned int)VAR_2);
  return VAR_0;
 }

 FUNC_2(VAR_0, "INF", VAR_1);
 return VAR_0;
}
