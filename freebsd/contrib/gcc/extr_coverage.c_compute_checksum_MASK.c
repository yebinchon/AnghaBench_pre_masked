
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int line; int file; } ;
typedef TYPE_1__ expanded_location ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 unsigned int FUNC_3 (unsigned int,int ) ;
 int VAR_0 ;
 TYPE_1__ FUNC_4 (int ) ;

__attribute__((used)) static unsigned
FUNC_5 (void)
{
  expanded_location VAR_1
    = FUNC_4 (FUNC_1 (VAR_0));
  unsigned VAR_2 = VAR_1.line;

  VAR_2 = FUNC_3 (VAR_2, VAR_1.file);
  VAR_2 = FUNC_3
    (VAR_2, FUNC_2 (FUNC_0 (VAR_0)));

  return VAR_2;
}
