
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* if_shared_ctx_t ;
typedef int if_ctx_t ;
typedef int device_t ;
struct TYPE_4__ {scalar_t__ isc_magic; } ;


 TYPE_1__* FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ,int *,TYPE_1__*,int *) ;
 int FUNC_2 (int ) ;

int
FUNC_3(device_t VAR_2)
{
 if_ctx_t VAR_3;
 if_shared_ctx_t VAR_4;

 if ((VAR_4 = FUNC_0(VAR_2)) == ((void*)0) || VAR_4->isc_magic != VAR_1)
  return (VAR_0);

 FUNC_2(VAR_2);

 return (FUNC_1(VAR_2, ((void*)0), VAR_4, &VAR_3));
}
