
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_12__ {char* string; } ;
struct TYPE_10__ {unsigned int value; TYPE_6__* section; } ;
struct TYPE_9__ {unsigned int size; TYPE_1__* p; } ;
struct TYPE_11__ {TYPE_3__ def; TYPE_2__ c; } ;
struct bfd_link_hash_entry {scalar_t__ type; TYPE_5__ root; TYPE_4__ u; } ;
typedef unsigned int bfd_vma ;
typedef scalar_t__ bfd_boolean ;
struct TYPE_13__ {unsigned int size; unsigned int alignment_power; char* owner; int flags; } ;
typedef TYPE_6__ asection ;
struct TYPE_14__ {int * map_file; scalar_t__ sort_common; } ;
struct TYPE_8__ {unsigned int alignment_power; TYPE_6__* section; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (int ,char*,int) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 TYPE_7__ VAR_7 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,...) ;
 unsigned int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (char*,char*,unsigned long) ;
 int FUNC_7 (char*,unsigned int) ;
 int FUNC_8 (char*) ;

__attribute__((used)) static bfd_boolean
FUNC_9 (struct bfd_link_hash_entry *VAR_10, void *VAR_11)
{
  unsigned int VAR_12;
  bfd_vma VAR_13;
  asection *VAR_14;

  if (VAR_10->type != VAR_5)
    return VAR_4;

  VAR_13 = VAR_10->u.c.size;
  VAR_12 = VAR_10->u.c.p->alignment_power;

  if (VAR_7.sort_common
      && VAR_12 < (unsigned int) *(int *) VAR_11)
    return VAR_4;

  VAR_14 = VAR_10->u.c.p->section;


  VAR_14->size += ((bfd_vma) 1 << (VAR_12 + VAR_8)) - 1;
  VAR_14->size &= (- (bfd_vma) 1 << (VAR_12 + VAR_8));


  if (VAR_12 > VAR_14->alignment_power)
    VAR_14->alignment_power = VAR_12;


  VAR_10->type = VAR_6;
  VAR_10->u.def.section = VAR_14;
  VAR_10->u.def.value = VAR_14->size;


  VAR_14->size += VAR_13;



  VAR_14->flags |= VAR_2;
  VAR_14->flags &= ~VAR_3;

  if (VAR_7.map_file != ((void*)0))
    {
      static bfd_boolean VAR_15;
      int VAR_16;
      char *VAR_17;
      char VAR_18[50];

      if (! VAR_15)
 {
   FUNC_3 (FUNC_0("\nAllocating common symbols\n"));
   FUNC_3 (FUNC_0("Common symbol       size              file\n\n"));
   VAR_15 = VAR_4;
 }

      VAR_17 = FUNC_1 (VAR_9, VAR_10->root.string,
      VAR_0 | VAR_1);
      if (VAR_17 == ((void*)0))
 {
   FUNC_3 ("%s", VAR_10->root.string);
   VAR_16 = FUNC_8 (VAR_10->root.string);
 }
      else
 {
   FUNC_3 ("%s", VAR_17);
   VAR_16 = FUNC_8 (VAR_17);
   FUNC_2 (VAR_17);
 }

      if (VAR_16 >= 19)
 {
   FUNC_4 ();
   VAR_16 = 0;
 }
      while (VAR_16 < 20)
 {
   FUNC_5 ();
   ++VAR_16;
 }

      FUNC_3 ("0x");
      if (VAR_13 <= 0xffffffff)
 FUNC_6 (VAR_18, "%lx", (unsigned long) VAR_13);
      else
 FUNC_7 (VAR_18, VAR_13);
      FUNC_3 ("%s", VAR_18);
      VAR_16 = FUNC_8 (VAR_18);

      while (VAR_16 < 16)
 {
   FUNC_5 ();
   ++VAR_16;
 }

      FUNC_3 ("%B\n", VAR_14->owner);
    }

  return VAR_4;
}
