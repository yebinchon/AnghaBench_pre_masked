
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct perf_hpp {int size; int buf; } ;
struct hist_entry {int dummy; } ;
typedef int buf ;
struct TYPE_2__ {scalar_t__ field_sep; } ;


 int FUNC_0 (char*,int,struct hist_entry*) ;
 int FUNC_1 (int ,int ,char const*,char*) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static int FUNC_2(struct perf_hpp *VAR_1, struct hist_entry *VAR_2)
{
 const char *VAR_3 = VAR_0.field_sep ? "%s" : "%-70s";
 char VAR_4[96] = " ";

 FUNC_0(VAR_4, sizeof(VAR_4), VAR_2);
 return FUNC_1(VAR_1->buf, VAR_1->size, VAR_3, VAR_4);
}
