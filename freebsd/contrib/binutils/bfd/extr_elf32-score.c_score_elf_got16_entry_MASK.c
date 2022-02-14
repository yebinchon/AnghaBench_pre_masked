
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct score_got_info {int dummy; } ;
struct score_got_entry {int gotidx; } ;
struct bfd_link_info {int dummy; } ;
typedef int bfd_vma ;
typedef int bfd_boolean ;
typedef int bfd ;
typedef int asection ;
struct TYPE_2__ {int dynobj; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (struct bfd_link_info*) ;
 struct score_got_entry* FUNC_1 (int *,int *,struct score_got_info*,int *,int,int ,int *,int ) ;
 struct score_got_info* FUNC_2 (int ,int **) ;
 int FUNC_3 (int) ;

__attribute__((used)) static bfd_vma
FUNC_4 (bfd *VAR_2, bfd *VAR_3, struct bfd_link_info *VAR_4,
        bfd_vma VAR_5, bfd_boolean VAR_6)
{
  asection *VAR_7;
  struct score_got_info *VAR_8;
  struct score_got_entry *VAR_9;

  if (!VAR_6)
    {




      VAR_5 = FUNC_3 (VAR_5) << 16;
    }

  VAR_8 = FUNC_2 (FUNC_0 (VAR_4)->dynobj, &VAR_7);

  VAR_9 = FUNC_1 (VAR_2, VAR_3, VAR_8, VAR_7, VAR_5, 0, ((void*)0),
         VAR_1);
  if (VAR_9)
    return VAR_9->gotidx;
  else
    return VAR_0;
}
