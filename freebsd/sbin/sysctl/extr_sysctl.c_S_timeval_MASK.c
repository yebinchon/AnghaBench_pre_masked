
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ time_t ;
struct timeval {scalar_t__ tv_sec; int tv_usec; } ;
typedef int intmax_t ;


 int FUNC_0 (scalar_t__*) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (char*,int ,int ) ;
 int VAR_1 ;
 char* FUNC_4 (int ) ;
 int FUNC_5 (char*,size_t,int) ;

__attribute__((used)) static int
FUNC_6(size_t VAR_2, void *VAR_3)
{
 struct timeval *VAR_4 = (struct timeval*)VAR_3;
 time_t VAR_5;
 char *VAR_6, *VAR_7;

 if (VAR_2 != sizeof(*VAR_4)) {
  FUNC_5("S_timeval %zu != %zu", VAR_2, sizeof(*VAR_4));
  return (1);
 }
 FUNC_3(VAR_0 ? "{ sec = %'jd, usec = %'ld } " :
  "{ sec = %jd, usec = %ld } ",
  (intmax_t)VAR_4->tv_sec, VAR_4->tv_usec);
 VAR_5 = VAR_4->tv_sec;
 VAR_6 = FUNC_4(FUNC_0(&VAR_5));
 for (VAR_7=VAR_6; *VAR_7 ; VAR_7++)
  if (*VAR_7 == '\n')
   *VAR_7 = '\0';
 FUNC_1(VAR_6, VAR_1);
 FUNC_2(VAR_6);
 return (0);
}
