
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct utimbuf {int modtime; int actime; } ;
struct timeval {scalar_t__ tv_usec; int tv_sec; } ;


 int FUNC_0 (char const*,struct timeval*) ;

int
FUNC_1(const char *VAR_0, const struct utimbuf *VAR_1)
{
 struct timeval VAR_2[2], *VAR_3;

 if (VAR_1) {
  VAR_2[0].tv_sec = VAR_1->actime;
  VAR_2[1].tv_sec = VAR_1->modtime;
  VAR_2[0].tv_usec = VAR_2[1].tv_usec = 0;
  VAR_3 = VAR_2;
 } else
  VAR_3 = ((void*)0);
 return (FUNC_0(VAR_0, VAR_3));
}
