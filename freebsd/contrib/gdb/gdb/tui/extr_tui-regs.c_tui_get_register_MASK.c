
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tui_data_element {scalar_t__ value; } ;
struct gdbarch {int dummy; } ;
struct frame_info {int dummy; } ;
typedef enum tui_status { ____Placeholder_tui_status } tui_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct frame_info*,int,char*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct gdbarch*,int) ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (struct gdbarch*,struct frame_info*,struct tui_data_element*,int) ;

__attribute__((used)) static enum tui_status
FUNC_4 (struct gdbarch *VAR_6, struct frame_info *VAR_7,
                  struct tui_data_element *VAR_8, int VAR_9, int *VAR_10)
{
  enum tui_status VAR_11 = VAR_3;

  if (VAR_10)
    *VAR_10 = VAR_0;
  if (VAR_5)
    {
      char VAR_12[VAR_1];

      FUNC_0 (VAR_7, VAR_9, VAR_12);



      if (FUNC_1 (VAR_9) >= 0)
        {
          if (VAR_10)
            {
              int VAR_13 = FUNC_2 (VAR_6, VAR_9);
              char *VAR_14 = (char*) VAR_8->value;
              int VAR_15;

              for (VAR_15 = 0; VAR_15 < VAR_13; VAR_15++)
                if (VAR_12[VAR_15] != VAR_14[VAR_15])
                  {
                    *VAR_10 = VAR_2;
                    VAR_14[VAR_15] = VAR_12[VAR_15];
                  }
            }


          if (VAR_10 == 0 || *VAR_10 == VAR_2)
            FUNC_3 (VAR_6, VAR_7, VAR_8, VAR_9);
          VAR_11 = VAR_4;
        }
    }
  return VAR_11;
}
