
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int dtd_type; } ;
struct TYPE_9__ {int ctf_flags; scalar_t__ ctf_dtoldid; scalar_t__ ctf_dtnextid; TYPE_2__ ctf_dtdefs; } ;
typedef TYPE_1__ ctf_file_t ;
typedef TYPE_2__ ctf_dtdef_t ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*,TYPE_2__*) ;
 TYPE_2__* FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_1__*,int ) ;

int
FUNC_4(ctf_file_t *VAR_3)
{
 ctf_dtdef_t *VAR_4, *VAR_5;

 if (!(VAR_3->ctf_flags & VAR_2))
  return (FUNC_3(VAR_3, VAR_0));

 if (!(VAR_3->ctf_flags & VAR_1))
  return (0);

 for (VAR_4 = FUNC_2(&VAR_3->ctf_dtdefs); VAR_4 != ((void*)0); VAR_4 = VAR_5) {
  VAR_5 = FUNC_2(VAR_4);
  if (FUNC_0(VAR_4->dtd_type) <= VAR_3->ctf_dtoldid)
   continue;

  FUNC_1(VAR_3, VAR_4);
 }

 VAR_3->ctf_dtnextid = VAR_3->ctf_dtoldid + 1;
 VAR_3->ctf_flags &= ~VAR_1;

 return (0);
}
