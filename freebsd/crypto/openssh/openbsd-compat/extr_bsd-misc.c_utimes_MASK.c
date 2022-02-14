
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct utimbuf {int modtime; int actime; } ;
struct timeval {int tv_sec; } ;


 int FUNC_0 (char*,struct utimbuf*) ;

int FUNC_1(char *VAR_0, struct timeval *VAR_1)
{
 struct utimbuf VAR_2;

 VAR_2.actime = VAR_1[0].tv_sec;
 VAR_2.modtime = VAR_1[1].tv_sec;

 return (FUNC_0(VAR_0, &VAR_2));
}
