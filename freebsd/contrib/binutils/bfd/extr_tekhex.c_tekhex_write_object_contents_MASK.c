
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct data_struct {int * chunk_data; scalar_t__ vma; scalar_t__* chunk_init; struct data_struct* next; } ;
typedef int bfd_size_type ;
typedef int bfd_boolean ;
struct TYPE_12__ {TYPE_1__* tekhex_data; } ;
struct TYPE_14__ {TYPE_5__** outsymbols; TYPE_6__* sections; TYPE_2__ tdata; } ;
typedef TYPE_4__ bfd ;
struct TYPE_15__ {TYPE_3__* section; scalar_t__ value; int name; } ;
typedef TYPE_5__ asymbol ;
struct TYPE_16__ {scalar_t__ size; scalar_t__ vma; int name; struct TYPE_16__* next; } ;
typedef TYPE_6__ asection ;
struct TYPE_13__ {scalar_t__ vma; int name; } ;
struct TYPE_11__ {struct data_struct* data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ) ;
 int VAR_2 ;
 int FUNC_1 () ;
 int FUNC_2 (char*,int ,TYPE_4__*) ;
 int FUNC_3 (TYPE_5__*) ;
 int VAR_3 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_4__*,char,char*,char*) ;
 int FUNC_6 () ;
 int FUNC_7 (char**,int ) ;
 int FUNC_8 (char**,scalar_t__) ;

__attribute__((used)) static bfd_boolean
FUNC_9 (bfd *VAR_4)
{
  char VAR_5[100];
  asymbol **VAR_6;
  asection *VAR_7;
  struct data_struct *VAR_8;

  FUNC_6 ();


  for (VAR_8 = VAR_4->tdata.tekhex_data->data;
       VAR_8 != ((void*)0);
       VAR_8 = VAR_8->next)
    {
      int VAR_9;

      const int VAR_10 = 32;
      int VAR_11;


      for (VAR_11 = 0; VAR_11 < VAR_0 + 1; VAR_11 += VAR_10)
 {
   int VAR_12 = 0;


   for (VAR_9 = 0; !VAR_12 && VAR_9 < VAR_10; VAR_9++)
     if (VAR_8->chunk_init[VAR_11 + VAR_9])
       VAR_12 = 1;

   if (VAR_12)
     {
       char *VAR_13 = VAR_5;

       FUNC_8 (&VAR_13, VAR_11 + VAR_8->vma);
       for (VAR_9 = 0; VAR_9 < VAR_10; VAR_9++)
  {
    FUNC_0 (VAR_13, VAR_8->chunk_data[VAR_11 + VAR_9]);
    VAR_13 += 2;
  }
       FUNC_5 (VAR_4, '6', VAR_5, VAR_13);
     }
 }
    }


  for (VAR_7 = VAR_4->sections; VAR_7 != ((void*)0); VAR_7 = VAR_7->next)
    {
      char *VAR_14 = VAR_5;

      FUNC_7 (&VAR_14, VAR_7->name);
      *VAR_14++ = '1';
      FUNC_8 (&VAR_14, VAR_7->vma);
      FUNC_8 (&VAR_14, VAR_7->vma + VAR_7->size);
      FUNC_5 (VAR_4, '3', VAR_5, VAR_14);
    }


  if (VAR_4->outsymbols)
    {
      for (VAR_6 = VAR_4->outsymbols; *VAR_6; VAR_6++)
 {
   int VAR_15 = FUNC_3 (*VAR_6);

   if (VAR_15 != '?')
     {

       asymbol *VAR_16 = *VAR_6;
       char *VAR_17 = VAR_5;

       FUNC_7 (&VAR_17, VAR_16->section->name);

       switch (VAR_15)
  {
  case 'A':
    *VAR_17++ = '2';
    break;
  case 'a':
    *VAR_17++ = '6';
    break;
  case 'D':
  case 'B':
  case 'O':
    *VAR_17++ = '4';
    break;
  case 'd':
  case 'b':
  case 'o':
    *VAR_17++ = '8';
    break;
  case 'T':
    *VAR_17++ = '3';
    break;
  case 't':
    *VAR_17++ = '7';
    break;
  case 'C':
  case 'U':
    FUNC_4 (VAR_3);
    return VAR_1;
  }

       FUNC_7 (&VAR_17, VAR_16->name);
       FUNC_8 (&VAR_17, VAR_16->value + VAR_16->section->vma);
       FUNC_5 (VAR_4, '3', VAR_5, VAR_17);
     }
 }
    }


  if (FUNC_2 ("%0781010\n", (bfd_size_type) 9, VAR_4) != 9)
    FUNC_1 ();
  return VAR_2;
}
