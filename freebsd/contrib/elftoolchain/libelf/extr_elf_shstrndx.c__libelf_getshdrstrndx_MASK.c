
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {size_t e_strndx; } ;
struct TYPE_6__ {TYPE_2__ e_elf; } ;
struct TYPE_8__ {scalar_t__ e_kind; int e_class; TYPE_1__ e_u; } ;
typedef TYPE_3__ Elf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,int ) ;
 void* FUNC_1 (TYPE_3__*,int,int ) ;

__attribute__((used)) static int
FUNC_2(Elf *VAR_4, size_t *VAR_5)
{
 void *VAR_6;
 int VAR_7;

 if (VAR_4 == ((void*)0) || VAR_4->e_kind != VAR_3 ||
     ((VAR_7 = VAR_4->e_class) != VAR_1 && VAR_7 != VAR_2)) {
  FUNC_0(VAR_0, 0);
  return (-1);
 }

 if ((VAR_6 = FUNC_1(VAR_4, VAR_7, 0)) == ((void*)0))
  return (-1);

 *VAR_5 = VAR_4->e_u.e_elf.e_strndx;

 return (0);
}
