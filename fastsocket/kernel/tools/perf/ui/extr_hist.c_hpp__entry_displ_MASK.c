
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct perf_hpp {int size; int buf; } ;
struct hist_entry {long position; } ;
typedef int buf ;
struct TYPE_2__ {scalar_t__ field_sep; } ;


 struct hist_entry* FUNC_0 (struct hist_entry*) ;
 int FUNC_1 (char*,int,char const*,...) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static int FUNC_2(struct perf_hpp *VAR_1,
       struct hist_entry *VAR_2)
{
 struct hist_entry *VAR_3 = FUNC_0(VAR_2);
 long VAR_4 = VAR_3 ? VAR_3->position - VAR_2->position : 0;
 const char *VAR_5 = VAR_0.field_sep ? "%s" : "%6.6s";
 char VAR_6[32] = " ";

 if (VAR_4)
  FUNC_1(VAR_6, sizeof(VAR_6), "%+4ld", VAR_4);

 return FUNC_1(VAR_1->buf, VAR_1->size, VAR_5, VAR_6);
}
