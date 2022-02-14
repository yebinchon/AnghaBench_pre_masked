
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_8__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_10__ ;


struct bfd_link_info {TYPE_2__* input_bfds; } ;
typedef int bfd_boolean ;
struct TYPE_14__ {struct TYPE_14__* link_next; } ;
typedef TYPE_2__ bfd ;
struct TYPE_15__ {scalar_t__ total_got_size; TYPE_2__* got_link_next; TYPE_1__* got; TYPE_2__* gotobj; } ;
struct TYPE_13__ {scalar_t__ size; } ;
struct TYPE_12__ {TYPE_2__* got_list; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,TYPE_2__*,scalar_t__) ;
 TYPE_10__* FUNC_3 (struct bfd_link_info*) ;
 TYPE_8__* FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (struct bfd_link_info*) ;
 scalar_t__ FUNC_6 (TYPE_2__*,TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*,TYPE_2__*) ;
 int FUNC_8 (int ,TYPE_2__*,scalar_t__) ;

__attribute__((used)) static bfd_boolean
FUNC_9 (struct bfd_link_info *VAR_3)
{
  bfd *VAR_4, *VAR_5, *VAR_6 = ((void*)0);

  VAR_5 = FUNC_3 (VAR_3)->got_list;



  if (VAR_5 == ((void*)0))
    {
      for (VAR_4 = VAR_3->input_bfds; VAR_4 ; VAR_4 = VAR_4->link_next)
 {
   bfd *VAR_7 = FUNC_4 (VAR_4)->gotobj;
   if (VAR_7 == ((void*)0))
     continue;


   FUNC_0 (VAR_7 == VAR_4);

          if (FUNC_4 (VAR_7)->total_got_size > VAR_1)
     {

       FUNC_2)
         (FUNC_1("%B: .got subsegment exceeds 64K (size %d)"),
          VAR_4, FUNC_4 (VAR_7)->total_got_size);
       return VAR_0;
     }

   if (VAR_5 == ((void*)0))
     VAR_5 = VAR_7;
   else
     FUNC_4(VAR_6)->got_link_next = VAR_7;
   VAR_6 = VAR_7;
 }


      if (VAR_5 == ((void*)0))
 return VAR_2;

      FUNC_3 (VAR_3)->got_list = VAR_5;
    }

  VAR_6 = VAR_5;
  VAR_4 = FUNC_4(VAR_6)->got_link_next;
  while (VAR_4 != ((void*)0))
    {
      if (FUNC_6 (VAR_6, VAR_4))
 {
   FUNC_7 (VAR_6, VAR_4);

   FUNC_4(VAR_4)->got->size = 0;
   VAR_4 = FUNC_4(VAR_4)->got_link_next;
   FUNC_4(VAR_6)->got_link_next = VAR_4;
 }
      else
 {
   VAR_6 = VAR_4;
   VAR_4 = FUNC_4(VAR_4)->got_link_next;
 }
    }



  FUNC_5 (VAR_3);

  return VAR_2;
}
