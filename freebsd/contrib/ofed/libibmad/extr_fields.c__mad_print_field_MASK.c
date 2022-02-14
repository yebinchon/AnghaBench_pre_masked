
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char const* name; int bitlen; int def_dump_fn; } ;
typedef TYPE_1__ ib_field_t ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,char const*,void*,int) ;

__attribute__((used)) static int FUNC_2(const ib_field_t * VAR_0, const char *VAR_1, void *VAR_2,
       int VAR_3)
{
 return FUNC_1(VAR_0->def_dump_fn, VAR_1 ? VAR_1 : VAR_0->name, VAR_2,
    VAR_3 ? VAR_3 : FUNC_0(VAR_0->bitlen, 8) / 8);
}
