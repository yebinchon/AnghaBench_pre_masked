
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_17__ {int flags; void* value; TYPE_6__* section; void* name; TYPE_5__* the_bfd; } ;
struct TYPE_18__ {TYPE_3__ symbol; struct TYPE_18__* prev; } ;
typedef TYPE_4__ tekhex_symbol_type ;
typedef void* bfd_vma ;
typedef int bfd_size_type ;
typedef int bfd_boolean ;
struct TYPE_16__ {TYPE_1__* tekhex_data; } ;
struct TYPE_19__ {TYPE_2__ tdata; int flags; int symcount; } ;
typedef TYPE_5__ bfd ;
struct TYPE_20__ {void* vma; int flags; void* size; } ;
typedef TYPE_6__ asection ;
struct TYPE_15__ {TYPE_4__* symbols; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_6__* VAR_9 ;
 void* FUNC_1 (TYPE_5__*,int) ;
 TYPE_6__* FUNC_2 (TYPE_5__*,char*) ;
 TYPE_6__* FUNC_3 (TYPE_5__*,char*) ;
 int FUNC_4 (char*,char**,unsigned int*) ;
 int FUNC_5 (char**,void**) ;
 int FUNC_6 (TYPE_5__*,int ,void*) ;
 int FUNC_7 (char*,char*,unsigned int) ;

__attribute__((used)) static bfd_boolean
FUNC_8 (bfd *VAR_10, int VAR_11, char *VAR_12)
{
  asection *VAR_13 = VAR_9;
  unsigned int VAR_14;
  bfd_vma VAR_15;
  char VAR_16[17];

  switch (VAR_11)
    {
    case '6':

      {
 bfd_vma VAR_17;

 if (!FUNC_5 (&VAR_12, &VAR_17))
   return VAR_3;

 while (*VAR_12)
   {
     FUNC_6 (VAR_10, FUNC_0 (VAR_12), VAR_17);
     VAR_12 += 2;
     VAR_17++;
   }
      }

      return VAR_8;
    case '3':

      if (!FUNC_4 (VAR_16, &VAR_12, &VAR_14))
 return VAR_3;
      VAR_13 = FUNC_2 (VAR_10, VAR_16);
      if (VAR_13 == ((void*)0))
 {
   char *VAR_18 = FUNC_1 (VAR_10, (bfd_size_type) VAR_14 + 1);

   if (!VAR_18)
     return VAR_3;
   FUNC_7 (VAR_18, VAR_16, VAR_14 + 1);
   VAR_13 = FUNC_3 (VAR_10, VAR_18);
 }
      while (*VAR_12)
 {
   switch (*VAR_12)
     {
     case '1':
       VAR_12++;
       if (!FUNC_5 (&VAR_12, &VAR_13->vma))
  return VAR_3;
       if (!FUNC_5 (&VAR_12, &VAR_15))
  return VAR_3;
       VAR_13->size = VAR_15 - VAR_13->vma;
       VAR_13->flags = VAR_6 | VAR_7 | VAR_5;
       break;
     case '0':
     case '2':
     case '3':
     case '4':
     case '6':
     case '7':
     case '8':

       {
  bfd_size_type VAR_19 = sizeof (tekhex_symbol_type);
  tekhex_symbol_type *VAR_20 = FUNC_1 (VAR_10, VAR_19);
  char VAR_21 = (*VAR_12);

  if (!VAR_20)
    return VAR_3;
  VAR_20->symbol.the_bfd = VAR_10;
  VAR_12++;
  VAR_10->symcount++;
  VAR_10->flags |= VAR_4;
  VAR_20->prev = VAR_10->tdata.tekhex_data->symbols;
  VAR_10->tdata.tekhex_data->symbols = VAR_20;
  if (!FUNC_4 (VAR_16, &VAR_12, &VAR_14))
    return VAR_3;
  VAR_20->symbol.name = FUNC_1 (VAR_10, (bfd_size_type) VAR_14 + 1);
  if (!VAR_20->symbol.name)
    return VAR_3;
  FUNC_7 ((char *) (VAR_20->symbol.name), VAR_16, VAR_14 + 1);
  VAR_20->symbol.section = VAR_13;
  if (VAR_21 <= '4')
    VAR_20->symbol.flags = (VAR_1 | VAR_0);
  else
    VAR_20->symbol.flags = VAR_2;
  if (!FUNC_5 (&VAR_12, &VAR_15))
    return VAR_3;
  VAR_20->symbol.value = VAR_15 - VAR_13->vma;
  break;
       }
     default:
       return VAR_3;
     }
 }
    }

  return VAR_8;
}
