
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;


 int VAR_0 ;
 scalar_t__* VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int) ;

__attribute__((used)) static int FUNC_1(int VAR_3, uint8_t VAR_4)
{
 int VAR_5;

 while (*VAR_1 != VAR_4)
  ;

 if (VAR_2) {
  VAR_5 = FUNC_0(VAR_0, VAR_3 - 1);
  if (VAR_5)
   return VAR_5;
 }

 return 0;
}
