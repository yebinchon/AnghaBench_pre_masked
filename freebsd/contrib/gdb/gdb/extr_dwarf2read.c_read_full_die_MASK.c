
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dwarf2_cu {int dummy; } ;
struct die_info {unsigned int abbrev; unsigned int offset; int num_attrs; struct attribute* attrs; int * type; scalar_t__ tag; } ;
struct attribute {int dummy; } ;
struct abbrev_info {int num_attrs; int has_children; int * attrs; scalar_t__ tag; } ;
typedef int bfd ;


 char* FUNC_0 (int *) ;
 struct abbrev_info* FUNC_1 (unsigned int,struct dwarf2_cu*) ;
 struct die_info* FUNC_2 () ;
 char* VAR_0 ;
 int FUNC_3 (char*,unsigned int,char*) ;
 char* FUNC_4 (struct attribute*,int *,int *,char*,struct dwarf2_cu*) ;
 unsigned int FUNC_5 (int *,char*,unsigned int*) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static char *
FUNC_7 (struct die_info **VAR_1, bfd *VAR_2, char *VAR_3,
        struct dwarf2_cu *VAR_4, int *VAR_5)
{
  unsigned int VAR_6, VAR_7, VAR_8, VAR_9;
  struct abbrev_info *VAR_10;
  struct die_info *VAR_11;

  VAR_9 = VAR_3 - VAR_0;
  VAR_6 = FUNC_5 (VAR_2, VAR_3, &VAR_7);
  VAR_3 += VAR_7;
  if (!VAR_6)
    {
      VAR_11 = FUNC_2 ();
      VAR_11->tag = 0;
      VAR_11->abbrev = VAR_6;
      VAR_11->type = ((void*)0);
      *VAR_1 = VAR_11;
      *VAR_5 = 0;
      return VAR_3;
    }

  VAR_10 = FUNC_1 (VAR_6, VAR_4);
  if (!VAR_10)
    {
      FUNC_3 ("Dwarf Error: could not find abbrev number %d [in module %s]",
      VAR_6,
      FUNC_0 (VAR_2));
    }
  VAR_11 = FUNC_2 ();
  VAR_11->offset = VAR_9;
  VAR_11->tag = VAR_10->tag;
  VAR_11->abbrev = VAR_6;
  VAR_11->type = ((void*)0);

  VAR_11->num_attrs = VAR_10->num_attrs;
  VAR_11->attrs = (struct attribute *)
    FUNC_6 (VAR_11->num_attrs * sizeof (struct attribute));

  for (VAR_8 = 0; VAR_8 < VAR_10->num_attrs; ++VAR_8)
    {
      VAR_3 = FUNC_4 (&VAR_11->attrs[VAR_8], &VAR_10->attrs[VAR_8],
     VAR_2, VAR_3, VAR_4);
    }

  *VAR_1 = VAR_11;
  *VAR_5 = VAR_10->has_children;
  return VAR_3;
}
