
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_18__ {int l_symndx; } ;
struct internal_lineno {TYPE_2__ l_addr; scalar_t__ l_lnno; } ;
typedef int out ;
typedef scalar_t__ bfd_size_type ;
typedef int bfd_boolean ;
struct TYPE_20__ {TYPE_5__** outsymbols; TYPE_6__* sections; } ;
typedef TYPE_4__ bfd ;
struct TYPE_21__ {TYPE_1__* section; } ;
typedef TYPE_5__ asymbol ;
struct TYPE_22__ {int line_filepos; scalar_t__ lineno_count; struct TYPE_22__* next; } ;
typedef TYPE_6__ asection ;
struct TYPE_19__ {int offset; } ;
struct TYPE_23__ {TYPE_3__ u; scalar_t__ line_number; } ;
typedef TYPE_7__ alent ;
struct TYPE_17__ {TYPE_6__* output_section; } ;


 TYPE_7__* FUNC_0 (int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_1 (TYPE_4__*,scalar_t__) ;
 int FUNC_2 (TYPE_5__*) ;
 scalar_t__ FUNC_3 (void*,scalar_t__,TYPE_4__*) ;
 scalar_t__ FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (TYPE_4__*,struct internal_lineno*,void*) ;
 int FUNC_6 (TYPE_4__*,void*) ;
 scalar_t__ FUNC_7 (TYPE_4__*,int ,int ) ;
 int FUNC_8 (void*,int ,int) ;

bfd_boolean
FUNC_9 (bfd *VAR_4)
{
  asection *VAR_5;
  bfd_size_type VAR_6;
  void * VAR_7;

  VAR_6 = FUNC_4 (VAR_4);
  VAR_7 = FUNC_1 (VAR_4, VAR_6);
  if (!VAR_7)
    return VAR_0;
  for (VAR_5 = VAR_4->sections; VAR_5 != (asection *) ((void*)0); VAR_5 = VAR_5->next)
    {
      if (VAR_5->lineno_count)
 {
   asymbol **VAR_8 = VAR_4->outsymbols;
   if (FUNC_7 (VAR_4, VAR_5->line_filepos, VAR_1) != 0)
     return VAR_0;

   while (*VAR_8)
     {
       asymbol *VAR_9 = *VAR_8;
       if (VAR_9->section->output_section == VAR_5)
  {
    alent *VAR_10 =
    FUNC_0 (FUNC_2 (VAR_9), VAR_3,
       (FUNC_2 (VAR_9), VAR_9));
    if (VAR_10)
      {

        struct internal_lineno VAR_11;
        FUNC_8 ((void *) & VAR_11, 0, sizeof (VAR_11));
        VAR_11.l_lnno = 0;
        VAR_11.l_addr.l_symndx = VAR_10->u.offset;
        FUNC_5 (VAR_4, &VAR_11, VAR_7);
        if (FUNC_3 (VAR_7, (bfd_size_type) VAR_6, VAR_4)
     != VAR_6)
   return VAR_0;
        VAR_10++;
        while (VAR_10->line_number)
   {
     VAR_11.l_lnno = VAR_10->line_number;
     VAR_11.l_addr.l_symndx = VAR_10->u.offset;
     FUNC_5 (VAR_4, &VAR_11, VAR_7);
     if (FUNC_3 (VAR_7, (bfd_size_type) VAR_6, VAR_4)
         != VAR_6)
       return VAR_0;
     VAR_10++;
   }
      }
  }
       VAR_8++;
     }
 }
    }
  FUNC_6 (VAR_4, VAR_7);
  return VAR_2;
}
