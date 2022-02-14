
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef scalar_t__ bfd_vma ;
struct TYPE_13__ {int name; struct TYPE_13__* next; } ;
typedef TYPE_1__ asection ;
struct TYPE_14__ {TYPE_1__* sections; } ;


 int FUNC_0 (char*) ;
 unsigned long VAR_0 ;
 int FUNC_1 () ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*,int ) ;
 int FUNC_4 (TYPE_2__*,unsigned long,unsigned long,unsigned long*) ;
 int FUNC_5 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_6 (TYPE_2__*,TYPE_1__*) ;
 scalar_t__ FUNC_7 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_8 (TYPE_2__*,TYPE_1__*,scalar_t__) ;
 unsigned long* VAR_3 ;
 unsigned long VAR_4 ;
 int VAR_5 ;
 TYPE_2__* VAR_6 ;
 int FUNC_9 (int ,char const* const) ;

void
FUNC_10 (void)
{
  bfd_vma VAR_7;
  asection *VAR_8;
  static const char *const VAR_9[] =
  {

    ".text", ".rdata", ".init", ".fini",

    ".data", ".lita", ".lit8", ".lit4", ".sdata", ".got",

    ".sbss", ".bss",
  };



  asection *VAR_10[((int) (sizeof (VAR_9) / sizeof (VAR_9[0])))];
  int VAR_11;

  VAR_7 = 0;
  for (VAR_11 = 0; VAR_11 < ((int) (sizeof (VAR_9) / sizeof (VAR_9[0]))); VAR_11++)
    VAR_10[VAR_11] = ((void*)0);

  for (VAR_8 = VAR_6->sections; VAR_8 != ((void*)0); VAR_8 = VAR_8->next)
    {
      for (VAR_11 = 0; VAR_11 < ((int) (sizeof (VAR_9) / sizeof (VAR_9[0]))); VAR_11++)
 if (!FUNC_9 (VAR_8->name, VAR_9[VAR_11]))
   {
     VAR_10[VAR_11] = VAR_8;
     FUNC_6 (VAR_6, VAR_8);
     break;
   }
      if (VAR_11 == ((int) (sizeof (VAR_9) / sizeof (VAR_9[0]))))
 {
   FUNC_8 (VAR_6, VAR_8, VAR_7);
   VAR_7 += FUNC_7 (VAR_6, VAR_8);
 }
    }
  for (VAR_11 = 0; VAR_11 < ((int) (sizeof (VAR_9) / sizeof (VAR_9[0]))); VAR_11++)
    if (VAR_10[VAR_11])
      {
 FUNC_8 (VAR_6, VAR_10[VAR_11], VAR_7);
 VAR_7 += FUNC_7 (VAR_6, VAR_10[VAR_11]);
      }
  for (VAR_11 = ((int) (sizeof (VAR_9) / sizeof (VAR_9[0]))) - 1; VAR_11 >= 0; VAR_11--)
    if (VAR_10[VAR_11])
      FUNC_5 (VAR_6, VAR_10[VAR_11]);


  {
    unsigned long VAR_12 = 0;
    unsigned long VAR_13 = 0;
    unsigned long *VAR_14 = ((void*)0);
    if (! FUNC_4 (VAR_6, VAR_12, VAR_13, VAR_14))
      FUNC_2 (FUNC_0("Can't set register masks"));
  }
}
