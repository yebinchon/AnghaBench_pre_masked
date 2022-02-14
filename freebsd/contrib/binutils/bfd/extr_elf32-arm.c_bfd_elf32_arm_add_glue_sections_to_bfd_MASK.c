
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct bfd_link_info {scalar_t__ relocatable; } ;
typedef int flagword ;
typedef int bfd_boolean ;
typedef int bfd ;
struct TYPE_5__ {int gc_mark; } ;
typedef TYPE_1__ asection ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 TYPE_1__* FUNC_0 (int *,int ) ;
 TYPE_1__* FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int *,TYPE_1__*,int) ;

bfd_boolean
FUNC_3 (bfd *VAR_11,
     struct bfd_link_info *VAR_12)
{
  flagword VAR_13;
  asection *VAR_14;



  if (VAR_12->relocatable)
    return VAR_9;

  VAR_14 = FUNC_0 (VAR_11, VAR_0);

  if (VAR_14 == ((void*)0))
    {



      VAR_13 = (VAR_2 | VAR_6 | VAR_4 | VAR_5
        | VAR_3 | VAR_7);

      VAR_14 = FUNC_1 (VAR_11,
      VAR_0,
      VAR_13);

      if (VAR_14 == ((void*)0)
   || !FUNC_2 (VAR_11, VAR_14, 2))
 return VAR_1;



      VAR_14->gc_mark = 1;
    }

  VAR_14 = FUNC_0 (VAR_11, VAR_8);

  if (VAR_14 == ((void*)0))
    {
      VAR_13 = (VAR_2 | VAR_6 | VAR_4 | VAR_5
        | VAR_3 | VAR_7);

      VAR_14 = FUNC_1 (VAR_11,
      VAR_8,
      VAR_13);

      if (VAR_14 == ((void*)0)
   || !FUNC_2 (VAR_11, VAR_14, 2))
 return VAR_1;

      VAR_14->gc_mark = 1;
    }

  VAR_14 = FUNC_0 (VAR_11, VAR_10);

  if (VAR_14 == ((void*)0))
    {
      VAR_13 = (VAR_2 | VAR_6 | VAR_4 | VAR_5
        | VAR_3 | VAR_7);

      VAR_14 = FUNC_1 (VAR_11,
      VAR_10,
                                         VAR_13);

      if (VAR_14 == ((void*)0)
   || !FUNC_2 (VAR_11, VAR_14, 2))
 return VAR_1;

      VAR_14->gc_mark = 1;
    }

  return VAR_9;
}
