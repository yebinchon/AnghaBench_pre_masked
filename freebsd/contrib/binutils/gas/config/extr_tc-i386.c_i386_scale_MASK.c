
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int offsetT ;
struct TYPE_2__ {int log2_scale_factor; scalar_t__ index_reg; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 () ;
 TYPE_1__ VAR_0 ;
 char* VAR_1 ;

__attribute__((used)) static char *
FUNC_4 (char *VAR_2)
{
  offsetT VAR_3;
  char *VAR_4 = VAR_1;

  VAR_1 = VAR_2;
  VAR_3 = FUNC_3 ();

  switch (VAR_3)
    {
    case 1:
      VAR_0.log2_scale_factor = 0;
      break;
    case 2:
      VAR_0.log2_scale_factor = 1;
      break;
    case 4:
      VAR_0.log2_scale_factor = 2;
      break;
    case 8:
      VAR_0.log2_scale_factor = 3;
      break;
    default:
      {
 char VAR_5 = *VAR_1;

 *VAR_1 = '\0';
 FUNC_1 (FUNC_0("expecting scale factor of 1, 2, 4, or 8: got `%s'"),
  VAR_2);
 *VAR_1 = VAR_5;
 VAR_1 = VAR_4;
 return ((void*)0);
      }
    }
  if (VAR_0.log2_scale_factor != 0 && VAR_0.index_reg == 0)
    {
      FUNC_2 (FUNC_0("scale factor of %d without an index register"),
        1 << VAR_0.log2_scale_factor);



    }
  VAR_2 = VAR_1;
  VAR_1 = VAR_4;
  return VAR_2;
}
