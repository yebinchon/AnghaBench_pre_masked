
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xcoff_link_hash_entry {int flags; } ;
struct bfd_link_info {int dummy; } ;
typedef int bfd_boolean ;
typedef int bfd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct bfd_link_info*) ;
 struct xcoff_link_hash_entry* FUNC_2 (int ,char const*,int ,int ,int ) ;

bfd_boolean
FUNC_3 (bfd *VAR_4,
      struct bfd_link_info *VAR_5,
      const char *VAR_6)
{
  struct xcoff_link_hash_entry *VAR_7;

  if (FUNC_0 (VAR_4) != VAR_3)
    return VAR_1;

  VAR_7 = FUNC_2 (FUNC_1 (VAR_5), VAR_6, VAR_1, VAR_1,
         VAR_0);
  if (VAR_7 == ((void*)0))
    return VAR_0;

  VAR_7->flags |= VAR_2;

  return VAR_1;
}
