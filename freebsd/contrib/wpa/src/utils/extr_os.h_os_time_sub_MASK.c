
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct os_time {scalar_t__ usec; scalar_t__ sec; } ;



__attribute__((used)) static inline void FUNC_0(struct os_time *VAR_0, struct os_time *VAR_1,
          struct os_time *VAR_2)
{
 VAR_2->sec = VAR_0->sec - VAR_1->sec;
 VAR_2->usec = VAR_0->usec - VAR_1->usec;
 if (VAR_2->usec < 0) {
  VAR_2->sec--;
  VAR_2->usec += 1000000;
 }
}
