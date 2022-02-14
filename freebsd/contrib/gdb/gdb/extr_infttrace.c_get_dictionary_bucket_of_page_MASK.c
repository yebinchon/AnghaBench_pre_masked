
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int page_size; } ;
typedef int CORE_ADDR ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static int
FUNC_0 (CORE_ADDR VAR_2)
{
  int VAR_3;

  VAR_3 = (VAR_2 / VAR_1.page_size);
  VAR_3 = VAR_3 % VAR_0;

  return VAR_3;
}
