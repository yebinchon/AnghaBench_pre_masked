
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct perf_hpp {int size; int buf; } ;
struct TYPE_3__ {double period_ratio_delta; scalar_t__ computed; } ;
struct hist_entry {TYPE_1__ diff; } ;
typedef int buf ;
struct TYPE_4__ {scalar_t__ field_sep; } ;


 double FUNC_0 (double) ;
 double FUNC_1 (struct hist_entry*) ;
 int FUNC_2 (char*,int,char const*,...) ;
 TYPE_2__ VAR_0 ;

__attribute__((used)) static int FUNC_3(struct perf_hpp *VAR_1, struct hist_entry *VAR_2)
{
 const char *VAR_3 = VAR_0.field_sep ? "%s" : "%7.7s";
 char VAR_4[32] = " ";
 double VAR_5;

 if (VAR_2->diff.computed)
  VAR_5 = VAR_2->diff.period_ratio_delta;
 else
  VAR_5 = FUNC_1(VAR_2);

 if (FUNC_0(VAR_5) >= 0.01)
  FUNC_2(VAR_4, sizeof(VAR_4), "%+4.2F%%", VAR_5);

 return FUNC_2(VAR_1->buf, VAR_1->size, VAR_3, VAR_4);
}
