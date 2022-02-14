
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ e_cmd; scalar_t__ e_kind; size_t e_rawsize; int * e_rawfile; } ;
typedef TYPE_1__ Elf ;


 int VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ,int ) ;
 size_t VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int) ;

char *
FUNC_2(Elf *VAR_8, size_t *VAR_9)
{

 if (VAR_8 == ((void*)0)) {
  FUNC_0(VAR_0, 0);
  goto error;
 }

 if (VAR_8->e_cmd == VAR_3 && VAR_8->e_rawfile == ((void*)0)) {
  FUNC_0(VAR_7, 0);
  goto error;
 }

 FUNC_1(VAR_8->e_kind != VAR_4 || VAR_8->e_cmd == VAR_2);

 if (VAR_9) {
  if (VAR_8->e_kind == VAR_4)
   *VAR_9 = VAR_6;
  else if (VAR_8->e_kind == VAR_5)
   *VAR_9 = VAR_1;
  else
   *VAR_9 = VAR_8->e_rawsize;
 }

 return ((char *) VAR_8->e_rawfile);

 error:
 if (VAR_9)
  *VAR_9 = 0;
 return (((void*)0));
}
