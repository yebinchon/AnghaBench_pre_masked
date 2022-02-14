
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint_t ;
typedef int uchar_t ;
struct TYPE_10__ {int cte_value; int cte_name; } ;
typedef TYPE_2__ ctf_enum_t ;
struct TYPE_12__ {int dmd_name; int dmd_value; } ;
struct TYPE_9__ {TYPE_4__ dtu_members; } ;
struct TYPE_11__ {TYPE_1__ dtd_u; } ;
typedef TYPE_3__ ctf_dtdef_t ;
typedef TYPE_4__ ctf_dmdef_t ;
typedef int cte ;


 int FUNC_0 (TYPE_2__*,int *,int) ;
 TYPE_4__* FUNC_1 (TYPE_4__*) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static uchar_t *
FUNC_3(ctf_dtdef_t *VAR_0, uint_t VAR_1, uchar_t *VAR_2)
{
 ctf_dmdef_t *VAR_3 = FUNC_1(&VAR_0->dtd_u.dtu_members);
 ctf_enum_t VAR_4;

 for (; VAR_3 != ((void*)0); VAR_3 = FUNC_1(VAR_3)) {
  VAR_4.cte_name = VAR_1;
  VAR_4.cte_value = VAR_3->dmd_value;
  VAR_1 += FUNC_2(VAR_3->dmd_name) + 1;
  FUNC_0(&VAR_4, VAR_2, sizeof (VAR_4));
  VAR_2 += sizeof (VAR_4);
 }

 return (VAR_2);
}
