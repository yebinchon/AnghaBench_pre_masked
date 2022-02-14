
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct cie_info {int code_alignment; int z_augmentation; } ;
struct TYPE_6__ {int fr_fix; char* fr_literal; struct TYPE_6__* fr_next; } ;
typedef TYPE_2__ fragS ;
struct TYPE_7__ {int fx_where; scalar_t__ fx_size; struct TYPE_7__* fx_next; TYPE_2__* fx_frag; } ;
typedef TYPE_3__ fixS ;
struct TYPE_8__ {TYPE_1__* frchainP; } ;
struct TYPE_5__ {TYPE_3__* fix_root; TYPE_2__* frch_root; } ;


 int VAR_0 ;
 TYPE_4__* FUNC_0 (int ) ;
 char* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (char*,char*) ;

__attribute__((used)) static int
FUNC_3 (struct cie_info *VAR_1)
{
  fragS *VAR_2;
  fixS *VAR_3;
  int VAR_4;
  char VAR_5;
  char VAR_6[10];
  int VAR_7;
  int VAR_8 = 0;



  VAR_2 = FUNC_0 (VAR_0)->frchainP->frch_root;
  VAR_3 = FUNC_0 (VAR_0)->frchainP->fix_root;





  if (FUNC_2 (FUNC_1 (VAR_0), ".debug_frame") == 0)
    VAR_5 = (char)0xff;
  else
    VAR_5 = 0;

  VAR_4 = 4;
  while (VAR_2 != ((void*)0) && VAR_4 >= VAR_2->fr_fix)
    {
      VAR_4 -= VAR_2->fr_fix;
      VAR_2 = VAR_2->fr_next;
    }
  if (VAR_2 == ((void*)0)
      || VAR_2->fr_fix - VAR_4 < 4
      || VAR_2->fr_literal[VAR_4] != VAR_5
      || VAR_2->fr_literal[VAR_4 + 1] != VAR_5
      || VAR_2->fr_literal[VAR_4 + 2] != VAR_5
      || VAR_2->fr_literal[VAR_4 + 3] != VAR_5)
    return 0;



  VAR_4 += 4;
  while (VAR_2 != ((void*)0) && VAR_4 >= VAR_2->fr_fix)
    {
      VAR_4 -= VAR_2->fr_fix;
      VAR_2 = VAR_2->fr_next;
    }
  if (VAR_2 == ((void*)0)
      || VAR_2->fr_fix - VAR_4 < 1
      || VAR_2->fr_literal[VAR_4] != 1)
    return 0;



  VAR_7 = 0;
  ++VAR_4;
  while (1)
    {
      while (VAR_2 != ((void*)0) && VAR_4 >= VAR_2->fr_fix)
 {
   VAR_4 -= VAR_2->fr_fix;
   VAR_2 = VAR_2->fr_next;
 }
      if (VAR_2 == ((void*)0))
 return 0;

      while (VAR_4 < VAR_2->fr_fix && VAR_2->fr_literal[VAR_4] != '\0')
 {
   if ((size_t) VAR_7 < (sizeof VAR_6) - 1)
     {
       VAR_6[VAR_7] = VAR_2->fr_literal[VAR_4];
       ++VAR_7;
     }
   ++VAR_4;
 }
      if (VAR_4 < VAR_2->fr_fix)
 break;
    }
  ++VAR_4;
  while (VAR_2 != ((void*)0) && VAR_4 >= VAR_2->fr_fix)
    {
      VAR_4 -= VAR_2->fr_fix;
      VAR_2 = VAR_2->fr_next;
    }
  if (VAR_2 == ((void*)0))
    return 0;

  VAR_6[VAR_7] = '\0';
  if (VAR_6[0] == '\0')
    {

    }
  else if (FUNC_2 (VAR_6, "eh") == 0)
    {


      while (VAR_3 != ((void*)0)
      && (VAR_3->fx_frag != VAR_2 || VAR_3->fx_where != VAR_4))
 VAR_3 = VAR_3->fx_next;
      if (VAR_3 == ((void*)0))
 VAR_4 += 4;
      else
 VAR_4 += VAR_3->fx_size;
      while (VAR_2 != ((void*)0) && VAR_4 >= VAR_2->fr_fix)
 {
   VAR_4 -= VAR_2->fr_fix;
   VAR_2 = VAR_2->fr_next;
 }
      if (VAR_2 == ((void*)0))
 return 0;
    }
  else if (VAR_6[0] != 'z')
    return 0;




  VAR_8 = VAR_2->fr_literal[VAR_4] & 0xff;
  if ((VAR_8 & 0x80) != 0)
    VAR_8 = 0;

  VAR_1->code_alignment = VAR_8;
  VAR_1->z_augmentation = (VAR_6[0] == 'z');

  return 1;
}
