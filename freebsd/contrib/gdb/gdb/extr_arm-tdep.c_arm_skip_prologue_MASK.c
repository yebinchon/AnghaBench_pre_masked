
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symtab_and_line {scalar_t__ line; scalar_t__ end; } ;
struct symbol {int dummy; } ;
typedef scalar_t__ CORE_ADDR ;


 scalar_t__ FUNC_0 (scalar_t__,int ,int ) ;
 scalar_t__ FUNC_1 (struct symbol*) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 struct symtab_and_line FUNC_3 (scalar_t__,int ) ;
 scalar_t__ FUNC_4 (scalar_t__,char**,scalar_t__*,scalar_t__*) ;
 scalar_t__ VAR_1 ;
 struct symbol* FUNC_5 (char*,int *,int ,int *,int *) ;
 unsigned long FUNC_6 (scalar_t__,int) ;
 scalar_t__ FUNC_7 (scalar_t__,scalar_t__) ;

__attribute__((used)) static CORE_ADDR
FUNC_8 (CORE_ADDR VAR_2)
{
  unsigned long VAR_3;
  CORE_ADDR VAR_4;
  CORE_ADDR VAR_5, VAR_6 = 0;
  char *VAR_7;
  struct symtab_and_line VAR_8;


  if (FUNC_0 (VAR_2, 0, 0))
    return VAR_2;



  if (FUNC_4 (VAR_2, &VAR_7, &VAR_5, &VAR_6))
    {
      struct symbol *VAR_9;


      VAR_9 = FUNC_5 (VAR_7, ((void*)0), VAR_0, ((void*)0), ((void*)0));
      if (VAR_9 && FUNC_1 (VAR_9) != VAR_1)
        {

   VAR_8 = FUNC_3 (VAR_5, 0);
   if ((VAR_8.line != 0) && (VAR_8.end < VAR_6))
     return VAR_8.end;
        }
    }


  if (FUNC_2 (VAR_2))
    return FUNC_7 (VAR_2, VAR_6);





  if (VAR_6 == 0 || VAR_6 > VAR_2 + 64)
    VAR_6 = VAR_2 + 64;

  for (VAR_4 = VAR_2; VAR_4 < VAR_6; VAR_4 += 4)
    {
      VAR_3 = FUNC_6 (VAR_4, 4);


      if (VAR_3 == 0xe1a0c00d)
 continue;

      if ((VAR_3 & 0xfffff000) == 0xe28dc000)
 continue;

      if ((VAR_3 & 0xfffff000) == 0xe24dc000)
 continue;


      if (VAR_3 == 0xe52de004)
 continue;

      if ((VAR_3 & 0xfffffff0) == 0xe92d0000)
 continue;

      if ((VAR_3 & 0xfffff800) == 0xe92dd800)
 continue;
      if ((VAR_3 & 0xffbf0fff) == 0xec2d0200)
 continue;

      if ((VAR_3 & 0xffff8fff) == 0xed6d0103)
 continue;

      if ((VAR_3 & 0xfffff000) == 0xe24cb000)
 continue;

      if ((VAR_3 & 0xfffff000) == 0xe24dd000)
 continue;

      if ((VAR_3 & 0xffffc000) == 0xe54b0000 ||
   (VAR_3 & 0xffffc0f0) == 0xe14b00b0 ||
   (VAR_3 & 0xffffc000) == 0xe50b0000)
 continue;

      if ((VAR_3 & 0xffffc000) == 0xe5cd0000 ||
   (VAR_3 & 0xffffc0f0) == 0xe1cd00b0 ||
   (VAR_3 & 0xffffc000) == 0xe58d0000)
 continue;


      break;
    }

  return VAR_4;
}
