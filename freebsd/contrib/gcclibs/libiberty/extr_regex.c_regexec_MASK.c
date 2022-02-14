
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct re_registers {size_t num_regs; int * start; int * end; } ;
struct TYPE_6__ {int rm_eo; int rm_so; } ;
typedef TYPE_1__ regmatch_t ;
struct TYPE_7__ {int not_bol; int not_eol; int regs_allocated; int no_sub; } ;
typedef TYPE_2__ regex_t ;
typedef int boolean ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_0 (size_t,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*,char const*,int,int ,int,struct re_registers*) ;
 int VAR_5 ;
 int FUNC_3 (char const*) ;

int
FUNC_4 (const regex_t *VAR_6, const char *VAR_7, size_t VAR_8,
         regmatch_t VAR_9[], int VAR_10)
{
  int VAR_11;
  struct re_registers VAR_12;
  regex_t VAR_13;
  int VAR_14 = FUNC_3 (VAR_7);
  boolean VAR_15 = !VAR_6->no_sub && VAR_8 > 0;

  VAR_13 = *VAR_6;

  VAR_13.not_bol = !!(VAR_10 & VAR_3);
  VAR_13.not_eol = !!(VAR_10 & VAR_4);




  VAR_13.regs_allocated = VAR_0;

  if (VAR_15)
    {
      VAR_12.num_regs = VAR_8;
      VAR_12.start = FUNC_0 (VAR_8 * 2, VAR_5);
      if (VAR_12.start == ((void*)0))
        return (int) VAR_2;
      VAR_12.end = VAR_12.start + VAR_8;
    }


  VAR_11 = FUNC_2 (&VAR_13, VAR_7, VAR_14,
                                0, VAR_14,
                   VAR_15 ? &VAR_12 : (struct re_registers *) 0);


  if (VAR_15)
    {
      if (VAR_11 >= 0)
        {
          unsigned VAR_16;

          for (VAR_16 = 0; VAR_16 < VAR_8; VAR_16++)
            {
              VAR_9[VAR_16].rm_so = VAR_12.start[VAR_16];
              VAR_9[VAR_16].rm_eo = VAR_12.end[VAR_16];
            }
        }


      FUNC_1 (VAR_12.start);
    }


  return VAR_11 >= 0 ? (int) VAR_1 : (int) VAR_2;
}
