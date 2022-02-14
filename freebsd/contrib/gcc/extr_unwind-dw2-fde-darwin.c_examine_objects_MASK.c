
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int encoding; scalar_t__ mixed_encoding; } ;
struct TYPE_10__ {TYPE_2__ b; scalar_t__ i; } ;
struct TYPE_8__ {struct dwarf_fde* single; } ;
struct object {char* fde_end; TYPE_3__ s; scalar_t__ dbase; scalar_t__ tbase; struct object* next; void* pc_begin; TYPE_1__ u; } ;
struct mach_header_64 {int dummy; } ;
struct live_images {int examined_p; int vm_slide; char* fde; struct object* object_info; int destructor; scalar_t__ mh; struct live_images* next; } ;
struct dwarf_fde {int dummy; } ;
struct dwarf_eh_bases {void* func; scalar_t__ dbase; scalar_t__ tbase; } ;
struct TYPE_11__ {int pc_begin; } ;
typedef TYPE_4__ fde ;
typedef scalar_t__ _Unwind_Ptr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct live_images* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,struct object*) ;
 struct object* FUNC_3 (int,int) ;
 int FUNC_4 (TYPE_4__ const*) ;
 char* FUNC_5 (scalar_t__,char*,char*,unsigned long*) ;
 char* FUNC_6 (struct mach_header_64*,char*,char*,unsigned long*) ;
 int VAR_5 ;
 int FUNC_7 (int,int ,int ,scalar_t__*) ;
 TYPE_4__* FUNC_8 (struct object*,void*) ;
 struct object* VAR_6 ;

__attribute__((used)) static inline const fde *
FUNC_9 (void *VAR_7, struct dwarf_eh_bases *VAR_8, int VAR_9)
{
  const fde *VAR_10 = ((void*)0);
  struct live_images *VAR_11;

  VAR_11 = FUNC_0 (VAR_4);

  for (; VAR_11 != ((void*)0); VAR_11 = VAR_11->next)
    if ((VAR_11->examined_p & VAR_2) == 0)
      {
 char *VAR_12 = ((void*)0);
 unsigned long VAR_13;






 if (VAR_12 == ((void*)0))
   {

     VAR_12 = FUNC_6 ((struct mach_header_64 *) VAR_11->mh,
         "__TEXT", "__eh_frame", &VAR_13);




     if (VAR_12 != ((void*)0))
       VAR_11->examined_p |= VAR_3;
   }


 if (VAR_12 != ((void*)0) && VAR_13 > 0)
   {
     char *VAR_14 = (VAR_12 + VAR_11->vm_slide);
     struct object *VAR_15 = ((void*)0);
     struct object VAR_16;

     if (! VAR_9)
       VAR_15 = FUNC_3 (1, sizeof (struct object));
     VAR_9 |= VAR_15 == ((void*)0);
     if (VAR_9)
       VAR_15 = &VAR_16;

     VAR_15->pc_begin = (void *)-1;
     VAR_15->tbase = 0;
     VAR_15->dbase = 0;
     VAR_15->u.single = (struct dwarf_fde *)VAR_14;
     VAR_15->s.i = 0;
     VAR_15->s.b.encoding = VAR_1;
     VAR_15->fde_end = VAR_14 + VAR_13;

     VAR_11->fde = VAR_14;

     VAR_10 = FUNC_8 (VAR_15, VAR_7);

     if (! VAR_9)
       {
  struct object **VAR_17;

  VAR_11->destructor = VAR_5;
  VAR_11->object_info = VAR_15;

  VAR_11->examined_p |= (VAR_2
          | VAR_0);


  for (VAR_17 = &VAR_6; *VAR_17 ; VAR_17 = &(*VAR_17)->next)
    if ((*VAR_17)->pc_begin < VAR_15->pc_begin)
      break;
  VAR_15->next = *VAR_17;
  *VAR_17 = VAR_15;
       }

     if (VAR_10)
       {
  int VAR_18;
  _Unwind_Ptr VAR_19;

  VAR_8->tbase = VAR_15->tbase;
  VAR_8->dbase = VAR_15->dbase;

  VAR_18 = VAR_15->s.b.encoding;
  if (VAR_15->s.b.mixed_encoding)
    VAR_18 = FUNC_4 (VAR_10);
  FUNC_7 (VAR_18,
           FUNC_2 (VAR_18, VAR_15),
           VAR_10->pc_begin, &VAR_19);
  VAR_8->func = (void *) VAR_19;
  break;
       }
   }
 else
   VAR_11->examined_p |= VAR_2;
      }

  FUNC_1 (VAR_4);

  return VAR_10;
}
