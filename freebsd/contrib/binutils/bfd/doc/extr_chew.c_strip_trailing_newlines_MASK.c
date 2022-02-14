
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ write_idx; } ;


 char FUNC_0 (TYPE_1__*,scalar_t__) ;
 scalar_t__ FUNC_1 (unsigned char) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static void
FUNC_2 ()
{
  while ((FUNC_1 ((unsigned char) FUNC_0 (VAR_1, VAR_1->write_idx - 1))
   || FUNC_0 (VAR_1, VAR_1->write_idx - 1) == '\n')
  && VAR_1->write_idx > 0)
    VAR_1->write_idx--;
  VAR_0++;
}
