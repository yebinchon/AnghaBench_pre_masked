
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_14__ {int bitsize; scalar_t__ pcrel_offset; int name; scalar_t__ pc_relative; } ;
typedef TYPE_3__ reloc_howto_type ;
typedef int bfd_reloc_code_real_type ;
typedef int bfd_boolean ;
struct TYPE_15__ {scalar_t__ xvec; } ;
typedef TYPE_4__ bfd ;
struct TYPE_16__ {TYPE_3__* howto; scalar_t__ address; int addend; TYPE_2__** sym_ptr_ptr; } ;
typedef TYPE_5__ arelent ;
struct TYPE_13__ {TYPE_1__* the_bfd; } ;
struct TYPE_12__ {scalar_t__ xvec; } ;


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
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,TYPE_4__*,int ) ;
 int VAR_14 ;
 TYPE_3__* FUNC_2 (TYPE_4__*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,TYPE_4__*,int ) ;

bfd_boolean
FUNC_5 (bfd *VAR_15, arelent *VAR_16)
{


  if ((*VAR_16->sym_ptr_ptr)->the_bfd->xvec != VAR_15->xvec)
    {
      bfd_reloc_code_real_type VAR_17;
      reloc_howto_type *VAR_18;




      if (VAR_16->howto->pc_relative)
 {
   switch (VAR_16->howto->bitsize)
     {
     case 8:
       VAR_17 = VAR_11;
       break;
     case 12:
       VAR_17 = VAR_0;
       break;
     case 16:
       VAR_17 = VAR_3;
       break;
     case 24:
       VAR_17 = VAR_4;
       break;
     case 32:
       VAR_17 = VAR_7;
       break;
     case 64:
       VAR_17 = VAR_9;
       break;
     default:
       goto fail;
     }

   VAR_18 = FUNC_2 (VAR_15, VAR_17);

   if (VAR_16->howto->pcrel_offset != VAR_18->pcrel_offset)
     {
       if (VAR_18->pcrel_offset)
  VAR_16->addend += VAR_16->address;
       else
  VAR_16->addend -= VAR_16->address;
     }
 }
      else
 {
   switch (VAR_16->howto->bitsize)
     {
     case 8:
       VAR_17 = VAR_10;
       break;
     case 14:
       VAR_17 = VAR_1;
       break;
     case 16:
       VAR_17 = VAR_2;
       break;
     case 26:
       VAR_17 = VAR_5;
       break;
     case 32:
       VAR_17 = VAR_6;
       break;
     case 64:
       VAR_17 = VAR_8;
       break;
     default:
       goto fail;
     }

   VAR_18 = FUNC_2 (VAR_15, VAR_17);
 }

      if (VAR_18)
 VAR_16->howto = VAR_18;
      else
 goto fail;
    }

  return VAR_13;

 fail:
  FUNC_1)
    (FUNC_0("%B: unsupported relocation type %s"),
     VAR_15, VAR_16->howto->name);
  FUNC_3 (VAR_14);
  return VAR_12;
}
