
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct bfd_link_info {TYPE_1__* hash; } ;
typedef int bfd_boolean ;
struct TYPE_15__ {int flags; int archive_pass; int xvec; } ;
typedef TYPE_2__ bfd ;
struct TYPE_14__ {int creator; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*,struct bfd_link_info*,int (*) (TYPE_2__*,struct bfd_link_info*,int *)) ;

 int FUNC_1 (TYPE_2__*,int const) ;
 int VAR_3 ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;

 TYPE_2__* FUNC_4 (TYPE_2__*,TYPE_2__*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_2__*,struct bfd_link_info*) ;
 int FUNC_7 (TYPE_2__*,struct bfd_link_info*,int *) ;

bfd_boolean
FUNC_8 (bfd *VAR_4, struct bfd_link_info *VAR_5)
{
  switch (FUNC_2 (VAR_4))
    {
    case 128:
      return FUNC_6 (VAR_4, VAR_5);

    case 129:






      if (FUNC_3 (VAR_4))
 {
   if (! (FUNC_0
   (VAR_4, VAR_5, FUNC_7)))
     return VAR_1;
 }

      {
 bfd *VAR_6;

 VAR_6 = FUNC_4 (VAR_4, ((void*)0));
 while (VAR_6 != ((void*)0))
   {
     if (FUNC_1 (VAR_6, 128)
  && (VAR_5->hash->creator == VAR_6->xvec)
  && (! FUNC_3 (VAR_4) || (VAR_6->flags & VAR_0) != 0))
       {
  bfd_boolean VAR_7;

  if (! FUNC_7 (VAR_6, VAR_5,
       &VAR_7))
    return VAR_1;
  if (VAR_7)
    VAR_6->archive_pass = -1;
       }
     VAR_6 = FUNC_4 (VAR_4, VAR_6);
   }
      }

      return VAR_2;

    default:
      FUNC_5 (VAR_3);
      return VAR_1;
    }
}
