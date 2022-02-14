
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int teken_rect_t ;
typedef int teken_char_t ;
typedef int teken_attr_t ;
struct terminal {TYPE_1__* tm_class; } ;
struct TYPE_2__ {int (* tc_fill ) (struct terminal*,int const*,int ) ;} ;


 int FUNC_0 (int ,int const*) ;
 int FUNC_1 (struct terminal*,int const*,int ) ;

__attribute__((used)) static void
FUNC_2(void *VAR_0, const teken_rect_t *VAR_1, teken_char_t VAR_2,
    const teken_attr_t *VAR_3)
{
 struct terminal *VAR_4 = VAR_0;

 VAR_4->tm_class->tc_fill(VAR_4, VAR_1, FUNC_0(VAR_2, VAR_3));
}
