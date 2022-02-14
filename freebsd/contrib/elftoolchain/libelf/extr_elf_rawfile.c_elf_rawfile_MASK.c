
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t e_rawsize; unsigned char* e_rawfile; scalar_t__ e_cmd; } ;
typedef TYPE_1__ Elf ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int VAR_2 ;

char *
FUNC_1(Elf *VAR_3, size_t *VAR_4)
{
 size_t VAR_5;
 unsigned char *VAR_6;

 VAR_5 = VAR_3 ? VAR_3->e_rawsize : 0;
 VAR_6 = ((void*)0);

 if (VAR_3 == ((void*)0))
  FUNC_0(VAR_0, 0);
 else if ((VAR_6 = VAR_3->e_rawfile) == ((void*)0) && VAR_3->e_cmd == VAR_1)
  FUNC_0(VAR_2, 0);

 if (VAR_4)
  *VAR_4 = VAR_5;

 return ((char *) VAR_6);
}
