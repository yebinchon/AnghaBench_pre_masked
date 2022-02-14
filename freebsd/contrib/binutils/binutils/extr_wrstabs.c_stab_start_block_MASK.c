
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stab_write_handle {int so_offset; int fun_offset; int nesting; scalar_t__ fnaddr; scalar_t__ pending_lbrac; scalar_t__ symbols; int abfd; } ;
typedef scalar_t__ bfd_vma ;
typedef int bfd_boolean ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,scalar_t__,scalar_t__) ;
 int FUNC_1 (struct stab_write_handle*,int ,int ,scalar_t__,char const*) ;

__attribute__((used)) static bfd_boolean
FUNC_2 (void *VAR_3, bfd_vma VAR_4)
{
  struct stab_write_handle *VAR_5 = (struct stab_write_handle *) VAR_3;




  if (VAR_5->so_offset != -1)
    {
      FUNC_0 (VAR_5->abfd, VAR_4, VAR_5->symbols + VAR_5->so_offset + 8);
      VAR_5->so_offset = -1;
    }

  if (VAR_5->fun_offset != -1)
    {
      FUNC_0 (VAR_5->abfd, VAR_4, VAR_5->symbols + VAR_5->fun_offset + 8);
      VAR_5->fun_offset = -1;
    }

  ++VAR_5->nesting;





  if (VAR_5->nesting == 1)
    {
      VAR_5->fnaddr = VAR_4;
      return VAR_2;
    }






  if (VAR_5->pending_lbrac != (bfd_vma) -1)
    {
      if (! FUNC_1 (VAR_5, VAR_1, 0, VAR_5->pending_lbrac,
          (const char *) ((void*)0)))
 return VAR_0;
    }



  VAR_5->pending_lbrac = VAR_4 - VAR_5->fnaddr;

  return VAR_2;
}
