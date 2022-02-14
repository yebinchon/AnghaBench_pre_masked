
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stab_write_handle {char const* lineno_filename; scalar_t__ last_text_address; scalar_t__ fnaddr; } ;
typedef scalar_t__ bfd_vma ;
typedef int bfd_boolean ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct stab_write_handle*,int ,unsigned long,scalar_t__,char const*) ;
 scalar_t__ FUNC_2 (char const*,char const*) ;

__attribute__((used)) static bfd_boolean
FUNC_3 (void *VAR_3, const char *VAR_4, unsigned long VAR_5, bfd_vma VAR_6)
{
  struct stab_write_handle *VAR_7 = (struct stab_write_handle *) VAR_3;

  FUNC_0 (VAR_7->lineno_filename != ((void*)0));

  if (VAR_6 > VAR_7->last_text_address)
    VAR_7->last_text_address = VAR_6;

  if (FUNC_2 (VAR_4, VAR_7->lineno_filename) != 0)
    {
      if (! FUNC_1 (VAR_7, VAR_2, 0, VAR_6, VAR_4))
 return VAR_0;
      VAR_7->lineno_filename = VAR_4;
    }

  return FUNC_1 (VAR_7, VAR_1, VAR_5, VAR_6 - VAR_7->fnaddr,
       (const char *) ((void*)0));
}
