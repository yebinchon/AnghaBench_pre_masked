
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * value; scalar_t__ length; } ;
typedef TYPE_1__ gss_buffer_desc ;
typedef int gss_OID ;
typedef scalar_t__ OM_uint32 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char**,char*,unsigned long,int,char*,unsigned long,int,char*) ;
 int FUNC_1 (int,char*) ;
 scalar_t__ FUNC_2 (scalar_t__*,scalar_t__,int ,int ,scalar_t__*,TYPE_1__*) ;
 int FUNC_3 (scalar_t__*,TYPE_1__*) ;

char *
FUNC_4(OM_uint32 VAR_2, OM_uint32 VAR_3, gss_OID VAR_4)
{
 OM_uint32 VAR_5, VAR_6;
 gss_buffer_desc VAR_7;
 gss_buffer_desc VAR_8;
 OM_uint32 VAR_9 = 0;

 char *VAR_10 = ((void*)0);

 VAR_7.length = 0;
 VAR_7.value = ((void*)0);
 VAR_8.length = 0;
 VAR_8.value = ((void*)0);

 VAR_6 = FUNC_2(&VAR_5, VAR_2,
        VAR_0,
        VAR_4, &VAR_9, &VAR_7);
 VAR_6 = FUNC_2(&VAR_5, VAR_3,
        VAR_1,
        VAR_4, &VAR_9, &VAR_8);
 if (FUNC_0(&VAR_10, "gss-code: %lu %.*s -- mech-code: %lu %.*s",
       (unsigned long)VAR_2,
       (int)VAR_7.length,
       (char *)VAR_7.value,
       (unsigned long)VAR_3,
       (int)VAR_8.length,
       (char *)VAR_8.value) < 0 || VAR_10 == ((void*)0))
     FUNC_1(1, "malloc");

 FUNC_3(&VAR_5, &VAR_7);
 FUNC_3(&VAR_5, &VAR_8);

 return VAR_10;
}
