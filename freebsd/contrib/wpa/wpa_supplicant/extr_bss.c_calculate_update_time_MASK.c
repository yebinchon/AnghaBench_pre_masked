
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct os_reltime {unsigned int usec; scalar_t__ sec; } ;
typedef unsigned int os_time_t ;



void FUNC_0(const struct os_reltime *VAR_0,
      unsigned int VAR_1,
      struct os_reltime *VAR_2)
{
 os_time_t VAR_3;

 VAR_2->sec = VAR_0->sec;
 VAR_2->usec = VAR_0->usec;
 VAR_2->sec -= VAR_1 / 1000;
 VAR_3 = (VAR_1 % 1000) * 1000;
 if (VAR_2->usec < VAR_3) {
  VAR_2->sec--;
  VAR_2->usec += 1000000;
 }
 VAR_2->usec -= VAR_3;
}
