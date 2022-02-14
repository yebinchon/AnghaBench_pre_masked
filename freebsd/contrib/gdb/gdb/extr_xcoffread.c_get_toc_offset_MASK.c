
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct objfile {scalar_t__ sym_private; } ;
struct coff_symfile_info {int toc_offset; } ;
typedef int CORE_ADDR ;



CORE_ADDR
FUNC_0 (struct objfile *VAR_0)
{
  if (VAR_0)
    return ((struct coff_symfile_info *) VAR_0->sym_private)->toc_offset;
  return 0;
}
