
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct namecache {int dummy; } ;
struct namecache_ts {struct namecache nc_nc; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_1 (int ,int ) ;

__attribute__((used)) static struct namecache *
FUNC_2(int VAR_6, int VAR_7)
{
 struct namecache_ts *VAR_8;
 struct namecache *VAR_9;

 if (FUNC_0(VAR_7)) {
  if (VAR_6 <= VAR_0)
   VAR_8 = FUNC_1(VAR_5, VAR_1);
  else
   VAR_8 = FUNC_1(VAR_3, VAR_1);
  VAR_9 = &VAR_8->nc_nc;
 } else {
  if (VAR_6 <= VAR_0)
   VAR_9 = FUNC_1(VAR_4, VAR_1);
  else
   VAR_9 = FUNC_1(VAR_2, VAR_1);
 }
 return (VAR_9);
}
