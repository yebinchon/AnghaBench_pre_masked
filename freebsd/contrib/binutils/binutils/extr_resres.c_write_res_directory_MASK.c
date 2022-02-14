
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int windres_bfd ;
typedef int rc_uint_type ;
struct TYPE_11__ {unsigned long id; } ;
struct TYPE_13__ {TYPE_1__ u; int named; } ;
typedef TYPE_3__ const rc_res_id ;
struct TYPE_12__ {int res; TYPE_5__* dir; } ;
struct TYPE_14__ {TYPE_2__ u; scalar_t__ subdir; TYPE_3__ const id; struct TYPE_14__* next; } ;
typedef TYPE_4__ rc_res_entry ;
struct TYPE_15__ {TYPE_4__* entries; } ;
typedef TYPE_5__ rc_res_directory ;


 int FUNC_0 (int ,char*,int) ;
 int VAR_0 ;
 int FUNC_1 (int *,int,TYPE_3__ const*,TYPE_3__ const*,int ,int*) ;

__attribute__((used)) static rc_uint_type
FUNC_2 (windres_bfd *VAR_1, rc_uint_type VAR_2, const rc_res_directory *VAR_3,
       const rc_res_id *VAR_4, const rc_res_id *VAR_5, rc_uint_type *VAR_6,
       int VAR_7)
{
  const rc_res_entry *VAR_8;

  for (VAR_8 = VAR_3->entries; VAR_8 != ((void*)0); VAR_8 = VAR_8->next)
    {
      switch (VAR_7)
 {
 case 1:




   VAR_4 = &VAR_8->id;
   break;

 case 2:


   VAR_5 = &VAR_8->id;
   break;

 case 3:


   if (! VAR_8->id.named
       && VAR_8->id.u.id != (unsigned long) *VAR_6
       && (VAR_8->id.u.id & 0xffff) == VAR_8->id.u.id)
     {
       *VAR_6 = VAR_8->id.u.id;
     }
   break;

 default:
   break;
 }

      if (VAR_8->subdir)
 VAR_2 = FUNC_2 (VAR_1, VAR_2, VAR_8->u.dir, VAR_4, VAR_5, VAR_6,
       VAR_7 + 1);
      else
 {
   if (VAR_7 == 3)
     {





       VAR_2 = FUNC_1 (VAR_1, VAR_2, VAR_4, VAR_5, VAR_8->u.res,
           VAR_6);
     }
   else
     {
       FUNC_0 (VAR_0, "// Resource at unexpected level %d\n", VAR_7);
       VAR_2 = FUNC_1 (VAR_1, VAR_2, VAR_4, (rc_res_id *) ((void*)0),
           VAR_8->u.res, VAR_6);
     }
 }
    }

  return VAR_2;
}
