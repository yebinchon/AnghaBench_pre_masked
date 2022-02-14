
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int ctf_id_t ;
struct TYPE_6__ {int ctf_flags; int * ctf_ptrtab; } ;
typedef TYPE_1__ ctf_file_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 size_t FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_2 (TYPE_1__**,int ) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (TYPE_1__*,int ) ;

ctf_id_t
FUNC_5(ctf_file_t *VAR_3, ctf_id_t VAR_4)
{
 ctf_file_t *VAR_5 = VAR_3;
 ctf_id_t VAR_6;

 if (FUNC_2(&VAR_3, VAR_4) == ((void*)0))
  return (VAR_0);

 if ((VAR_6 = VAR_3->ctf_ptrtab[FUNC_1(VAR_4)]) != 0)
  return (FUNC_0(VAR_6, (VAR_3->ctf_flags & VAR_2)));

 if ((VAR_4 = FUNC_4(VAR_3, VAR_4)) == VAR_0)
  return (FUNC_3(VAR_5, VAR_1));

 if (FUNC_2(&VAR_3, VAR_4) == ((void*)0))
  return (FUNC_3(VAR_5, VAR_1));

 if ((VAR_6 = VAR_3->ctf_ptrtab[FUNC_1(VAR_4)]) != 0)
  return (FUNC_0(VAR_6, (VAR_3->ctf_flags & VAR_2)));

 return (FUNC_3(VAR_5, VAR_1));
}
