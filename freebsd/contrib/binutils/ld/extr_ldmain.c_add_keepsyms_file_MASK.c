
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bfd_hash_table {int dummy; } ;
struct bfd_hash_entry {int dummy; } ;
struct TYPE_2__ {scalar_t__ strip; void* keep_hash; } ;
typedef int FILE ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int VAR_2 ;
 int * FUNC_2 (void*,char*,int ,int ) ;
 int VAR_3 ;
 int FUNC_3 (void*,int ,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,...) ;
 int * FUNC_6 (char const*,char*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int *) ;
 TYPE_1__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 void* FUNC_9 (size_t) ;
 char* FUNC_10 (char*,size_t) ;

void
FUNC_11 (const char *VAR_7)
{
  FILE *VAR_8;
  char *VAR_9;
  size_t VAR_10;
  int VAR_11;

  if (VAR_4.strip == VAR_6)
    FUNC_5 (FUNC_1("%X%P: error: duplicate retain-symbols-file\n"));

  VAR_8 = FUNC_6 (VAR_7, "r");
  if (VAR_8 == ((void*)0))
    {
      FUNC_4 (VAR_2);
      FUNC_5 ("%X%P: %s: %E\n", VAR_7);
      return;
    }

  VAR_4.keep_hash = FUNC_9 (sizeof (struct bfd_hash_table));
  if (!FUNC_3 (VAR_4.keep_hash, VAR_3,
       sizeof (struct bfd_hash_entry)))
    FUNC_5 (FUNC_1("%P%F: bfd_hash_table_init failed: %E\n"));

  VAR_10 = 100;
  VAR_9 = FUNC_9 (VAR_10);

  VAR_11 = FUNC_8 (VAR_8);
  while (VAR_11 != VAR_0)
    {
      while (FUNC_0 (VAR_11))
 VAR_11 = FUNC_8 (VAR_8);

      if (VAR_11 != VAR_0)
 {
   size_t VAR_12 = 0;

   while (! FUNC_0 (VAR_11) && VAR_11 != VAR_0)
     {
       VAR_9[VAR_12] = VAR_11;
       ++VAR_12;
       if (VAR_12 >= VAR_10)
  {
    VAR_10 *= 2;
    VAR_9 = FUNC_10 (VAR_9, VAR_10);
  }
       VAR_11 = FUNC_8 (VAR_8);
     }

   VAR_9[VAR_12] = '\0';

   if (FUNC_2 (VAR_4.keep_hash, VAR_9, VAR_1, VAR_1) == ((void*)0))
     FUNC_5 (FUNC_1("%P%F: bfd_hash_lookup for insertion failed: %E\n"));
 }
    }

  if (VAR_4.strip != VAR_5)
    FUNC_5 (FUNC_1("%P: `-retain-symbols-file' overrides `-s' and `-S'\n"));

  FUNC_7 (VAR_9);
  VAR_4.strip = VAR_6;
}
