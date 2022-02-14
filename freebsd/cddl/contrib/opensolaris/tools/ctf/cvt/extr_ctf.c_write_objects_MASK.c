
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ushort_t ;
struct TYPE_5__ {char* ii_name; TYPE_1__* ii_dtype; } ;
typedef TYPE_2__ iidesc_t ;
typedef int id ;
typedef int ctf_buf_t ;
struct TYPE_4__ {int t_id; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int,char*,char*,int ) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static void
FUNC_3(iidesc_t *VAR_1, ctf_buf_t *VAR_2)
{
 ushort_t VAR_3 = (VAR_1 ? VAR_1->ii_dtype->t_id : 0);

 if (VAR_0) {
  FUNC_0(VAR_3);
 }

 FUNC_1(VAR_2, &VAR_3, sizeof (VAR_3));

 FUNC_2(3, "Wrote object %s (%d)\n", (VAR_1 ? VAR_1->ii_name : "(null)"), VAR_3);
}
