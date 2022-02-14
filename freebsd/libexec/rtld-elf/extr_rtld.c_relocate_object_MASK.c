
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int relocated; int version; int magic; int mainprog; scalar_t__ bind_now; scalar_t__ textrel; int path; scalar_t__ valid_hash_gnu; scalar_t__ valid_hash_sysv; int * strtab; int * symtab; } ;
typedef int RtldLockState ;
typedef TYPE_1__ Obj_Entry ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int,int *) ;
 scalar_t__ FUNC_5 (TYPE_1__*,TYPE_1__*,int,int *) ;
 int FUNC_6 (TYPE_1__*,int,int *) ;
 scalar_t__ FUNC_7 (TYPE_1__*,int) ;

__attribute__((used)) static int
FUNC_8(Obj_Entry *VAR_2, bool VAR_3, Obj_Entry *VAR_4,
    int VAR_5, RtldLockState *VAR_6)
{

 if (VAR_2->relocated)
  return (0);
 VAR_2->relocated = 1;
 if (VAR_2 != VAR_4)
  FUNC_1("relocating \"%s\"", VAR_2->path);

 if (VAR_2->symtab == ((void*)0) || VAR_2->strtab == ((void*)0) ||
     !(VAR_2->valid_hash_sysv || VAR_2->valid_hash_gnu)) {
  FUNC_0("%s: Shared object has no run-time symbol table",
       VAR_2->path);
  return (-1);
 }


 if (VAR_2->textrel && FUNC_7(VAR_2, 1) != 0)
  return (-1);


 if (FUNC_5(VAR_2, VAR_4, VAR_5, VAR_6))
  return (-1);


 if (VAR_2->textrel && FUNC_7(VAR_2, 0) != 0)
  return (-1);


 FUNC_2(VAR_2);


 if (FUNC_6(VAR_2, VAR_5, VAR_6) == -1)
  return (-1);

 if ((VAR_2->bind_now || VAR_3) && FUNC_4(VAR_2, VAR_5,
     VAR_6) == -1)
  return (-1);

 if (!VAR_2->mainprog && FUNC_3(VAR_2) == -1)
  return (-1);






 VAR_2->magic = VAR_0;
 VAR_2->version = VAR_1;

 return (0);
}
