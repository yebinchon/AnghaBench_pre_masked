
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct coff_link_hash_entry {int dummy; } ;
struct bfd_link_info {int dummy; } ;
typedef scalar_t__ bfd_size_type ;
typedef int bfd ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int *,char*,char const*) ;
 char* FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct bfd_link_info*) ;
 struct coff_link_hash_entry* FUNC_5 (int ,char*,int ,int ,int ) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*,char*,char const*) ;
 scalar_t__ FUNC_8 (char const*) ;

__attribute__((used)) static struct coff_link_hash_entry *
FUNC_9 (struct bfd_link_info *VAR_3,
   const char *VAR_4,
   bfd *VAR_5)
{
  char *VAR_6;
  struct coff_link_hash_entry *VAR_7;
  bfd_size_type VAR_8 = FUNC_8 (VAR_4) + FUNC_8 (VAR_1) + 1;

  VAR_6 = FUNC_3 (VAR_8);

  FUNC_0 (VAR_6);

  FUNC_7 (VAR_6, VAR_1, VAR_4);

  VAR_7 = FUNC_5
    (FUNC_4 (VAR_3), VAR_6, VAR_0, VAR_0, VAR_2);

  if (VAR_7 == ((void*)0))

    FUNC_2 (FUNC_1("%B: unable to find THUMB glue '%s' for `%s'"),
   VAR_5, VAR_6, VAR_4);

  FUNC_6 (VAR_6);

  return VAR_7;
}
