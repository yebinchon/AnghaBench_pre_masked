
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ssize_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (int,char*,size_t) ;

__attribute__((used)) static ssize_t
FUNC_1(int VAR_6, char *VAR_7, size_t VAR_8)
{
 ssize_t VAR_9;

 VAR_9 = FUNC_0(VAR_6, VAR_7, VAR_8);
 if (VAR_9 < 0) {
  if (VAR_4 == VAR_0 || (VAR_4 == VAR_1 && VAR_5))
   return (VAR_3);
  else
   return (VAR_2);
 }
 return (VAR_9);
}
