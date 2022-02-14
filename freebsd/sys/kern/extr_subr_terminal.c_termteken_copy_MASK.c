
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int teken_rect_t ;
typedef int teken_pos_t ;
struct terminal {TYPE_1__* tm_class; } ;
struct TYPE_2__ {int (* tc_copy ) (struct terminal*,int const*,int const*) ;} ;


 int FUNC_0 (struct terminal*,int const*,int const*) ;

__attribute__((used)) static void
FUNC_1(void *VAR_0, const teken_rect_t *VAR_1, const teken_pos_t *VAR_2)
{
 struct terminal *VAR_3 = VAR_0;

 VAR_3->tm_class->tc_copy(VAR_3, VAR_1, VAR_2);
}
