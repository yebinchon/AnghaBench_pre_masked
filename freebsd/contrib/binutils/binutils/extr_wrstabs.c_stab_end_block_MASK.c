
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stab_write_handle {scalar_t__ last_text_address; scalar_t__ pending_lbrac; scalar_t__ nesting; scalar_t__ fnaddr; } ;
typedef scalar_t__ bfd_vma ;
typedef int bfd_boolean ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct stab_write_handle*,int ,int ,scalar_t__,char const*) ;

__attribute__((used)) static bfd_boolean
FUNC_2 (void *VAR_4, bfd_vma VAR_5)
{
  struct stab_write_handle *VAR_6 = (struct stab_write_handle *) VAR_4;

  if (VAR_5 > VAR_6->last_text_address)
    VAR_6->last_text_address = VAR_5;


  if (VAR_6->pending_lbrac != (bfd_vma) -1)
    {
      if (! FUNC_1 (VAR_6, VAR_1, 0, VAR_6->pending_lbrac,
          (const char *) ((void*)0)))
 return VAR_0;
      VAR_6->pending_lbrac = (bfd_vma) -1;
    }

  FUNC_0 (VAR_6->nesting > 0);

  --VAR_6->nesting;


  if (VAR_6->nesting == 0)
    return VAR_3;

  return FUNC_1 (VAR_6, VAR_2, 0, VAR_5 - VAR_6->fnaddr,
       (const char *) ((void*)0));
}
