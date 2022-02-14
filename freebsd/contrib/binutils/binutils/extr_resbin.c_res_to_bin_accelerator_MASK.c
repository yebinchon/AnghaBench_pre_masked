
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int windres_bfd ;
struct bin_accelerator {int pad; int id; int key; int flags; } ;
typedef int rc_uint_type ;
struct TYPE_3__ {int flags; int key; int id; struct TYPE_3__* next; } ;
typedef TYPE_1__ rc_accelerator ;
typedef int bindata ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,struct bin_accelerator*,int ,scalar_t__) ;
 int FUNC_1 (int *,int ,int) ;

__attribute__((used)) static rc_uint_type
FUNC_2 (windres_bfd *VAR_2, rc_uint_type VAR_3,
   const rc_accelerator *VAR_4)
{
  bindata *VAR_5, **VAR_6;
  const rc_accelerator *VAR_7;

  VAR_5 = ((void*)0);
  VAR_6 = &VAR_5;

  for (VAR_7 = VAR_4; VAR_7 != ((void*)0); VAR_7 = VAR_7->next)
    {
      if (VAR_2)
 {
   struct bin_accelerator VAR_8;

   FUNC_1 (VAR_2, VAR_8.flags, VAR_7->flags | (VAR_7->next != ((void*)0) ? 0 : VAR_0));
   FUNC_1 (VAR_2, VAR_8.key, VAR_7->key);
   FUNC_1 (VAR_2, VAR_8.id, VAR_7->id);
   FUNC_1 (VAR_2, VAR_8.pad, 0);
   FUNC_0 (VAR_2, &VAR_8, VAR_3, VAR_1);
    }
      VAR_3 += VAR_1;
    }
  return VAR_3;
}
