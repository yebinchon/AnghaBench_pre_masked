
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int e_scn; } ;
struct TYPE_10__ {TYPE_1__ e_elf; } ;
struct TYPE_12__ {TYPE_2__ e_u; } ;
struct TYPE_11__ {size_t s_ndx; int s_rawdata; int s_data; TYPE_4__* s_elf; } ;
typedef TYPE_3__ Elf_Scn ;
typedef TYPE_4__ Elf ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int *,TYPE_3__*) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 TYPE_3__* FUNC_3 (size_t,int) ;
 int VAR_1 ;
 int VAR_2 ;

Elf_Scn *
FUNC_4(Elf *VAR_3, size_t VAR_4)
{
 Elf_Scn *VAR_5;

 if ((VAR_5 = FUNC_3((size_t) 1, sizeof(Elf_Scn))) == ((void*)0)) {
  FUNC_0(VAR_0, VAR_1);
  return (((void*)0));
 }

 VAR_5->s_elf = VAR_3;
 VAR_5->s_ndx = VAR_4;

 FUNC_2(&VAR_5->s_data);
 FUNC_2(&VAR_5->s_rawdata);

 FUNC_1(VAR_2, &VAR_3->e_u.e_elf.e_scn, VAR_5);

 return (VAR_5);
}
