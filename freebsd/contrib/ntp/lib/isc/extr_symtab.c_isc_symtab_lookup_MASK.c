
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int isc_symvalue_t ;
typedef int isc_symtab_t ;
typedef int isc_result_t ;
struct TYPE_3__ {int value; } ;
typedef TYPE_1__ elt_t ;


 int FUNC_0 (int *,char const*,unsigned int,unsigned int,TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;

isc_result_t
FUNC_3(isc_symtab_t *VAR_2, const char *VAR_3, unsigned int VAR_4,
    isc_symvalue_t *VAR_5)
{
 unsigned int VAR_6;
 elt_t *VAR_7;

 FUNC_1(FUNC_2(VAR_2));
 FUNC_1(VAR_3 != ((void*)0));

 FUNC_0(VAR_2, VAR_3, VAR_4, VAR_6, VAR_7);

 if (VAR_7 == ((void*)0))
  return (VAR_0);

 if (VAR_5 != ((void*)0))
  *VAR_5 = VAR_7->value;

 return (VAR_1);
}
