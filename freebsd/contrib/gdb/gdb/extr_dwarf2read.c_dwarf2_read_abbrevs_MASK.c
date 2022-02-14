
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comp_unit_head {int abbrev_offset; struct abbrev_info** dwarf2_abbrevs; } ;
struct dwarf2_cu {struct comp_unit_head header; } ;
struct attr_abbrev {unsigned int name; unsigned int form; } ;
struct abbrev_info {unsigned int number; int num_attrs; struct abbrev_info* next; struct attr_abbrev* attrs; int has_children; void* tag; } ;
typedef int bfd ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (unsigned int,struct dwarf2_cu*) ;
 char* VAR_2 ;
 unsigned int VAR_3 ;
 struct abbrev_info* FUNC_1 () ;
 int FUNC_2 (struct abbrev_info**,int ,int) ;
 int FUNC_3 (int *,char*) ;
 void* FUNC_4 (int *,char*,unsigned int*) ;
 scalar_t__ FUNC_5 (struct attr_abbrev*,int) ;

__attribute__((used)) static void
FUNC_6 (bfd *VAR_4, struct dwarf2_cu *VAR_5)
{
  struct comp_unit_head *VAR_6 = &VAR_5->header;
  char *VAR_7;
  struct abbrev_info *VAR_8;
  unsigned int VAR_9, VAR_10, VAR_11;
  unsigned int VAR_12, VAR_13;


  FUNC_2 (VAR_6->dwarf2_abbrevs, 0,
          VAR_0*sizeof (struct abbrev_info *));

  VAR_7 = VAR_2 + VAR_6->abbrev_offset;
  VAR_9 = FUNC_4 (VAR_4, VAR_7, &VAR_10);
  VAR_7 += VAR_10;


  while (VAR_9)
    {
      VAR_8 = FUNC_1 ();


      VAR_8->number = VAR_9;
      VAR_8->tag = FUNC_4 (VAR_4, VAR_7, &VAR_10);
      VAR_7 += VAR_10;
      VAR_8->has_children = FUNC_3 (VAR_4, VAR_7);
      VAR_7 += 1;


      VAR_11 = FUNC_4 (VAR_4, VAR_7, &VAR_10);
      VAR_7 += VAR_10;
      VAR_12 = FUNC_4 (VAR_4, VAR_7, &VAR_10);
      VAR_7 += VAR_10;
      while (VAR_11)
 {
   if ((VAR_8->num_attrs % VAR_1) == 0)
     {
       VAR_8->attrs = (struct attr_abbrev *)
  FUNC_5 (VAR_8->attrs,
     (VAR_8->num_attrs + VAR_1)
     * sizeof (struct attr_abbrev));
     }
   VAR_8->attrs[VAR_8->num_attrs].name = VAR_11;
   VAR_8->attrs[VAR_8->num_attrs++].form = VAR_12;
   VAR_11 = FUNC_4 (VAR_4, VAR_7, &VAR_10);
   VAR_7 += VAR_10;
   VAR_12 = FUNC_4 (VAR_4, VAR_7, &VAR_10);
   VAR_7 += VAR_10;
 }

      VAR_13 = VAR_9 % VAR_0;
      VAR_8->next = VAR_6->dwarf2_abbrevs[VAR_13];
      VAR_6->dwarf2_abbrevs[VAR_13] = VAR_8;
      if ((unsigned int) (VAR_7 - VAR_2)
   >= VAR_3)
 break;
      VAR_9 = FUNC_4 (VAR_4, VAR_7, &VAR_10);
      VAR_7 += VAR_10;
      if (FUNC_0 (VAR_9, VAR_5) != ((void*)0))
 break;
    }
}
