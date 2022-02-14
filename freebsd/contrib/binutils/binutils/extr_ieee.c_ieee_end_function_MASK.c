
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee_handle {int block_depth; scalar_t__ fnargcount; int fnargs; int fntype; int * fnname; int types; int modname; } ;
typedef int bfd_boolean ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct ieee_handle*,int *,int *) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (struct ieee_handle*,int *) ;
 int FUNC_4 (struct ieee_handle*,int *) ;
 int FUNC_5 (struct ieee_handle*,int) ;
 int FUNC_6 (struct ieee_handle*,int ) ;
 int FUNC_7 (struct ieee_handle*,scalar_t__) ;

__attribute__((used)) static bfd_boolean
FUNC_8 (void *VAR_3)
{
  struct ieee_handle *VAR_4 = (struct ieee_handle *) VAR_3;

  FUNC_0 (VAR_4->block_depth == 1);

  --VAR_4->block_depth;







  if (! FUNC_3 (VAR_4, &VAR_4->fntype)
      || ! FUNC_7 (VAR_4, VAR_4->fnargcount)
      || ! FUNC_3 (VAR_4, &VAR_4->fnargs)
      || ! FUNC_7 (VAR_4, 0))
    return VAR_0;


  if (FUNC_2 (&VAR_4->types))
    {
      if (! FUNC_3 (VAR_4, &VAR_4->types)
   || ! FUNC_5 (VAR_4, (int) VAR_2)
   || ! FUNC_5 (VAR_4, 1)
   || ! FUNC_7 (VAR_4, 0)
   || ! FUNC_6 (VAR_4, VAR_4->modname))
 return VAR_0;
    }

  if (! FUNC_1 (VAR_4, &VAR_4->types, &VAR_4->fntype)
      || ! FUNC_1 (VAR_4, &VAR_4->types, &VAR_4->fnargs))
    return VAR_0;

  VAR_4->fnname = ((void*)0);
  if (! FUNC_4 (VAR_4, &VAR_4->fntype)
      || ! FUNC_4 (VAR_4, &VAR_4->fnargs))
    return VAR_0;
  VAR_4->fnargcount = 0;

  return VAR_1;
}
