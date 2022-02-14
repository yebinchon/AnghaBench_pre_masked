
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* gss_buffer_t ;
struct TYPE_3__ {int length; int value; } ;
typedef scalar_t__ OM_uint32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 char* FUNC_0 (int) ;
 int FUNC_1 (char*,int ,int) ;

__attribute__((used)) static OM_uint32
FUNC_2(OM_uint32 *VAR_2,
    const gss_buffer_t VAR_3,
    char **VAR_4)
{
    if (VAR_3 == ((void*)0) || VAR_3->length == 0) {
 *VAR_4 = ((void*)0);
    } else {
 *VAR_4 = FUNC_0(VAR_3->length + 1);
 if (*VAR_4 == ((void*)0)) {
     *VAR_2 = 0;
     return VAR_1;
 }
 FUNC_1(*VAR_4, VAR_3->value, VAR_3->length);
 (*VAR_4)[VAR_3->length] = '\0';
    }
    return VAR_0;
}
