
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sec_merge_sec_info {TYPE_1__* sec; struct sec_merge_hash_entry* first_str; } ;
struct sec_merge_info {TYPE_2__* htab; } ;
struct TYPE_6__ {int index; struct sec_merge_hash_entry* suffix; } ;
struct sec_merge_hash_entry {int alignment; int len; TYPE_3__ u; struct sec_merge_sec_info* secinfo; struct sec_merge_hash_entry* next; } ;
typedef int bfd_vma ;
typedef int bfd_size_type ;
struct TYPE_5__ {int size; unsigned int entsize; struct sec_merge_hash_entry* first; } ;
struct TYPE_4__ {int size; int alignment_power; } ;


 struct sec_merge_hash_entry** FUNC_0 (int) ;
 int FUNC_1 (struct sec_merge_hash_entry**) ;
 scalar_t__ FUNC_2 (struct sec_merge_hash_entry*,struct sec_merge_hash_entry*) ;
 int FUNC_3 (struct sec_merge_hash_entry**,size_t,int,int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_4 (struct sec_merge_info *VAR_2)
{
  struct sec_merge_hash_entry **VAR_3, **VAR_4, *VAR_5;
  struct sec_merge_sec_info *VAR_6;
  bfd_size_type VAR_7, VAR_8;
  unsigned int VAR_9 = 0;


  VAR_8 = VAR_2->htab->size * sizeof (struct sec_merge_hash_entry *);
  VAR_3 = FUNC_0 (VAR_8);
  if (VAR_3 == ((void*)0))
    goto alloc_failure;

  for (VAR_5 = VAR_2->htab->first, VAR_4 = VAR_3; VAR_5; VAR_5 = VAR_5->next)
    if (VAR_5->alignment)
      {
 *VAR_4++ = VAR_5;

 VAR_5->len -= VAR_2->htab->entsize;
 if (VAR_9 != VAR_5->alignment)
   {
     if (VAR_9 == 0)
       VAR_9 = VAR_5->alignment;
     else
       VAR_9 = (unsigned) -1;
   }
      }

  VAR_2->htab->size = VAR_4 - VAR_3;
  if (VAR_2->htab->size != 0)
    {
      FUNC_3 (VAR_3, (size_t) VAR_2->htab->size,
      sizeof (struct sec_merge_hash_entry *),
      (VAR_9 != (unsigned) -1 && VAR_9 > VAR_2->htab->entsize
       ? VAR_1 : VAR_0));


      VAR_5 = *--VAR_4;
      VAR_5->len += VAR_2->htab->entsize;
      while (--VAR_4 >= VAR_3)
 {
   struct sec_merge_hash_entry *VAR_10 = *VAR_4;

   VAR_10->len += VAR_2->htab->entsize;
   if (VAR_5->alignment >= VAR_10->alignment
       && !((VAR_5->len - VAR_10->len) & (VAR_10->alignment - 1))
       && FUNC_2 (VAR_5, VAR_10))
     {
       VAR_10->u.suffix = VAR_5;
       VAR_10->alignment = 0;
     }
   else
     VAR_5 = VAR_10;
 }
    }

alloc_failure:
  if (VAR_3)
    FUNC_1 (VAR_3);


  VAR_7 = 0;
  VAR_6 = VAR_2->htab->first->secinfo;
  for (VAR_5 = VAR_2->htab->first; VAR_5; VAR_5 = VAR_5->next)
    {
      if (VAR_5->secinfo != VAR_6)
 {
   VAR_6->sec->size = VAR_7;
   VAR_6 = VAR_5->secinfo;
 }
      if (VAR_5->alignment)
 {
   if (VAR_5->secinfo->first_str == ((void*)0))
     {
       VAR_5->secinfo->first_str = VAR_5;
       VAR_7 = 0;
     }
   VAR_7 = (VAR_7 + VAR_5->alignment - 1) & ~((bfd_vma) VAR_5->alignment - 1);
   VAR_5->u.index = VAR_7;
   VAR_7 += VAR_5->len;
 }
    }
  VAR_6->sec->size = VAR_7;
  if (VAR_6->sec->alignment_power != 0)
    {
      bfd_size_type VAR_11 = (bfd_size_type) 1 << VAR_6->sec->alignment_power;
      VAR_6->sec->size = (VAR_6->sec->size + VAR_11 - 1) & -VAR_11;
    }



  for (VAR_4 = &VAR_2->htab->first, VAR_5 = *VAR_4; VAR_5; VAR_5 = VAR_5->next)
    if (VAR_5->alignment)
      VAR_4 = &VAR_5->next;
    else
      {
 *VAR_4 = VAR_5->next;
 if (VAR_5->len)
   {
     VAR_5->secinfo = VAR_5->u.suffix->secinfo;
     VAR_5->alignment = VAR_5->u.suffix->alignment;
     VAR_5->u.index = VAR_5->u.suffix->u.index + (VAR_5->u.suffix->len - VAR_5->len);
   }
      }
}
