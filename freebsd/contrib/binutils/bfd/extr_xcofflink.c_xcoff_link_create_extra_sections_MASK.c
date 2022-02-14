
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct bfd_link_info {scalar_t__ strip; TYPE_1__* hash; } ;
typedef int flagword ;
typedef int bfd_boolean ;
struct TYPE_9__ {scalar_t__ xvec; } ;
typedef TYPE_2__ bfd ;
struct TYPE_10__ {int alignment_power; } ;
typedef TYPE_3__ asection ;
struct TYPE_11__ {TYPE_3__* debug_section; TYPE_3__* descriptor_section; TYPE_3__* toc_section; TYPE_3__* linkage_section; TYPE_3__* loader_section; } ;
struct TYPE_8__ {scalar_t__ creator; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_3__* FUNC_0 (TYPE_2__*,char*,int) ;
 scalar_t__ VAR_6 ;
 TYPE_5__* FUNC_1 (struct bfd_link_info*) ;

__attribute__((used)) static bfd_boolean
FUNC_2 (bfd * VAR_7, struct bfd_link_info *VAR_8)
{
  bfd_boolean VAR_9 = VAR_0;

  if (VAR_8->hash->creator == VAR_7->xvec)
    {




      if (FUNC_1 (VAR_8)->loader_section == ((void*)0))
 {
   asection *VAR_10;
   flagword VAR_11 = VAR_2 | VAR_3;

   VAR_10 = FUNC_0 (VAR_7, ".loader", VAR_11);
   if (VAR_10 == ((void*)0))
     goto end_return;

   FUNC_1 (VAR_8)->loader_section = VAR_10;
 }


      if (FUNC_1 (VAR_8)->linkage_section == ((void*)0))
 {
   asection *VAR_12;
   flagword VAR_13 = (VAR_1 | VAR_4 | VAR_2
       | VAR_3);

   VAR_12 = FUNC_0 (VAR_7, ".gl", VAR_13);
   if (VAR_12 == ((void*)0))
     goto end_return;

   FUNC_1 (VAR_8)->linkage_section = VAR_12;
   VAR_12->alignment_power = 2;
 }


      if (FUNC_1 (VAR_8)->toc_section == ((void*)0))
 {
   asection *VAR_14;
   flagword VAR_15 = (VAR_1 | VAR_4 | VAR_2
       | VAR_3);

   VAR_14 = FUNC_0 (VAR_7, ".tc", VAR_15);
   if (VAR_14 == ((void*)0))
     goto end_return;

   FUNC_1 (VAR_8)->toc_section = VAR_14;
   VAR_14->alignment_power = 2;
 }


      if (FUNC_1 (VAR_8)->descriptor_section == ((void*)0))
 {
   asection *VAR_16;
   flagword VAR_17 = (VAR_1 | VAR_4 | VAR_2
       | VAR_3);

   VAR_16 = FUNC_0 (VAR_7, ".ds", VAR_17);
   if (VAR_16 == ((void*)0))
     goto end_return;

   FUNC_1 (VAR_8)->descriptor_section = VAR_16;
   VAR_16->alignment_power = 2;
 }


      if (FUNC_1 (VAR_8)->debug_section == ((void*)0)
   && VAR_8->strip != VAR_6)
 {
   asection *VAR_18;
   flagword VAR_19 = VAR_2 | VAR_3;

   VAR_18 = FUNC_0 (VAR_7, ".debug", VAR_19);
   if (VAR_18 == ((void*)0))
     goto end_return;

   FUNC_1 (VAR_8)->debug_section = VAR_18;
 }
    }

  VAR_9 = VAR_5;

 end_return:

  return VAR_9;
}
