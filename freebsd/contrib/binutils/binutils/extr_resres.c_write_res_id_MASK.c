
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
struct TYPE_5__ {int length; int* name; } ;
struct TYPE_6__ {int id; TYPE_1__ n; } ;
struct TYPE_7__ {TYPE_2__ u; scalar_t__ named; } ;
typedef TYPE_3__ rc_res_id ;
typedef scalar_t__ bfd_signed_vma ;
typedef struct bin_res_id bfd_byte ;


 int VAR_0 ;
 int FUNC_0 (int *,struct bin_res_id*,int,int) ;
 int FUNC_1 (int *,struct bin_res_id*,int) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static rc_uint_type
FUNC_3 (windres_bfd *VAR_1, rc_uint_type VAR_2, const rc_res_id *VAR_3)
{
  if (VAR_3->named)
    {
      rc_uint_type VAR_4 = (((bfd_signed_vma) VAR_3->u.n.length < 0 ? 0 : VAR_3->u.n.length) + 1);
      if (VAR_1)
 {
   rc_uint_type VAR_5;
   bfd_byte *VAR_6 = (bfd_byte *) FUNC_2 (VAR_4 * sizeof (unichar));
   for (VAR_5 = 0; VAR_5 < (VAR_4 - 1); VAR_5++)
     FUNC_1 (VAR_1, VAR_6 + (VAR_5 * sizeof (unichar)), VAR_3->u.n.name[VAR_5]);
   FUNC_1 (VAR_1, VAR_6 + (VAR_5 * sizeof (unichar)), 0);
   FUNC_0 (VAR_1, VAR_6, VAR_2, (VAR_4 * sizeof (unichar)));
 }
      VAR_2 += (VAR_4 * sizeof (unichar));
    }
  else
    {
      if (VAR_1)
 {
   struct bin_res_id VAR_7;
   FUNC_1 (VAR_1, VAR_7.sig, 0xffff);
   FUNC_1 (VAR_1, VAR_7.id, VAR_3->u.id);
   FUNC_0 (VAR_1, &VAR_7, VAR_2, VAR_0);
 }
      VAR_2 += VAR_0;
    }
  return VAR_2;
}
