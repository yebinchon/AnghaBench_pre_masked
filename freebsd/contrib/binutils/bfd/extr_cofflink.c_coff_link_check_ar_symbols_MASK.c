
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct internal_syment {int n_numaux; } ;
struct bfd_link_info {TYPE_1__* callbacks; int hash; scalar_t__ pei386_auto_import; } ;
struct bfd_link_hash_entry {scalar_t__ type; } ;
typedef enum coff_symbol_classification { ____Placeholder_coff_symbol_classification } coff_symbol_classification ;
typedef int bfd_size_type ;
typedef int bfd_byte ;
typedef int bfd_boolean ;
typedef int bfd ;
struct TYPE_2__ {int (* add_archive_element ) (struct bfd_link_info*,int *,char const*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char const*,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char* FUNC_1 (int *,struct internal_syment*,char*) ;
 int FUNC_2 (int *,struct internal_syment*) ;
 int FUNC_3 (int *,int *,struct internal_syment*) ;
 int FUNC_4 (int *) ;
 struct bfd_link_hash_entry* FUNC_5 (int ,char const*,int ,int ,int ) ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct bfd_link_info*,int *,char const*) ;

__attribute__((used)) static bfd_boolean
FUNC_9 (bfd *VAR_6,
       struct bfd_link_info *VAR_7,
       bfd_boolean *VAR_8)
{
  bfd_size_type VAR_9;
  bfd_byte *VAR_10;
  bfd_byte *VAR_11;

  *VAR_8 = VAR_2;

  VAR_9 = FUNC_4 (VAR_6);
  VAR_10 = (bfd_byte *) FUNC_6 (VAR_6);
  VAR_11 = VAR_10 + FUNC_7 (VAR_6) * VAR_9;
  while (VAR_10 < VAR_11)
    {
      struct internal_syment VAR_12;
      enum coff_symbol_classification VAR_13;

      FUNC_3 (VAR_6, VAR_10, &VAR_12);

      VAR_13 = FUNC_2 (VAR_6, &VAR_12);
      if (VAR_13 == VAR_1
   || VAR_13 == VAR_0)
 {
   const char *VAR_14;
   char VAR_15[VAR_3 + 1];
   struct bfd_link_hash_entry *VAR_16;



   VAR_14 = FUNC_1 (VAR_6, &VAR_12, VAR_15);
   if (VAR_14 == ((void*)0))
     return VAR_2;
   VAR_16 = FUNC_5 (VAR_7->hash, VAR_14, VAR_2, VAR_2, VAR_4);


   if (!VAR_16
       && VAR_7->pei386_auto_import
       && FUNC_0 (VAR_14, "__imp_"))
     VAR_16 = FUNC_5 (VAR_7->hash, VAR_14 + 6, VAR_2, VAR_2, VAR_4);





   if (VAR_16 != (struct bfd_link_hash_entry *) ((void*)0)
       && VAR_16->type == VAR_5)
     {
       if (! (*VAR_7->callbacks->add_archive_element) (VAR_7, VAR_6, VAR_14))
  return VAR_2;
       *VAR_8 = VAR_4;
       return VAR_4;
     }
 }

      VAR_10 += (VAR_12.n_numaux + 1) * VAR_9;
    }


  return VAR_4;
}
