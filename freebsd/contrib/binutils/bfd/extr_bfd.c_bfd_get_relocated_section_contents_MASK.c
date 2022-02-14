
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {TYPE_2__* section; } ;
struct TYPE_12__ {TYPE_3__ indirect; } ;
struct bfd_link_order {scalar_t__ type; TYPE_4__ u; } ;
struct bfd_link_info {int dummy; } ;
typedef int bfd_byte ;
typedef int bfd_boolean ;
struct TYPE_13__ {TYPE_1__* xvec; } ;
typedef TYPE_5__ bfd ;
typedef int asymbol ;
struct TYPE_10__ {TYPE_5__* owner; } ;
struct TYPE_9__ {int * (* _bfd_get_relocated_section_contents ) (TYPE_5__*,struct bfd_link_info*,struct bfd_link_order*,int *,int ,int **) ;} ;


 scalar_t__ VAR_0 ;
 int * FUNC_0 (TYPE_5__*,struct bfd_link_info*,struct bfd_link_order*,int *,int ,int **) ;

bfd_byte *
FUNC_1 (bfd *VAR_1,
        struct bfd_link_info *VAR_2,
        struct bfd_link_order *VAR_3,
        bfd_byte *VAR_4,
        bfd_boolean VAR_5,
        asymbol **VAR_6)
{
  bfd *VAR_7;
  bfd_byte *(*VAR_8) (bfd *, struct bfd_link_info *, struct bfd_link_order *,
     bfd_byte *, bfd_boolean, asymbol **);

  if (VAR_3->type == VAR_0)
    {
      VAR_7 = VAR_3->u.indirect.section->owner;
      if (VAR_7 == ((void*)0))
 VAR_7 = VAR_1;
    }
  else
    VAR_7 = VAR_1;

  VAR_8 = VAR_7->xvec->_bfd_get_relocated_section_contents;

  return (*VAR_8) (VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
}
