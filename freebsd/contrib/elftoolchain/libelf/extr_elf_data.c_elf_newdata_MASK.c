
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_10__ {int d_align; int d_version; int d_type; scalar_t__ d_size; scalar_t__ d_off; int * d_buf; } ;
struct _Libelf_Data {TYPE_2__ d_data; } ;
struct TYPE_11__ {scalar_t__ e_kind; scalar_t__ e_rawfile; } ;
struct TYPE_9__ {scalar_t__ s_size; int s_data; TYPE_3__* s_elf; } ;
typedef TYPE_1__ Elf_Scn ;
typedef TYPE_2__ Elf_Data ;
typedef TYPE_3__ Elf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,struct _Libelf_Data*,int ) ;
 struct _Libelf_Data* FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int) ;
 int VAR_5 ;
 int FUNC_6 (TYPE_1__*,int ,int ) ;
 int * FUNC_7 (TYPE_1__*,int *) ;
 int VAR_6 ;

Elf_Data *
FUNC_8(Elf_Scn *VAR_7)
{
 Elf *VAR_8;
 struct _Libelf_Data *VAR_9;

 if (VAR_7 == ((void*)0) || (VAR_8 = VAR_7->s_elf) == ((void*)0)) {
  FUNC_1(VAR_0, 0);
  return (((void*)0));
 }

 FUNC_5(VAR_8->e_kind == VAR_3);





 if (VAR_8->e_rawfile && VAR_7->s_size > 0 && FUNC_2(&VAR_7->s_data))
  if (FUNC_7(VAR_7, ((void*)0)) == ((void*)0))
   return (((void*)0));

 if ((VAR_9 = FUNC_4(VAR_7)) == ((void*)0))
  return (((void*)0));

 FUNC_3(&VAR_7->s_data, VAR_9, VAR_5);

 VAR_9->d_data.d_align = 1;
 VAR_9->d_data.d_buf = ((void*)0);
 VAR_9->d_data.d_off = (uint64_t) ~0;
 VAR_9->d_data.d_size = 0;
 VAR_9->d_data.d_type = VAR_4;
 VAR_9->d_data.d_version = FUNC_0(VAR_6);

 (void) FUNC_6(VAR_7, VAR_1, VAR_2);

 return (&VAR_9->d_data);
}
