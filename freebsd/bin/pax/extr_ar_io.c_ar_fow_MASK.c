
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ off_t ;
struct TYPE_2__ {scalar_t__ st_size; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int ,scalar_t__,int ) ;
 int VAR_7 ;
 int FUNC_1 (int,int ,char*) ;

int
FUNC_2(off_t VAR_8, off_t *VAR_9)
{
 off_t VAR_10;
 off_t VAR_11;

 *VAR_9 = 0;
 if (VAR_8 <= 0)
  return(0);




 if (VAR_7 <= 0)
  return(VAR_7);







 if (VAR_5 != VAR_0)
  return(0);




 if ((VAR_10 = FUNC_0(VAR_3, (off_t)0L, VAR_1)) >= 0) {






  if ((VAR_11 = VAR_10 + VAR_8) > VAR_4.st_size) {
   *VAR_9 = VAR_4.st_size - VAR_10;
   VAR_11 = VAR_4.st_size;
  } else
   *VAR_9 = VAR_8;
  if (FUNC_0(VAR_3, VAR_11, VAR_2) >= 0)
   return(0);
 }
 FUNC_1(1, VAR_6, "Forward positioning operation on archive failed");
 VAR_7 = -1;
 return(-1);
}
