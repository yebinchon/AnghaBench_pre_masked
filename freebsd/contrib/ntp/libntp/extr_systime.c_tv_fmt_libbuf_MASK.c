
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vint64 ;
typedef int u_short ;
typedef int u_int ;
struct timeval {scalar_t__ tv_usec; int tv_sec; } ;
struct calendar {scalar_t__ second; scalar_t__ minute; scalar_t__ hour; scalar_t__ monthday; scalar_t__ month; int year; } ;
typedef int ntpcal_split ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct calendar*,int *,int ) ;
 int FUNC_3 (char*,int ,char*,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static const char *
FUNC_5(
 const struct timeval * VAR_2
 )
{
 char * VAR_3;
 vint64 VAR_4;
 ntpcal_split VAR_5;
 struct calendar VAR_6;

 VAR_4 = FUNC_4(&VAR_2->tv_sec);
 VAR_5 = FUNC_1(&VAR_4);
 FUNC_2(&VAR_6, &VAR_5, VAR_0);
 FUNC_0(VAR_3);
 FUNC_3(VAR_3, VAR_1,
   "%04hu-%02hu-%02hu/%02hu:%02hu:%02hu.%06u",
   VAR_6.year, (u_short)VAR_6.month, (u_short)VAR_6.monthday,
   (u_short)VAR_6.hour, (u_short)VAR_6.minute, (u_short)VAR_6.second,
   (u_int)VAR_2->tv_usec);
 return VAR_3;
}
