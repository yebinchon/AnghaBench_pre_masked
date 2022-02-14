
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uchar_t ;
struct TYPE_9__ {int * dmd_name; } ;
struct TYPE_7__ {TYPE_3__ dtu_members; } ;
struct TYPE_8__ {TYPE_1__ dtd_u; } ;
typedef TYPE_2__ ctf_dtdef_t ;
typedef TYPE_3__ ctf_dmdef_t ;


 int FUNC_0 (int *,int *,size_t) ;
 TYPE_3__* FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static uchar_t *
FUNC_3(ctf_dtdef_t *VAR_0, uchar_t *VAR_1)
{
 ctf_dmdef_t *VAR_2 = FUNC_1(&VAR_0->dtd_u.dtu_members);
 size_t VAR_3;

 for (; VAR_2 != ((void*)0); VAR_2 = FUNC_1(VAR_2)) {
  if (VAR_2->dmd_name == ((void*)0))
   continue;
  VAR_3 = FUNC_2(VAR_2->dmd_name) + 1;
  FUNC_0(VAR_2->dmd_name, VAR_1, VAR_3);
  VAR_1 += VAR_3;
 }

 return (VAR_1);
}
