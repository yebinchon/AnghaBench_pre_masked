
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int teken_pos_t ;
struct terminal {TYPE_1__* tm_class; } ;
struct TYPE_2__ {int (* tc_cursor ) (struct terminal*,int const*) ;} ;


 int FUNC_0 (struct terminal*,int const*) ;

__attribute__((used)) static void
FUNC_1(void *VAR_0, const teken_pos_t *VAR_1)
{
 struct terminal *VAR_2 = VAR_0;

 VAR_2->tm_class->tc_cursor(VAR_2, VAR_1);
}
