
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sec_merge_sec_info {TYPE_3__* sec; } ;
struct TYPE_5__ {char* string; } ;
struct sec_merge_hash_entry {int alignment; int len; TYPE_2__ root; struct sec_merge_hash_entry* next; struct sec_merge_sec_info* secinfo; } ;
typedef int bfd_size_type ;
typedef int bfd_boolean ;
typedef int bfd ;
struct TYPE_6__ {int size; TYPE_1__* output_section; } ;
typedef TYPE_3__ asection ;
struct TYPE_4__ {int alignment_power; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*,int,int *) ;
 char* FUNC_1 (int) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static bfd_boolean
FUNC_3 (bfd *VAR_2, struct sec_merge_hash_entry *VAR_3)
{
  struct sec_merge_sec_info *VAR_4 = VAR_3->secinfo;
  asection *VAR_5 = VAR_4->sec;
  char *VAR_6 = ((void*)0);
  bfd_size_type VAR_7 = 0;
  int VAR_8 = VAR_5->output_section->alignment_power;

  if (VAR_8)
    {
      VAR_6 = FUNC_1 ((bfd_size_type) 1 << VAR_8);
      if (VAR_6 == ((void*)0))
 return VAR_0;
    }

  for (; VAR_3 != ((void*)0) && VAR_3->secinfo == VAR_4; VAR_3 = VAR_3->next)
    {
      const char *VAR_9;
      bfd_size_type VAR_10;

      VAR_10 = -VAR_7 & (VAR_3->alignment - 1);
      if (VAR_10 != 0)
 {
   if (FUNC_0 (VAR_6, VAR_10, VAR_2) != VAR_10)
     goto err;
   VAR_7 += VAR_10;
 }

      VAR_9 = VAR_3->root.string;
      VAR_10 = VAR_3->len;

      if (FUNC_0 (VAR_9, VAR_10, VAR_2) != VAR_10)
 goto err;

      VAR_7 += VAR_10;
    }


  VAR_7 = VAR_5->size - VAR_7;
  if (VAR_7 != 0
      && FUNC_0 (VAR_6, VAR_7, VAR_2) != VAR_7)
    goto err;

  if (VAR_6 != ((void*)0))
    FUNC_2 (VAR_6);
  return VAR_1;

 err:
  if (VAR_6 != ((void*)0))
    FUNC_2 (VAR_6);
  return VAR_0;
}
