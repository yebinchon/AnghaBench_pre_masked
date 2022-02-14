
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netmap_kring {int nr_hwtail; int rtail; int rcur; int rhead; int nr_hwcur; int name; } ;


 int FUNC_0 (char*,char const*,int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static inline void
FUNC_1(const char *VAR_0, const struct netmap_kring *VAR_1)
{
 FUNC_0("%s, kring %s, hwcur %d, rhead %d, "
  "rcur %d, rtail %d, hwtail %d",
  VAR_0, VAR_1->name, VAR_1->nr_hwcur, VAR_1->rhead,
  VAR_1->rcur, VAR_1->rtail, VAR_1->nr_hwtail);
}
