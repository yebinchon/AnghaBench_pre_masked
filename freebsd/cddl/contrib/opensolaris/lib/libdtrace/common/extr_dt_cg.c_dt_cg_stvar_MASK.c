
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t const uint_t ;
struct TYPE_3__ {int di_flags; scalar_t__ di_kind; } ;
typedef TYPE_1__ dt_ident_t ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static uint_t
FUNC_0(const dt_ident_t *VAR_3)
{
 static const uint_t VAR_4[] = { 132, 129, 133 };
 static const uint_t VAR_5[] = { 131, 128, 130 };

 uint_t VAR_6 = (((VAR_3->di_flags & VAR_1) != 0) << 1) |
     ((VAR_3->di_flags & VAR_2) != 0);

 return (VAR_3->di_kind == VAR_0 ? VAR_4[VAR_6] : VAR_5[VAR_6]);
}
