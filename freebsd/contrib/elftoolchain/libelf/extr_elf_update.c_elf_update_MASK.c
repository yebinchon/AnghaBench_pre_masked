
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct _Elf_Extent_List {int dummy; } ;
typedef scalar_t__ off_t ;
struct TYPE_5__ {scalar_t__ e_kind; int e_class; scalar_t__ e_version; scalar_t__ e_cmd; scalar_t__ e_fd; int e_flags; } ;
typedef scalar_t__ Elf_Cmd ;
typedef TYPE_1__ Elf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ,int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (struct _Elf_Extent_List*) ;
 int FUNC_2 (struct _Elf_Extent_List*) ;
 scalar_t__ FUNC_3 (TYPE_1__*,struct _Elf_Extent_List*) ;
 scalar_t__ FUNC_4 (TYPE_1__*,scalar_t__,struct _Elf_Extent_List*) ;

off_t
FUNC_5(Elf *VAR_13, Elf_Cmd VAR_14)
{
 int VAR_15;
 off_t VAR_16;
 struct _Elf_Extent_List VAR_17;

 VAR_16 = (off_t) -1;

 if (VAR_13 == ((void*)0) || VAR_13->e_kind != VAR_7 ||
     (VAR_14 != VAR_4 && VAR_14 != VAR_6)) {
  FUNC_0(VAR_0, 0);
  return (VAR_16);
 }

 if ((VAR_15 = VAR_13->e_class) != VAR_2 && VAR_15 != VAR_3) {
  FUNC_0(VAR_1, 0);
  return (VAR_16);
 }

 if (VAR_13->e_version == VAR_9)
  VAR_13->e_version = VAR_8;

 if (VAR_14 == VAR_6 && VAR_13->e_cmd == VAR_5) {
  FUNC_0(VAR_11, 0);
  return (VAR_16);
 }

 FUNC_1(&VAR_17);

 if ((VAR_16 = FUNC_3(VAR_13, &VAR_17)) < 0)
  goto done;

 if (VAR_14 == VAR_4)
  goto done;

 if (VAR_13->e_fd < 0) {
  VAR_16 = (off_t) -1;
  FUNC_0(VAR_12, 0);
  goto done;
 }

 VAR_16 = FUNC_4(VAR_13, VAR_16, &VAR_17);

done:
 FUNC_2(&VAR_17);
 VAR_13->e_flags &= ~VAR_10;
 return (VAR_16);
}
