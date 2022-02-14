
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct perf_hpp {int size; int buf; } ;
struct TYPE_2__ {scalar_t__ field_sep; } ;


 int FUNC_0 (int ,int ,char const*,char*) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static int FUNC_1(struct perf_hpp *VAR_1)
{
 const char *VAR_2 = VAR_0.field_sep ? "%s" : "%70s";

 return FUNC_0(VAR_1->buf, VAR_1->size, VAR_2, "Formula");
}
