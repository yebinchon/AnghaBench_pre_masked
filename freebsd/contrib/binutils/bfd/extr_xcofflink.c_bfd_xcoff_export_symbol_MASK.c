
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* string; } ;
struct TYPE_4__ {scalar_t__ type; TYPE_1__ root; } ;
struct xcoff_link_hash_entry {int flags; scalar_t__ smclas; struct xcoff_link_hash_entry* descriptor; TYPE_2__ root; } ;
struct bfd_link_info {int dummy; } ;
struct bfd_link_hash_entry {int dummy; } ;
typedef scalar_t__ bfd_size_type ;
typedef int bfd_boolean ;
typedef int bfd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 char* FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_7 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,char*) ;
 scalar_t__ FUNC_4 (char*) ;
 int FUNC_5 (struct bfd_link_info*) ;
 struct xcoff_link_hash_entry* FUNC_6 (int ,char*,int ,int ,int ) ;
 int FUNC_7 (struct bfd_link_info*,struct xcoff_link_hash_entry*) ;

bfd_boolean
FUNC_8 (bfd *VAR_8,
    struct bfd_link_info *VAR_9,
    struct bfd_link_hash_entry *VAR_10)
{
  struct xcoff_link_hash_entry *VAR_11 = (struct xcoff_link_hash_entry *) VAR_10;

  if (FUNC_0 (VAR_8) != VAR_7)
    return VAR_1;

  VAR_11->flags |= VAR_3;






  if ((VAR_11->flags & VAR_2) == 0
      && VAR_11->root.root.string[0] != '.')
    {
      char *VAR_12;
      struct xcoff_link_hash_entry *VAR_13;
      bfd_size_type VAR_14 = FUNC_4 (VAR_11->root.root.string) + 2;

      VAR_12 = FUNC_1 (VAR_14);
      if (VAR_12 == ((void*)0))
 return VAR_0;
      VAR_12[0] = '.';
      FUNC_3 (VAR_12 + 1, VAR_11->root.root.string);
      VAR_13 = FUNC_6 (FUNC_5 (VAR_9),
        VAR_12, VAR_0, VAR_0, VAR_1);
      FUNC_2 (VAR_12);
      if (VAR_13 != ((void*)0)
   && VAR_13->smclas == VAR_4
   && (VAR_13->root.type == VAR_5
       || VAR_13->root.type == VAR_6))
 {
   VAR_11->flags |= VAR_2;
   VAR_11->descriptor = VAR_13;
   VAR_13->descriptor = VAR_11;
 }
    }


  if (! FUNC_7 (VAR_9, VAR_11))
    return VAR_0;






  if ((VAR_11->flags & VAR_2) != 0)
    {
      if (! FUNC_7 (VAR_9, VAR_11->descriptor))
 return VAR_0;
    }

  return VAR_1;
}
