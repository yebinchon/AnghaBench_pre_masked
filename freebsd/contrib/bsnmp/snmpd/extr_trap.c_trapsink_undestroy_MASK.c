
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trapsink_dep {int rb_status; } ;
struct trapsink {int status; } ;


 int VAR_0 ;

__attribute__((used)) static int
FUNC_0(struct trapsink *VAR_1, struct trapsink_dep *VAR_2)
{
 VAR_1->status = VAR_2->rb_status;
 return (VAR_0);
}
