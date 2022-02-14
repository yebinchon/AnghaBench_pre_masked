
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ ctf_refcnt; scalar_t__ ctf_dmodel; struct TYPE_6__* ctf_parent; int ctf_flags; } ;
typedef TYPE_1__ ctf_file_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ) ;

int
FUNC_2(ctf_file_t *VAR_3, ctf_file_t *VAR_4)
{
 if (VAR_3 == ((void*)0) || VAR_3 == VAR_4 || (VAR_4 != ((void*)0) && VAR_4->ctf_refcnt == 0))
  return (FUNC_1(VAR_3, VAR_1));

 if (VAR_4 != ((void*)0) && VAR_4->ctf_dmodel != VAR_3->ctf_dmodel)
  return (FUNC_1(VAR_3, VAR_0));

 if (VAR_3->ctf_parent != ((void*)0))
  FUNC_0(VAR_3->ctf_parent);

 if (VAR_4 != ((void*)0)) {
  VAR_3->ctf_flags |= VAR_2;
  VAR_4->ctf_refcnt++;
 }

 VAR_3->ctf_parent = VAR_4;
 return (0);
}
