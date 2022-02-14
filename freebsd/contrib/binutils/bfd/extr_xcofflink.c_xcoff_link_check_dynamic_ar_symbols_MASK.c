
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct xcoff_link_hash_entry {int flags; } ;
struct TYPE_5__ {scalar_t__ _l_zeroes; int _l_offset; } ;
struct TYPE_6__ {int _l_name; TYPE_1__ _l_l; } ;
struct internal_ldsym {int l_smtype; TYPE_2__ _l; } ;
struct internal_ldhdr {int l_stoff; int l_nsyms; } ;
struct bfd_link_info {TYPE_3__* callbacks; int hash; } ;
struct bfd_link_hash_entry {scalar_t__ type; } ;
typedef int bfd_byte ;
typedef int bfd_boolean ;
typedef int bfd ;
typedef int asection ;
struct TYPE_8__ {int * contents; int keep_contents; } ;
struct TYPE_7__ {int (* add_archive_element ) (struct bfd_link_info*,int *,char const*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_0 (int *,char*) ;
 struct bfd_link_hash_entry* FUNC_1 (int ,char const*,int ,int ,int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,struct internal_ldhdr*) ;
 int FUNC_4 (int *,int *,struct internal_ldhdr*) ;
 int FUNC_5 (int *,int *,struct internal_ldsym*) ;
 TYPE_4__* FUNC_6 (int *,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (char*,int ,int) ;
 int FUNC_9 (struct bfd_link_info*,int *,char const*) ;
 int FUNC_10 (int *,int *) ;

__attribute__((used)) static bfd_boolean
FUNC_11 (bfd *VAR_6,
         struct bfd_link_info *VAR_7,
         bfd_boolean *VAR_8)
{
  asection *VAR_9;
  bfd_byte *VAR_10;
  struct internal_ldhdr VAR_11;
  const char *VAR_12;
  bfd_byte *VAR_13, *VAR_14;

  *VAR_8 = VAR_0;

  VAR_9 = FUNC_0 (VAR_6, ".loader");
  if (VAR_9 == ((void*)0))

    return VAR_3;

  if (! FUNC_10 (VAR_6, VAR_9))
    return VAR_0;
  VAR_10 = FUNC_6 (VAR_6, VAR_9)->contents;

  FUNC_4 (VAR_6, VAR_10, &VAR_11);

  VAR_12 = (char *) VAR_10 + VAR_11.l_stoff;

  VAR_13 = VAR_10 + FUNC_3 (VAR_6, &VAR_11);

  VAR_14 = VAR_13 + VAR_11.l_nsyms * FUNC_2 (VAR_6);
  for (; VAR_13 < VAR_14; VAR_13 += FUNC_2 (VAR_6))
    {
      struct internal_ldsym VAR_15;
      char VAR_16[VAR_2 + 1];
      const char *VAR_17;
      struct bfd_link_hash_entry *VAR_18;

      FUNC_5 (VAR_6, VAR_13, &VAR_15);


      if ((VAR_15.l_smtype & VAR_1) == 0)
 continue;

      if (VAR_15._l._l_l._l_zeroes == 0)
 VAR_17 = VAR_12 + VAR_15._l._l_l._l_offset;
      else
 {
   FUNC_8 (VAR_16, VAR_15._l._l_name, VAR_2);
   VAR_16[VAR_2] = '\0';
   VAR_17 = VAR_16;
 }

      VAR_18 = FUNC_1 (VAR_7->hash, VAR_17, VAR_0, VAR_0, VAR_3);




      if (VAR_18 != ((void*)0)
   && VAR_18->type == VAR_5
   && (((struct xcoff_link_hash_entry *) VAR_18)->flags
       & VAR_4) == 0)
 {
   if (! (*VAR_7->callbacks->add_archive_element) (VAR_7, VAR_6, VAR_17))
     return VAR_0;
   *VAR_8 = VAR_3;
   return VAR_3;
 }
    }


  if (VAR_10 != ((void*)0) && ! FUNC_6 (VAR_6, VAR_9)->keep_contents)
    {
      FUNC_7 (FUNC_6 (VAR_6, VAR_9)->contents);
      FUNC_6 (VAR_6, VAR_9)->contents = ((void*)0);
    }

  return VAR_3;
}
