
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee_handle {scalar_t__ highaddr; int block_depth; int vars; } ;
typedef scalar_t__ bfd_vma ;
typedef int bfd_boolean ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct ieee_handle*,int *) ;
 int FUNC_1 (struct ieee_handle*,scalar_t__) ;
 int FUNC_2 (struct ieee_handle*,int) ;
 int FUNC_3 (struct ieee_handle*,scalar_t__) ;

__attribute__((used)) static bfd_boolean
FUNC_4 (void *VAR_3, bfd_vma VAR_4)
{
  struct ieee_handle *VAR_5 = (struct ieee_handle *) VAR_3;




  if (! FUNC_0 (VAR_5, &VAR_5->vars)
      || ! FUNC_2 (VAR_5, (int) VAR_2)
      || ! FUNC_3 (VAR_5, VAR_4 - 1))
    return VAR_0;

  if (! FUNC_1 (VAR_5, VAR_4))
    return VAR_0;

  --VAR_5->block_depth;

  if (VAR_4 > VAR_5->highaddr)
    VAR_5->highaddr = VAR_4;

  return VAR_1;
}
