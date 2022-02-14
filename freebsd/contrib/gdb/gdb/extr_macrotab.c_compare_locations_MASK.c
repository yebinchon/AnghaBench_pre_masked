
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct macro_source_file {int included_at_line; struct macro_source_file* included_by; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct macro_source_file*) ;

__attribute__((used)) static int
FUNC_2 (struct macro_source_file *VAR_0, int VAR_1,
                   struct macro_source_file *VAR_2, int VAR_3)
{






  int VAR_4 = 0;
  int VAR_5 = 0;



  if (! VAR_0)
    {
      if (! VAR_2)
        return 0;
      else
        return 1;
    }
  else if (! VAR_2)
    return -1;



  if (VAR_0 != VAR_2)
    {




      int VAR_6 = FUNC_1 (VAR_0);
      int VAR_7 = FUNC_1 (VAR_2);



      while (VAR_6 > VAR_7)
        {
          VAR_1 = VAR_0->included_at_line;
          VAR_0 = VAR_0->included_by;
          VAR_4 = 1;
          VAR_6--;
        }
      while (VAR_7 > VAR_6)
        {
          VAR_3 = VAR_2->included_at_line;
          VAR_2 = VAR_2->included_by;
          VAR_5 = 1;
          VAR_7--;
        }



      while (VAR_0 != VAR_2)
        {
          VAR_1 = VAR_0->included_at_line;
          VAR_0 = VAR_0->included_by;



          VAR_4 = 1;

          VAR_3 = VAR_2->included_at_line;
          VAR_2 = VAR_2->included_by;
          VAR_5 = 1;




          FUNC_0 (VAR_0 && VAR_2);
        }
    }


  if (VAR_1 == VAR_3)
    {


      FUNC_0 (! VAR_4 || ! VAR_5);



      if (VAR_4)
        return 1;
      else if (VAR_5)
        return -1;
      else
        return 0;
    }
  else
    return VAR_1 - VAR_3;
}
