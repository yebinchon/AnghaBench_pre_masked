
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ type; } ;
struct generic_link_hash_entry {TYPE_5__* sym; TYPE_1__ root; } ;
struct bfd_link_info {TYPE_2__* hash; } ;
struct bfd_link_hash_entry {int dummy; } ;
typedef int bfd_size_type ;
typedef int bfd_boolean ;
struct TYPE_14__ {scalar_t__ xvec; } ;
typedef TYPE_4__ bfd ;
struct TYPE_13__ {struct generic_link_hash_entry* p; } ;
struct TYPE_15__ {int flags; TYPE_3__ udata; int value; int section; } ;
typedef TYPE_5__ asymbol ;
struct TYPE_12__ {scalar_t__ creator; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct bfd_link_info*,TYPE_4__*,char const*,int,int ,int ,char const*,int ,int ,struct bfd_link_hash_entry**) ;
 char* FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (TYPE_5__*) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ VAR_8 ;

__attribute__((used)) static bfd_boolean
FUNC_6 (bfd *VAR_9,
         struct bfd_link_info *VAR_10,
         bfd_size_type VAR_11,
         asymbol **VAR_12,
         bfd_boolean VAR_13)
{
  asymbol **VAR_14, **VAR_15;

  VAR_14 = VAR_12;
  VAR_15 = VAR_12 + VAR_11;
  for (; VAR_14 < VAR_15; VAR_14++)
    {
      asymbol *VAR_16;

      VAR_16 = *VAR_14;

      if ((VAR_16->flags & (VAR_2
         | VAR_4
         | VAR_1
         | VAR_0
         | VAR_5)) != 0
   || FUNC_5 (FUNC_2 (VAR_16))
   || FUNC_3 (FUNC_2 (VAR_16))
   || FUNC_4 (FUNC_2 (VAR_16)))
 {
   const char *VAR_17;
   const char *VAR_18;
   struct generic_link_hash_entry *VAR_19;
   struct bfd_link_hash_entry *VAR_20;

   VAR_17 = FUNC_1 (VAR_16);
   if (((VAR_16->flags & VAR_2) != 0
        || FUNC_4 (VAR_16->section))
       && VAR_14 + 1 < VAR_15)
     {
       VAR_14++;
       VAR_18 = FUNC_1 (*VAR_14);
     }
   else if ((VAR_16->flags & VAR_4) != 0
     && VAR_14 + 1 < VAR_15)
     {


       VAR_18 = VAR_17;
       VAR_14++;
       VAR_17 = FUNC_1 (*VAR_14);
     }
   else
     VAR_18 = ((void*)0);

   VAR_20 = ((void*)0);
   if (! (FUNC_0
   (VAR_10, VAR_9, VAR_17, VAR_16->flags, FUNC_2 (VAR_16),
    VAR_16->value, VAR_18, VAR_6, VAR_13, &VAR_20)))
     return VAR_6;
   VAR_19 = (struct generic_link_hash_entry *) VAR_20;





   if ((VAR_16->flags & VAR_0) != 0
       && (VAR_19 == ((void*)0) || VAR_19->root.type == VAR_8))
     {
       VAR_16->udata.p = ((void*)0);
       continue;
     }
   if (VAR_10->hash->creator == VAR_9->xvec)
     {
       if (VAR_19->sym == ((void*)0)
    || (! FUNC_5 (FUNC_2 (VAR_16))
        && (! FUNC_3 (FUNC_2 (VAR_16))
     || FUNC_5 (FUNC_2 (VAR_19->sym)))))
  {
    VAR_19->sym = VAR_16;



    if (FUNC_3 (FUNC_2 (VAR_16)))
      VAR_16->flags |= VAR_3;
  }
     }






   VAR_16->udata.p = VAR_19;
 }
    }

  return VAR_7;
}
