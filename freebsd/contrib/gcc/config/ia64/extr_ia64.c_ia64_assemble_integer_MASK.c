
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;


 unsigned int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ,unsigned int,int) ;
 int FUNC_3 (char const* const,int ) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static bool
FUNC_5 (rtx VAR_6, unsigned int VAR_7, int VAR_8)
{
  if (VAR_7 == VAR_1 / VAR_0
      && !(VAR_4 || VAR_3)
      && FUNC_0 (VAR_6) == VAR_2
      && FUNC_1 (VAR_6))
    {
      static const char * const VAR_9[2][2] = {

 { "\tdata8.ua\t@fptr(", "\tdata4.ua\t@fptr("},
 { "\tdata8\t@fptr(", "\tdata4\t@fptr("}
      };
      FUNC_3 (VAR_9[(VAR_8 != 0)][VAR_1 == 32], VAR_5);
      FUNC_4 (VAR_5, VAR_6);
      FUNC_3 (")\n", VAR_5);
      return 1;
    }
  return FUNC_2 (VAR_6, VAR_7, VAR_8);
}
