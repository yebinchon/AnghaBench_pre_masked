
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee_handle {int block_depth; int vars; } ;
typedef int bfd_vma ;
typedef int bfd_boolean ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct ieee_handle*,int *) ;
 int FUNC_1 (struct ieee_handle*) ;
 int FUNC_2 (struct ieee_handle*,int ) ;
 int FUNC_3 (struct ieee_handle*,int) ;
 int FUNC_4 (struct ieee_handle*,char*) ;
 int FUNC_5 (struct ieee_handle*,int ) ;

__attribute__((used)) static bfd_boolean
FUNC_6 (void *VAR_3, bfd_vma VAR_4)
{
  struct ieee_handle *VAR_5 = (struct ieee_handle *) VAR_3;

  if (! FUNC_0 (VAR_5, &VAR_5->vars))
    return VAR_0;

  if (VAR_5->block_depth == 1)
    {
      if (! FUNC_5 (VAR_5, VAR_4)
   || ! FUNC_1 (VAR_5))
 return VAR_0;
    }
  else
    {
      if (! FUNC_3 (VAR_5, (int) VAR_2)
   || ! FUNC_3 (VAR_5, 6)
   || ! FUNC_5 (VAR_5, 0)
   || ! FUNC_4 (VAR_5, "")
   || ! FUNC_5 (VAR_5, 0)
   || ! FUNC_5 (VAR_5, 0)
   || ! FUNC_5 (VAR_5, VAR_4))
 return VAR_0;
    }

  if (! FUNC_2 (VAR_5, VAR_4))
    return VAR_0;

  ++VAR_5->block_depth;

  return VAR_1;
}
