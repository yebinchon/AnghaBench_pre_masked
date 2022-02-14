
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfd_link_info {char const wrap_char; int hash; int * wrap_hash; } ;
struct bfd_link_hash_entry {int dummy; } ;
typedef scalar_t__ bfd_size_type ;
typedef int bfd_boolean ;
typedef int bfd ;


 scalar_t__ FUNC_0 (char const*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char const* VAR_3 ;
 char const FUNC_1 (int *) ;
 int * FUNC_2 (int *,char const*,int ,int ) ;
 struct bfd_link_hash_entry* FUNC_3 (int ,char const*,int ,int ,int ) ;
 char* FUNC_4 (scalar_t__) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,char const*) ;
 scalar_t__ FUNC_7 (char const*) ;

struct bfd_link_hash_entry *
FUNC_8 (bfd *VAR_4,
         struct bfd_link_info *VAR_5,
         const char *VAR_6,
         bfd_boolean VAR_7,
         bfd_boolean VAR_8,
         bfd_boolean VAR_9)
{
  bfd_size_type VAR_10;

  if (VAR_5->wrap_hash != ((void*)0))
    {
      const char *VAR_11;
      char VAR_12 = '\0';

      VAR_11 = VAR_6;
      if (*VAR_11 == FUNC_1 (VAR_4) || *VAR_11 == VAR_5->wrap_char)
 {
   VAR_12 = *VAR_11;
   ++VAR_11;
 }




      if (FUNC_2 (VAR_5->wrap_hash, VAR_11, VAR_0, VAR_0) != ((void*)0))
 {
   char *VAR_13;
   struct bfd_link_hash_entry *VAR_14;




   VAR_10 = FUNC_7 (VAR_11) + sizeof "__wrap_" + 1;
   VAR_13 = FUNC_4 (VAR_10);
   if (VAR_13 == ((void*)0))
     return ((void*)0);

   VAR_13[0] = VAR_12;
   VAR_13[1] = '\0';
   FUNC_6 (VAR_13, "__wrap_");
   FUNC_6 (VAR_13, VAR_11);
   VAR_14 = FUNC_3 (VAR_5->hash, VAR_13, VAR_7, VAR_2, VAR_9);
   FUNC_5 (VAR_13);
   return VAR_14;
 }






      if (*VAR_11 == '_'
   && FUNC_0 (VAR_11, "__real_")
   && FUNC_2 (VAR_5->wrap_hash, VAR_11 + sizeof "__real_" - 1,
         VAR_0, VAR_0) != ((void*)0))
 {
   char *VAR_15;
   struct bfd_link_hash_entry *VAR_16;





   VAR_10 = FUNC_7 (VAR_11 + sizeof "__real_" - 1) + 2;
   VAR_15 = FUNC_4 (VAR_10);
   if (VAR_15 == ((void*)0))
     return ((void*)0);

   VAR_15[0] = VAR_12;
   VAR_15[1] = '\0';
   FUNC_6 (VAR_15, VAR_11 + sizeof "__real_" - 1);
   VAR_16 = FUNC_3 (VAR_5->hash, VAR_15, VAR_7, VAR_2, VAR_9);
   FUNC_5 (VAR_15);
   return VAR_16;
 }


    }

  return FUNC_3 (VAR_5->hash, VAR_6, VAR_7, VAR_8, VAR_9);
}
