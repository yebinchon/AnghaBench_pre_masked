
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct score_got_info {int local_gotno; int global_gotno; TYPE_1__* global_gotsym; } ;
struct bfd_link_info {TYPE_2__* input_bfds; } ;
typedef int bfd_size_type ;
typedef int bfd_boolean ;
struct TYPE_11__ {TYPE_3__* sections; struct TYPE_11__* link_next; } ;
typedef TYPE_2__ bfd ;
struct TYPE_12__ {int flags; int size; struct TYPE_12__* next; } ;
typedef TYPE_3__ asection ;
struct TYPE_13__ {int dynsymcount; TYPE_2__* dynobj; } ;
struct TYPE_10__ {int dynindx; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_6__* FUNC_2 (struct bfd_link_info*) ;
 struct score_got_info* FUNC_3 (TYPE_2__*,TYPE_3__**) ;
 int FUNC_4 (struct score_got_info*) ;
 int FUNC_5 (struct bfd_link_info*,int) ;

__attribute__((used)) static bfd_boolean
FUNC_6 (bfd *VAR_4,
         struct bfd_link_info *VAR_5)
{
  bfd *VAR_6;
  asection *VAR_7;
  struct score_got_info *VAR_8;
  int VAR_9;
  bfd_size_type VAR_10 = 0;
  bfd_size_type VAR_11;
  bfd *VAR_12;

  VAR_6 = FUNC_2 (VAR_5)->dynobj;
  if (VAR_6 == ((void*)0))

    return VAR_3;

  VAR_8 = FUNC_3 (VAR_6, &VAR_7);
  if (VAR_7 == ((void*)0))
    return VAR_3;



  for (VAR_12 = VAR_5->input_bfds; VAR_12; VAR_12 = VAR_12->link_next)
    {
      asection *VAR_13;

      for (VAR_13 = VAR_12->sections;
    VAR_13;
    VAR_13 = VAR_13->next)
 {
   if ((VAR_13->flags & VAR_2) == 0)
     continue;
   VAR_10 += ((VAR_13->size + 0xf)
       &~ (bfd_size_type) 0xf);
 }
    }






  if (! FUNC_5 (VAR_5, 1))
    return VAR_0;

  if (VAR_8->global_gotsym != ((void*)0))
    VAR_9 = FUNC_2 (VAR_5)->dynsymcount - VAR_8->global_gotsym->dynindx;
  else


    VAR_9 = 0;


  VAR_10 += VAR_1 * VAR_9;



  VAR_11 = (VAR_10 >> 16) + 5;

  VAR_8->local_gotno += VAR_11;
  VAR_7->size += VAR_8->local_gotno * FUNC_1 (VAR_4);

  VAR_8->global_gotno = VAR_9;
  VAR_7->size += VAR_9 * FUNC_1 (VAR_4);

  FUNC_4 (VAR_8);

  if (VAR_7->size > FUNC_0 (VAR_4))
    {

    }

  return VAR_3;
}
