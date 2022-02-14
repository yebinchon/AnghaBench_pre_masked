
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hist_entry {TYPE_1__* thread; } ;
typedef int int64_t ;
struct TYPE_2__ {char* comm; } ;


 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*,char*) ;

__attribute__((used)) static int64_t
FUNC_2(struct hist_entry *VAR_0, struct hist_entry *VAR_1)
{
 char *VAR_2 = VAR_0->thread->comm;
 char *VAR_3 = VAR_1->thread->comm;

 if (!VAR_2 || !VAR_3)
  return FUNC_0(VAR_2, VAR_3);

 return FUNC_1(VAR_2, VAR_3);
}
