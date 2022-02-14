
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xcoff_link_hash_entry {int flags; } ;
struct bfd_link_info {int dummy; } ;
typedef int bfd_boolean ;
typedef int bfd ;
struct TYPE_2__ {int ldrel_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char const*) ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_4 (int *,struct bfd_link_info*,char const*,int ,int ,int ) ;
 int FUNC_5 (int ,char const*) ;
 TYPE_1__* FUNC_6 (struct bfd_link_info*) ;
 int FUNC_7 (struct bfd_link_info*,struct xcoff_link_hash_entry*) ;

bfd_boolean
FUNC_8 (bfd *VAR_6,
       struct bfd_link_info *VAR_7,
       const char *VAR_8)
{
  struct xcoff_link_hash_entry *VAR_9;

  if (FUNC_2 (VAR_6) != VAR_5)
    return VAR_1;

  VAR_9 = ((struct xcoff_link_hash_entry *)
       FUNC_4 (VAR_6, VAR_7, VAR_8, VAR_0, VAR_0,
         VAR_0));
  if (VAR_9 == ((void*)0))
    {
      FUNC_1) (FUNC_0("%s: no such symbol"), VAR_8);
      FUNC_3 (VAR_4);
      return VAR_0;
    }

  VAR_9->flags |= VAR_3 | VAR_2;
  ++FUNC_6 (VAR_7)->ldrel_count;


  if (! FUNC_7 (VAR_7, VAR_9))
    return VAR_0;

  return VAR_1;
}
