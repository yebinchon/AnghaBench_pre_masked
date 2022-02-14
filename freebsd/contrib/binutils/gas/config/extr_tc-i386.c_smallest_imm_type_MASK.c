
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int offsetT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static unsigned int
FUNC_6 (offsetT VAR_13)
{
  if (VAR_12 != (VAR_0 | VAR_1 | VAR_2 | VAR_3 | VAR_4))
    {





      if (VAR_13 == 1)
 return VAR_5 | VAR_10 | VAR_11 | VAR_6 | VAR_7 | VAR_8 | VAR_9;
    }
  return (FUNC_0 (VAR_13)
   ? (VAR_11 | VAR_10 | VAR_6 | VAR_7 | VAR_8 | VAR_9)
   : FUNC_3 (VAR_13)
   ? (VAR_10 | VAR_6 | VAR_7 | VAR_8 | VAR_9)
   : (FUNC_2 (VAR_13) || FUNC_5 (VAR_13))
   ? (VAR_6 | VAR_7 | VAR_8 | VAR_9)
   : FUNC_1 (VAR_13)
   ? (VAR_7 | VAR_8 | VAR_9)
   : FUNC_4 (VAR_13)
   ? (VAR_7 | VAR_9)
   : VAR_9);
}
