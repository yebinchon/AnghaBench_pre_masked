
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int st_info; size_t st_shndx; } ;
typedef TYPE_1__ GElf_Sym ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 char FUNC_0 (unsigned char) ;

__attribute__((used)) static char
FUNC_1(const GElf_Sym *VAR_6, const char *VAR_7)
{
 bool VAR_8;

 if (VAR_6 == ((void*)0) || VAR_7 == ((void*)0))
  return ('?');

 VAR_8 = VAR_6->st_info >> 4 == VAR_3;

 if (VAR_6->st_shndx == VAR_0)
  return (VAR_8 ? 'a' : 'A');

 if (VAR_6->st_shndx == VAR_1)
  return ('C');

 if ((VAR_6->st_info) >> 4 == VAR_4) {
  if ((VAR_6->st_info & 0xf) == VAR_5)
   return (VAR_6->st_shndx == VAR_2 ? 'v' : 'V');

  return (VAR_6->st_shndx == VAR_2 ? 'w' : 'W');
 }

 if (VAR_6->st_shndx == VAR_2)
  return ('U');

 return (VAR_8 == 1 && VAR_7[VAR_6->st_shndx] != 'N' ?
     FUNC_0((unsigned char) VAR_7[VAR_6->st_shndx]) :
     VAR_7[VAR_6->st_shndx]);
}
