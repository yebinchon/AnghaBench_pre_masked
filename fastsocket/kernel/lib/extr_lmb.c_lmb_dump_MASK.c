
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lmb_region {int cnt; TYPE_1__* region; } ;
struct TYPE_2__ {unsigned long long base; unsigned long long size; } ;


 int FUNC_0 (char*,char*,int,...) ;

__attribute__((used)) static void FUNC_1(struct lmb_region *VAR_0, char *VAR_1)
{
 unsigned long long VAR_2, VAR_3;
 int VAR_4;

 FUNC_0(" %s.cnt  = 0x%lx\n", VAR_1, VAR_0->cnt);

 for (VAR_4 = 0; VAR_4 < VAR_0->cnt; VAR_4++) {
  VAR_2 = VAR_0->region[VAR_4].base;
  VAR_3 = VAR_0->region[VAR_4].size;

  FUNC_0(" %s[0x%x]\t0x%016llx - 0x%016llx, 0x%llx bytes\n",
      VAR_1, VAR_4, VAR_2, VAR_2 + VAR_3 - 1, VAR_3);
 }
}
