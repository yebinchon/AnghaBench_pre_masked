
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int windres_bfd ;
typedef int unichar ;
struct bin_res_id {struct bin_res_id* id; struct bin_res_id* sig; } ;
typedef int rc_uint_type ;
struct TYPE_5__ {int* name; } ;
struct TYPE_6__ {int id; TYPE_1__ n; } ;
struct TYPE_7__ {TYPE_2__ u; int named; } ;
typedef TYPE_3__ rc_res_id ;
typedef struct bin_res_id bfd_byte ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *,struct bin_res_id*,int,int) ;
 int FUNC_2 (int*) ;
 int FUNC_3 (int *,struct bin_res_id*,int) ;

__attribute__((used)) static rc_uint_type
FUNC_4 (windres_bfd *VAR_1, rc_uint_type VAR_2, rc_res_id VAR_3)
{
  if (! VAR_3.named)
    {
      if (VAR_1)
 {
   struct bin_res_id VAR_4;

   FUNC_3 (VAR_1, VAR_4.sig, 0xffff);
   FUNC_3 (VAR_1, VAR_4.id, VAR_3.u.id);
   FUNC_1 (VAR_1, &VAR_4, VAR_2, VAR_0);
 }
      VAR_2 += VAR_0;
    }
  else
    {
      rc_uint_type VAR_5 = (VAR_3.u.n.name ? FUNC_2 (VAR_3.u.n.name) : 0);
      if (VAR_1)
 {
   bfd_byte *VAR_6 = (bfd_byte *) FUNC_0 ((VAR_5 + 1) * sizeof (unichar));
   rc_uint_type VAR_7;
   for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++)
     FUNC_3 (VAR_1, VAR_6 + (VAR_7 * sizeof (unichar)), VAR_3.u.n.name[VAR_7]);
   FUNC_3 (VAR_1, VAR_6 + (VAR_5 * sizeof (unichar)), 0);
   FUNC_1 (VAR_1, VAR_6, VAR_2, (VAR_5 + 1) * sizeof (unichar));
    }
      VAR_2 += (rc_uint_type) ((VAR_5 + 1) * sizeof (unichar));
    }
  return VAR_2;
}
