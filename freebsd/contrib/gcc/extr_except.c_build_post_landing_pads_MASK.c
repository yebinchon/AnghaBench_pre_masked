
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int * tree ;
struct TYPE_11__ {int filter; } ;
struct TYPE_9__ {struct eh_region* catch; } ;
struct TYPE_8__ {int * filter_list; int * type_list; struct eh_region* next_catch; } ;
struct TYPE_12__ {TYPE_4__ allowed; TYPE_2__ try; TYPE_1__ catch; } ;
struct eh_region {int region_number; int type; void* label; void* post_landing_pad; void* resume; TYPE_5__ u; } ;
typedef int rtx ;
struct TYPE_14__ {TYPE_3__* eh; } ;
struct TYPE_13__ {int (* eh_return_filter_mode ) () ;} ;
struct TYPE_10__ {int last_region_number; int filter; int region_array; } ;


 int VAR_0 ;






 int FUNC_0 (int ) ;
 int VAR_1 ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct eh_region* FUNC_3 (int ,int ,int) ;
 int VAR_2 ;
 TYPE_7__* VAR_3 ;
 int VAR_4 ;
 int FUNC_4 () ;
 int FUNC_5 (int ,int ,int ,int ,int ,int ,void*) ;
 int FUNC_6 (void*) ;
 void* FUNC_7 (int ) ;
 int FUNC_8 (void*) ;
 int FUNC_9 (int ,void*) ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 void* FUNC_12 () ;
 int FUNC_13 (int ,int) ;
 int FUNC_14 () ;
 int FUNC_15 () ;
 int FUNC_16 () ;
 int FUNC_17 () ;
 TYPE_6__ VAR_5 ;
 int FUNC_18 (int ,int ) ;

__attribute__((used)) static void
FUNC_19 (void)
{
  int VAR_6;

  for (VAR_6 = VAR_3->eh->last_region_number; VAR_6 > 0; --VAR_6)
    {
      struct eh_region *VAR_7;
      rtx VAR_8;

      VAR_7 = FUNC_3 (VAR_4, VAR_3->eh->region_array, VAR_6);

      if (!VAR_7 || VAR_7->region_number != VAR_6)
 continue;

      switch (VAR_7->type)
 {
 case 128:






   VAR_7->post_landing_pad = FUNC_12 ();

   FUNC_15 ();

   FUNC_8 (VAR_7->post_landing_pad);




   {
     struct eh_region *VAR_9;
     for (VAR_9 = VAR_7->u.try.catch; VAR_9 ; VAR_9 = VAR_9->u.catch.next_catch)
       {
  if (VAR_9->u.catch.type_list == ((void*)0))
    FUNC_6 (VAR_9->label);
  else
    {



      tree VAR_10 = VAR_9->u.catch.type_list;
      tree VAR_11 = VAR_9->u.catch.filter_list;

      for (; VAR_10; )
        {
   FUNC_5
     (VAR_3->eh->filter,
      FUNC_0 (FUNC_18 (FUNC_2 (VAR_11), 0)),
      VAR_0, VAR_1,
      VAR_5.eh_return_filter_mode (), 0, VAR_9->label);

   VAR_10 = FUNC_1 (VAR_10);
   VAR_11 = FUNC_1 (VAR_11);
        }
    }
       }
   }




   VAR_7->resume
     = FUNC_7 (FUNC_13 (VAR_2, VAR_7->region_number));
   FUNC_4 ();

   VAR_8 = FUNC_14 ();
   FUNC_10 ();

   FUNC_9 (VAR_8, VAR_7->u.try.catch->label);

   break;

 case 133:
   VAR_7->post_landing_pad = FUNC_12 ();

   FUNC_15 ();

   FUNC_8 (VAR_7->post_landing_pad);

   FUNC_5 (VAR_3->eh->filter,
       FUNC_0 (VAR_7->u.allowed.filter),
       VAR_0, VAR_1,
       VAR_5.eh_return_filter_mode (), 0, VAR_7->label);




   VAR_7->resume
     = FUNC_7 (FUNC_13 (VAR_2, VAR_7->region_number));
   FUNC_4 ();

   VAR_8 = FUNC_14 ();
   FUNC_10 ();

   FUNC_9 (VAR_8, VAR_7->label);
   break;

 case 131:
 case 130:
   VAR_7->post_landing_pad = VAR_7->label;
   break;

 case 132:
 case 129:

   break;

 default:
   FUNC_11 ();
 }
    }
}
