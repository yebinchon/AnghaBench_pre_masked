
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ mode; int error; scalar_t__ buffer; scalar_t__ alloc; scalar_t__ length; scalar_t__ file; scalar_t__ offset; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 TYPE_1__ VAR_0 ;
 int FUNC_2 (scalar_t__) ;

int
FUNC_3 (void)
{
  if (VAR_0.file)
    {

      if (VAR_0.offset && VAR_0.mode < 0)
 FUNC_2 (VAR_0.offset);

      FUNC_0 (VAR_0.file);
      VAR_0.file = 0;
      VAR_0.length = 0;
    }

  FUNC_1 (VAR_0.buffer);
  VAR_0.alloc = 0;
  VAR_0.buffer = 0;

  VAR_0.mode = 0;
  return VAR_0.error;
}
