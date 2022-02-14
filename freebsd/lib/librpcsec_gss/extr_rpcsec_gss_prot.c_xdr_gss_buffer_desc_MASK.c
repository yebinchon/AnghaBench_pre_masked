
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int ;
struct TYPE_3__ {char* value; int length; } ;
typedef TYPE_1__ gss_buffer_desc ;
typedef int bool_t ;
typedef int XDR ;


 int VAR_0 ;
 int FUNC_0 (int *,char**,int *,int ) ;

bool_t
FUNC_1(XDR *VAR_1, gss_buffer_desc *VAR_2)
{
 char *VAR_3;
 u_int VAR_4;
 bool_t VAR_5;

 VAR_3 = VAR_2->value;
 VAR_4 = VAR_2->length;
 VAR_5 = FUNC_0(VAR_1, &VAR_3, &VAR_4, VAR_0);
 VAR_2->value = VAR_3;
 VAR_2->length = VAR_4;

 return (VAR_5);
}
