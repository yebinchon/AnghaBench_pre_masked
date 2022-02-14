
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uchar_t ;
struct TYPE_3__ {scalar_t__ st_shndx; scalar_t__ st_name; scalar_t__ st_value; int st_info; } ;
typedef TYPE_1__ GElf_Sym ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (char const*,char*) ;

int
FUNC_2(GElf_Sym *VAR_3, const char *VAR_4)
{
 uchar_t VAR_5 = FUNC_0(VAR_3->st_info);





 if (VAR_3->st_shndx == VAR_1 || VAR_3->st_name == 0)
  return (1);





 if (FUNC_1(VAR_4, "_START_") == 0 || FUNC_1(VAR_4, "_END_") == 0)
  return (1);






 if (VAR_5 == VAR_2 && VAR_3->st_shndx == VAR_0 &&
     VAR_3->st_value == 0)
  return (1);
 return (0);
}
