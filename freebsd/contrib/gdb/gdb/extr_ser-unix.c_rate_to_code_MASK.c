
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int rate; int code; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (char*,int,int,...) ;

__attribute__((used)) static int
FUNC_1 (int VAR_1)
{
  int VAR_2;

  for (VAR_2 = 0; VAR_0[VAR_2].rate != -1; VAR_2++)
    {

      if (VAR_1 == VAR_0[VAR_2].rate)
        return VAR_0[VAR_2].code;
      else
        {

          if (VAR_1 < VAR_0[VAR_2].rate)
     {
       if (VAR_2)
         {
           FUNC_0 ("Invalid baud rate %d.  Closest values are %d and %d.",
                     VAR_1, VAR_0[VAR_2 - 1].rate, VAR_0[VAR_2].rate);
  }
       else
         {
           FUNC_0 ("Invalid baud rate %d.  Minimum value is %d.",
                     VAR_1, VAR_0[0].rate);
  }
       return -1;
     }
        }
    }


  FUNC_0 ("Invalid baud rate %d.  Maximum value is %d.",
            VAR_1, VAR_0[VAR_2 - 1].rate);
  return -1;
}
