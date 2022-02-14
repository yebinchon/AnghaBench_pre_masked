
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int dt_idhash_t ;
struct TYPE_3__ {int di_flags; } ;
typedef TYPE_1__ dt_ident_t ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_0(dt_idhash_t *VAR_2, dt_ident_t *VAR_3, void *VAR_4)
{
 size_t *VAR_5 = VAR_4;

 if (VAR_3->di_flags & (VAR_0 | VAR_1))
  (*VAR_5)++;

 return (0);
}
