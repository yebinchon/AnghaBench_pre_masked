
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iodesc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct iodesc* VAR_3 ;

struct iodesc *
FUNC_0(int VAR_4)
{
 if (VAR_4 >= VAR_1) {
  VAR_2 = VAR_0;
  return (((void*)0));
 }
 return (&VAR_3[VAR_4]);
}
