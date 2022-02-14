
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {double period; } ;
struct hist_entry {TYPE_1__ stat; } ;


 struct hist_entry* FUNC_0 (struct hist_entry*) ;
 int FUNC_1 (char*,size_t,char*,double,double) ;

__attribute__((used)) static int FUNC_2(struct hist_entry *VAR_0, char *VAR_1, size_t VAR_2)
{
 struct hist_entry *VAR_3 = FUNC_0(VAR_0);
 double VAR_4 = VAR_0->stat.period;
 double VAR_5 = VAR_3 ? VAR_3->stat.period : 0;

 if (!VAR_3)
  return -1;

 return FUNC_1(VAR_1, VAR_2, "%.0F / %.0F", VAR_4, VAR_5);
}
