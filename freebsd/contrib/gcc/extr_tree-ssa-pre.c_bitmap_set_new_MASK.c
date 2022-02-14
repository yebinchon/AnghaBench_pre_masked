
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* bitmap_set_t ;
struct TYPE_3__ {void* values; void* expressions; } ;


 void* FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static bitmap_set_t
FUNC_2 (void)
{
  bitmap_set_t VAR_2 = (bitmap_set_t) FUNC_1 (VAR_0);
  VAR_2->expressions = FUNC_0 (&VAR_1);
  VAR_2->values = FUNC_0 (&VAR_1);
  return VAR_2;
}
