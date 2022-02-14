
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_8__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct xcoff_link_hash_entry {int flags; } ;
struct internal_syment {scalar_t__ n_sclass; scalar_t__ n_scnum; int n_numaux; } ;
struct bfd_link_info {TYPE_1__* callbacks; TYPE_8__* hash; int static_link; } ;
struct bfd_link_hash_entry {scalar_t__ type; } ;
typedef int bfd_size_type ;
typedef int bfd_byte ;
typedef int bfd_boolean ;
struct TYPE_13__ {int flags; scalar_t__ xvec; } ;
typedef TYPE_2__ bfd ;
struct TYPE_14__ {scalar_t__ creator; } ;
struct TYPE_12__ {int (* add_archive_element ) (struct bfd_link_info*,TYPE_2__*,char const*) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 char* FUNC_0 (TYPE_2__*,struct internal_syment*,char*) ;
 int FUNC_1 (TYPE_2__*,void*,void*) ;
 int FUNC_2 (TYPE_2__*) ;
 struct bfd_link_hash_entry* FUNC_3 (TYPE_8__*,char const*,int ,int ,int ) ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (struct bfd_link_info*,TYPE_2__*,char const*) ;
 int FUNC_7 (TYPE_2__*,struct bfd_link_info*,int *) ;

__attribute__((used)) static bfd_boolean
FUNC_8 (bfd *VAR_8,
        struct bfd_link_info *VAR_9,
        bfd_boolean *VAR_10)
{
  bfd_size_type VAR_11;
  bfd_byte *VAR_12;
  bfd_byte *VAR_13;

  *VAR_10 = VAR_2;

  if ((VAR_8->flags & VAR_1) != 0
      && ! VAR_9->static_link
      && VAR_9->hash->creator == VAR_8->xvec)
    return FUNC_7 (VAR_8, VAR_9, VAR_10);

  VAR_11 = FUNC_2 (VAR_8);
  VAR_12 = (bfd_byte *) FUNC_4 (VAR_8);
  VAR_13 = VAR_12 + FUNC_5 (VAR_8) * VAR_11;
  while (VAR_12 < VAR_13)
    {
      struct internal_syment VAR_14;

      FUNC_1 (VAR_8, (void *) VAR_12, (void *) &VAR_14);

      if (VAR_14.n_sclass == VAR_0 && VAR_14.n_scnum != VAR_3)
 {
   const char *VAR_15;
   char VAR_16[VAR_4 + 1];
   struct bfd_link_hash_entry *VAR_17;



   VAR_15 = FUNC_0 (VAR_8, &VAR_14, VAR_16);

   if (VAR_15 == ((void*)0))
     return VAR_2;
   VAR_17 = FUNC_3 (VAR_9->hash, VAR_15, VAR_2, VAR_2, VAR_5);






   if (VAR_17 != ((void*)0)
       && VAR_17->type == VAR_7
        && (VAR_9->hash->creator != VAR_8->xvec
    || (((struct xcoff_link_hash_entry *) VAR_17)->flags
        & VAR_6) == 0))
     {
       if (! (*VAR_9->callbacks->add_archive_element) (VAR_9, VAR_8, VAR_15))
  return VAR_2;
       *VAR_10 = VAR_5;
       return VAR_5;
     }
 }

      VAR_12 += (VAR_14.n_numaux + 1) * VAR_11;
    }


  return VAR_5;
}
