
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_15__ {TYPE_8__* p; } ;
struct TYPE_12__ {TYPE_3__* section; } ;
struct TYPE_10__ {int * abfd; } ;
struct TYPE_9__ {struct bfd_link_hash_entry* link; } ;
struct TYPE_13__ {TYPE_7__ c; TYPE_4__ def; TYPE_2__ undef; TYPE_1__ i; } ;
struct bfd_link_hash_entry {int type; TYPE_5__ u; } ;
typedef int bfd ;
struct TYPE_16__ {TYPE_6__* section; } ;
struct TYPE_14__ {int * owner; } ;
struct TYPE_11__ {int * owner; } ;







 int VAR_0 ;

__attribute__((used)) static bfd *
FUNC_0 (struct bfd_link_hash_entry *VAR_1)
{
  while (VAR_1->type == VAR_0)
    VAR_1 = VAR_1->u.i.link;
  switch (VAR_1->type)
    {
    default:
      return ((void*)0);
    case 129:
    case 128:
      return VAR_1->u.undef.abfd;
    case 131:
    case 130:
      return VAR_1->u.def.section->owner;
    case 132:
      return VAR_1->u.c.p->section->owner;
    }

}
