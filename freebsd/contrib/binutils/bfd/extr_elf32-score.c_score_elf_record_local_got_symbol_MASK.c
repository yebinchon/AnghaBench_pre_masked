
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct score_got_info {int local_gotno; int got_entries; } ;
struct TYPE_2__ {int addend; } ;
struct score_got_entry {long symndx; scalar_t__ gotidx; TYPE_1__ d; int * abfd; } ;
typedef int entry ;
typedef int bfd_vma ;
typedef int bfd_boolean ;
typedef int bfd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct score_got_entry* FUNC_0 (int *,int) ;
 scalar_t__ FUNC_1 (int ,struct score_got_entry*,int ) ;
 int FUNC_2 (struct score_got_entry*,struct score_got_entry*,int) ;

__attribute__((used)) static bfd_boolean
FUNC_3 (bfd *VAR_3,
                                   long VAR_4,
                                   bfd_vma VAR_5,
         struct score_got_info *VAR_6)
{
  struct score_got_entry VAR_7, **VAR_8;

  VAR_7.abfd = VAR_3;
  VAR_7.symndx = VAR_4;
  VAR_7.d.addend = VAR_5;
  VAR_8 = (struct score_got_entry **)FUNC_1 (VAR_6->got_entries, &VAR_7, VAR_1);

  if (*VAR_8)
    return VAR_2;

  VAR_7.gotidx = VAR_6->local_gotno++;

  *VAR_8 = FUNC_0 (VAR_3, sizeof(VAR_7));
  if (! *VAR_8)
    return VAR_0;

  FUNC_2 (*VAR_8, &VAR_7, sizeof (VAR_7));

  return VAR_2;
}
