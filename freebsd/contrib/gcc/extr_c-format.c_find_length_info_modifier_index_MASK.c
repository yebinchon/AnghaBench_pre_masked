
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ name; } ;
typedef TYPE_1__ format_length_info ;


 int FUNC_0 () ;
 scalar_t__ FUNC_1 (scalar_t__,int) ;

__attribute__((used)) static unsigned int
FUNC_2 (const format_length_info *VAR_0, int VAR_1)
{
  unsigned VAR_2;

  for (VAR_2 = 0; VAR_0->name; VAR_2++, VAR_0++)
    if (FUNC_1 (VAR_0->name, VAR_1))
      return VAR_2;


  FUNC_0 ();
}
