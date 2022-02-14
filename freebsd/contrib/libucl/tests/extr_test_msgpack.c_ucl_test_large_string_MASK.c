
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int flags; } ;
typedef TYPE_1__ ucl_object_t ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (int) ;
 int FUNC_1 () ;
 TYPE_1__* FUNC_2 (char*,int,int ) ;

__attribute__((used)) static ucl_object_t*
FUNC_3 (void)
{
 ucl_object_t *VAR_2;
 char *VAR_3;
 uint32_t VAR_4;

 while ((VAR_4 = FUNC_1 ()) % 100000 == 0);
 VAR_3 = FUNC_0 (VAR_4 % 100000);
 VAR_2 = FUNC_2 (VAR_3, VAR_4 % 100000,
    VAR_1);
 VAR_2->flags |= VAR_0;

 return VAR_2;
}
