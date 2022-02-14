
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct perf_hpp {int size; int buf; } ;
struct hist_entry {int dummy; } ;
struct TYPE_2__ {scalar_t__ field_sep; } ;


 double FUNC_0 (struct hist_entry*) ;
 scalar_t__ FUNC_1 (struct hist_entry*) ;
 int FUNC_2 (int ,int ,char const*,...) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static int FUNC_3(struct perf_hpp *VAR_1, struct hist_entry *VAR_2)
{
 double VAR_3 = FUNC_0(VAR_2);
 const char *VAR_4 = VAR_0.field_sep ? "%.2f" : " %6.2f%%";

 if (FUNC_1(VAR_2) || VAR_0.field_sep)
  return FUNC_2(VAR_1->buf, VAR_1->size, VAR_4, VAR_3);
 else
  return FUNC_2(VAR_1->buf, VAR_1->size, "            ");
}
