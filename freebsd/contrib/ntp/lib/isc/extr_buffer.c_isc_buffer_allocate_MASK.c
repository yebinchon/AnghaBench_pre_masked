
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int isc_result_t ;
typedef int isc_mem_t ;
struct TYPE_5__ {int * mctx; } ;
typedef TYPE_1__ isc_buffer_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,unsigned char*,unsigned int) ;
 TYPE_1__* FUNC_2 (int *,unsigned int) ;

isc_result_t
FUNC_3(isc_mem_t *VAR_2, isc_buffer_t **VAR_3,
      unsigned int VAR_4)
{
 isc_buffer_t *VAR_5;

 FUNC_0(VAR_3 != ((void*)0));
 FUNC_0(*VAR_3 == ((void*)0));

 VAR_5 = FUNC_2(VAR_2, VAR_4 + sizeof(isc_buffer_t));
 if (VAR_5 == ((void*)0))
  return (VAR_0);

 FUNC_1(VAR_5, ((unsigned char *)VAR_5) + sizeof(isc_buffer_t),
   VAR_4);
 VAR_5->mctx = VAR_2;

 *VAR_3 = VAR_5;

 return (VAR_1);
}
