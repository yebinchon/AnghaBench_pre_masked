
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct ecoff_backend_data {int * (* get_elt_at_filepos ) (int *,int ) ;} ;
struct bfd_link_info {TYPE_3__* callbacks; TYPE_1__* hash; } ;
struct TYPE_10__ {struct bfd_link_hash_entry* next; } ;
struct TYPE_11__ {TYPE_4__ undef; } ;
struct TYPE_8__ {char const* string; } ;
struct bfd_link_hash_entry {scalar_t__ type; TYPE_5__ u; TYPE_2__ root; } ;
typedef int file_ptr ;
typedef int bfd_byte ;
typedef int bfd_boolean ;
typedef int bfd ;
struct TYPE_12__ {scalar_t__ tdata; } ;
struct TYPE_9__ {int (* add_archive_element ) (struct bfd_link_info*,int *,char const*) ;} ;
struct TYPE_7__ {struct bfd_link_hash_entry* undefs_tail; struct bfd_link_hash_entry* undefs; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *,int const*) ;
 int VAR_1 ;
 int FUNC_2 (int *,struct bfd_link_info*,int ) ;
 TYPE_6__* FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int VAR_2 ;
 int FUNC_5 (int *) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int * FUNC_6 (int *,int *) ;
 int FUNC_7 (int ) ;
 unsigned int FUNC_8 (char const*,unsigned int*,unsigned int,unsigned int) ;
 struct ecoff_backend_data* FUNC_9 (int *) ;
 int FUNC_10 (int *,struct bfd_link_info*) ;
 int VAR_6 ;
 scalar_t__ FUNC_11 (char const*,char const*) ;
 int * FUNC_12 (int *,int ) ;
 int FUNC_13 (struct bfd_link_info*,int *,char const*) ;

__attribute__((used)) static bfd_boolean
FUNC_14 (bfd *VAR_7, struct bfd_link_info *VAR_8)
{
  const struct ecoff_backend_data * const VAR_9 = FUNC_9 (VAR_7);
  const bfd_byte *VAR_10;
  struct bfd_link_hash_entry **VAR_11;
  unsigned int VAR_12;
  unsigned int VAR_13;
  unsigned int VAR_14;
  const bfd_byte *VAR_15;
  const char *VAR_16;

  if (! FUNC_5 (VAR_7))
    {

      if (FUNC_6 (VAR_7, ((void*)0)) == ((void*)0))
 return VAR_1;
      FUNC_7 (VAR_2);
      return VAR_0;
    }





  VAR_10 = (const bfd_byte *) FUNC_3 (VAR_7)->tdata;
  if (VAR_10 == ((void*)0))
    return (FUNC_2
     (VAR_7, VAR_8, VAR_6));

  VAR_12 = FUNC_1 (VAR_7, VAR_10);

  VAR_13 = 0;
  for (VAR_14 = 1; VAR_14 < VAR_12; VAR_14 <<= 1)
    VAR_13++;
  FUNC_0 (VAR_14 == VAR_12);

  VAR_15 = VAR_10 + 4;
  VAR_16 = (const char *) VAR_10 + VAR_12 * 8 + 8;


  VAR_11 = &VAR_8->hash->undefs;
  while (*VAR_11 != ((void*)0))
    {
      struct bfd_link_hash_entry *VAR_17;
      unsigned int VAR_18, VAR_19 = 0;
      unsigned int VAR_20;
      const char *VAR_21;
      bfd *VAR_22;

      VAR_17 = *VAR_11;



      if (VAR_17->type != VAR_4
   && VAR_17->type != VAR_3)
 {





   if (*VAR_11 != VAR_8->hash->undefs_tail)
     *VAR_11 = (*VAR_11)->u.undef.next;
   else
     VAR_11 = &(*VAR_11)->u.undef.next;
   continue;
 }





      if (VAR_17->type != VAR_4)
 {
   VAR_11 = &(*VAR_11)->u.undef.next;
   continue;
 }


      VAR_18 = FUNC_8 (VAR_17->root.string, &VAR_19, VAR_12,
          VAR_13);

      VAR_20 = FUNC_1 (VAR_7, VAR_15 + (VAR_18 * 8) + 4);
      if (VAR_20 == 0)
 {

   VAR_11 = &(*VAR_11)->u.undef.next;
   continue;
 }

      VAR_21 = VAR_16 + FUNC_1 (VAR_7, VAR_15 + (VAR_18 * 8));
      if (VAR_21[0] != VAR_17->root.string[0]
   || ! FUNC_11 (VAR_21, VAR_17->root.string))
 {
   unsigned int VAR_23;
   bfd_boolean VAR_24;


   VAR_24 = VAR_0;
   for (VAR_23 = (VAR_18 + VAR_19) & (VAR_12 - 1);
        VAR_23 != VAR_18;
        VAR_23 = (VAR_23 + VAR_19) & (VAR_12 - 1))
     {
       VAR_20 = FUNC_1 (VAR_7, VAR_15 + (VAR_23 * 8) + 4);
       if (VAR_20 == 0)
  break;
       VAR_21 = VAR_16 + FUNC_1 (VAR_7, VAR_15 + (VAR_23 * 8));
       if (VAR_21[0] == VAR_17->root.string[0]
    && FUNC_11 (VAR_21, VAR_17->root.string))
  {
    VAR_24 = VAR_1;
    break;
  }
     }

   if (! VAR_24)
     {
       VAR_11 = &(*VAR_11)->u.undef.next;
       continue;
     }

   VAR_18 = VAR_23;
 }

      VAR_22 = (*VAR_9->get_elt_at_filepos) (VAR_7, (file_ptr) VAR_20);
      if (VAR_22 == ((void*)0))
 return VAR_0;

      if (! FUNC_4 (VAR_22, VAR_5))
 return VAR_0;




      if (! (*VAR_8->callbacks->add_archive_element) (VAR_8, VAR_22, VAR_21))
 return VAR_0;
      if (! FUNC_10 (VAR_22, VAR_8))
 return VAR_0;

      VAR_11 = &(*VAR_11)->u.undef.next;
    }

  return VAR_1;
}
