
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int ulong_t ;
struct TYPE_16__ {char* t_name; int t_type; int t_id; TYPE_7__* t_emem; TYPE_6__* t_members; TYPE_5__* t_ardef; TYPE_3__* t_fndef; TYPE_1__* t_tdesc; } ;
typedef TYPE_8__ tdesc_t ;
struct TYPE_15__ {char* el_name; } ;
struct TYPE_14__ {char* ml_name; } ;
struct TYPE_13__ {int ad_nelems; TYPE_4__* ad_contents; } ;
struct TYPE_12__ {char* t_name; } ;
struct TYPE_11__ {int fn_nargs; int fn_vargs; TYPE_2__* fn_ret; } ;
struct TYPE_10__ {char* t_name; } ;
struct TYPE_9__ {char* t_name; } ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (char*,int,int ) ;

int
FUNC_2(int VAR_0, void *VAR_1)
{
 tdesc_t *VAR_2 = VAR_1;
 char *VAR_3 = ((void*)0);
 ulong_t VAR_4 = 0;

 if (VAR_2->t_name)
  VAR_3 = VAR_2->t_name;
 else {
  switch (VAR_2->t_type) {
  case 133:
  case 130:
  case 128:
  case 136:
  case 132:
   VAR_3 = VAR_2->t_tdesc->t_name;
   break;
  case 134:
   VAR_4 = VAR_2->t_fndef->fn_nargs +
       VAR_2->t_fndef->fn_vargs;
   VAR_3 = VAR_2->t_fndef->fn_ret->t_name;
   break;
  case 137:
   VAR_4 = VAR_2->t_ardef->ad_nelems;
   VAR_3 = VAR_2->t_ardef->ad_contents->t_name;
   break;
  case 131:
  case 129:






   if (VAR_2->t_members != ((void*)0))
    VAR_3 = VAR_2->t_members->ml_name;
   break;
  case 135:

   VAR_3 = VAR_2->t_emem->el_name;
   break;
  default:




   FUNC_1("Unexpected unnamed %d tdesc (ID %d)\n",
       VAR_2->t_type, VAR_2->t_id);
  }
 }

 if (VAR_3)
  return (FUNC_0(VAR_0, VAR_3));

 return (VAR_4 % VAR_0);
}
