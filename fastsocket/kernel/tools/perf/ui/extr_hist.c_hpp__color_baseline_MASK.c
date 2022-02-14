
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_hpp {int size; int buf; } ;
struct hist_entry {int dummy; } ;


 double FUNC_0 (struct hist_entry*) ;
 scalar_t__ FUNC_1 (struct hist_entry*) ;
 int FUNC_2 (int ,int ,char*,double) ;
 int FUNC_3 (int ,int ,char*) ;

__attribute__((used)) static int FUNC_4(struct perf_hpp *VAR_0, struct hist_entry *VAR_1)
{
 double VAR_2 = FUNC_0(VAR_1);

 if (FUNC_1(VAR_1))
  return FUNC_2(VAR_0->buf, VAR_0->size, " %6.2f%%", VAR_2);
 else
  return FUNC_3(VAR_0->buf, VAR_0->size, "        ");
}
