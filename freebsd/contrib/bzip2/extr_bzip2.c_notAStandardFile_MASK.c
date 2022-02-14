
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct MY_STAT {int st_mode; } ;
typedef scalar_t__ IntNative ;
typedef int Char ;
typedef int Bool ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,struct MY_STAT*) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_1 ;

__attribute__((used)) static
Bool FUNC_2 ( Char* VAR_2 )
{
   IntNative VAR_3;
   struct MY_STAT VAR_4;

   VAR_3 = FUNC_0 ( VAR_2, &VAR_4 );
   if (VAR_3 != 0) return VAR_1;
   if (FUNC_1(VAR_4.st_mode)) return VAR_0;
   return VAR_1;
}
