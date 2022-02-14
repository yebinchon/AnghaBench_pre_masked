
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int length; int value; } ;
typedef TYPE_1__ gss_buffer_desc ;
typedef int OM_uint32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *,int ,TYPE_1__*) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (char const*) ;

OM_uint32
FUNC_3(const char *VAR_2)
{
 gss_buffer_desc VAR_3;
 OM_uint32 VAR_4;

 VAR_3.value = FUNC_1(VAR_2);
 VAR_3.length = FUNC_2(VAR_2);

 FUNC_0(&VAR_4, ((void*)0),
     VAR_0, &VAR_3);

 return (VAR_1);
}
