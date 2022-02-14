
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ bfd_vma ;
typedef int bfd_size_type ;
struct TYPE_10__ {scalar_t__ size; int name; struct TYPE_10__* next; } ;
typedef TYPE_1__ asection ;
struct TYPE_11__ {TYPE_1__* sections; } ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (TYPE_4__*) ;
 scalar_t__ FUNC_4 (TYPE_4__*,TYPE_1__*) ;
 int FUNC_5 (int ,int ,scalar_t__,scalar_t__,int ,scalar_t__,scalar_t__) ;
 int FUNC_6 (TYPE_1__**) ;
 TYPE_4__* VAR_0 ;
 int FUNC_7 (TYPE_1__**,size_t,int,int ) ;
 int VAR_1 ;
 TYPE_1__** FUNC_8 (int) ;

__attribute__((used)) static void
FUNC_9 (void)
{
  asection *VAR_2, *VAR_3;
  asection **VAR_4, **VAR_5;
  unsigned int VAR_6;
  bfd_vma VAR_7;
  bfd_vma VAR_8;
  bfd_vma VAR_9;
  bfd_vma VAR_10;
  bfd_size_type VAR_11;

  if (FUNC_3 (VAR_0) <= 1)
    return;

  VAR_11 = FUNC_3 (VAR_0) * sizeof (asection *);
  VAR_4 = FUNC_8 (VAR_11);


  VAR_6 = 0;
  for (VAR_2 = VAR_0->sections; VAR_2 != ((void*)0); VAR_2 = VAR_2->next)
    {

      if (FUNC_0 (VAR_2) || VAR_2->size == 0)
 continue;

      VAR_4[VAR_6] = VAR_2;
      VAR_6++;
    }

  if (VAR_6 <= 1)
    return;

  FUNC_7 (VAR_4, (size_t) VAR_6, sizeof (asection *),
  VAR_1);

  VAR_5 = VAR_4;
  VAR_2 = *VAR_5++;
  VAR_7 = FUNC_4 (VAR_0, VAR_2);
  VAR_8 = VAR_7 + FUNC_1 (VAR_2->size) - 1;
  for (VAR_6--; VAR_6; VAR_6--)
    {



      VAR_3 = VAR_2;
      VAR_9 = VAR_7;
      VAR_10 = VAR_8;
      VAR_2 = *VAR_5++;
      VAR_7 = FUNC_4 (VAR_0, VAR_2);
      VAR_8 = VAR_7 + FUNC_1 (VAR_2->size) - 1;


      if (VAR_8 >= VAR_9 && VAR_7 <= VAR_10)
 FUNC_5 (FUNC_2("%X%P: section %s [%V -> %V] overlaps section %s [%V -> %V]\n"),
        VAR_2->name, VAR_7, VAR_8, VAR_3->name, VAR_9, VAR_10);
    }

  FUNC_6 (VAR_4);
}
