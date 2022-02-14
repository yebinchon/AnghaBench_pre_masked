
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {unsigned int limit; } ;
typedef TYPE_1__ isc_hash_t ;
typedef int isc_boolean_t ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 unsigned int FUNC_2 (TYPE_1__*,unsigned char const*,unsigned int,int ) ;

unsigned int
FUNC_3(isc_hash_t *VAR_0, const unsigned char *VAR_1,
   unsigned int VAR_2, isc_boolean_t VAR_3)
{
 FUNC_0(VAR_0 != ((void*)0) && FUNC_1(VAR_0));
 FUNC_0(VAR_2 <= VAR_0->limit);

 return (FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3));
}
