
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {size_t tv_sec; size_t tv_usec; } ;



__attribute__((used)) static void
FUNC_0(struct timeval* VAR_0, const struct timeval* VAR_1, size_t VAR_2)
{

 size_t VAR_3;
 if(VAR_2 == 0) {
  VAR_0->tv_sec = 0;
  VAR_0->tv_usec = 0;
  return;
 }
 VAR_0->tv_sec = VAR_1->tv_sec / VAR_2;
 VAR_0->tv_usec = VAR_1->tv_usec / VAR_2;

 VAR_3 = VAR_1->tv_sec - VAR_0->tv_sec*VAR_2;
 VAR_0->tv_usec += (VAR_3*1000000)/VAR_2;

}
