
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int tdesc_t ;
struct TYPE_4__ {int * dw_long; int dw_ptrsz; } ;
typedef TYPE_1__ dwarf_t ;


 int VAR_0 ;
 int * FUNC_0 (TYPE_1__*,int ,char*,int ) ;

__attribute__((used)) static tdesc_t *
FUNC_1(dwarf_t *VAR_1)
{
 if (VAR_1->dw_long == ((void*)0)) {
  VAR_1->dw_long = FUNC_0(VAR_1, VAR_0, "long",
      VAR_1->dw_ptrsz);
 }

 return (VAR_1->dw_long);
}
