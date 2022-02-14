
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct MY_STAT {scalar_t__ st_nlink; } ;
typedef scalar_t__ IntNative ;
typedef scalar_t__ Int32 ;
typedef int Char ;


 scalar_t__ FUNC_0 (int *,struct MY_STAT*) ;

__attribute__((used)) static
Int32 FUNC_1 ( Char* VAR_0 )
{
   IntNative VAR_1;
   struct MY_STAT VAR_2;

   VAR_1 = FUNC_0 ( VAR_0, &VAR_2 );
   if (VAR_1 != 0) return 0;
   return (VAR_2.st_nlink - 1);
}
