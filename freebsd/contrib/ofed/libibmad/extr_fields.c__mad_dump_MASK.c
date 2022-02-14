
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ib_mad_dump_fn ;
struct TYPE_3__ {int bitlen; int * def_dump_fn; } ;
typedef TYPE_1__ ib_field_t ;


 char* FUNC_0 (TYPE_1__*,char const*,char*,int,void*) ;
 int FUNC_1 (char*,char*) ;

__attribute__((used)) static int FUNC_2(ib_mad_dump_fn * VAR_0, const char *VAR_1, void *VAR_2,
       int VAR_3)
{
 ib_field_t VAR_4;
 char VAR_5[512];

 VAR_4.def_dump_fn = VAR_0;
 VAR_4.bitlen = VAR_3 * 8;

 return FUNC_1("%s\n", FUNC_0(&VAR_4, VAR_1, VAR_5, sizeof VAR_5, VAR_2));
}
