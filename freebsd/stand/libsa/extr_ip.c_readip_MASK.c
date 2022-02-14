
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ time_t ;
struct iodesc {int dummy; } ;
typedef scalar_t__ ssize_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 (struct iodesc*,void**,void**,scalar_t__,int ) ;

ssize_t
FUNC_2(struct iodesc *VAR_3, void **VAR_4, void **VAR_5, time_t VAR_6,
    uint8_t VAR_7)
{
 time_t VAR_8;
 ssize_t VAR_9 = -1;

 VAR_8 = FUNC_0();
 while ((FUNC_0() - VAR_8) < VAR_6) {
  VAR_2 = 0;
  VAR_9 = FUNC_1(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);
  if (VAR_9 >= 0)
   return (VAR_9);

  if (VAR_2 != VAR_0)
   return (-1);
 }

 VAR_2 = VAR_1;
 return (-1);
}
