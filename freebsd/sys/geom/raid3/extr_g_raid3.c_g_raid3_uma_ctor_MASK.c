
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_raid3_zone {scalar_t__ sz_max; scalar_t__ sz_inuse; } ;


 int VAR_0 ;

__attribute__((used)) static int
FUNC_0(void *VAR_1, int VAR_2, void *VAR_3, int VAR_4)
{
 struct g_raid3_zone *VAR_5 = VAR_3;

 if (VAR_5->sz_max > 0 && VAR_5->sz_inuse == VAR_5->sz_max)
  return (VAR_0);
 VAR_5->sz_inuse++;
 return (0);
}
