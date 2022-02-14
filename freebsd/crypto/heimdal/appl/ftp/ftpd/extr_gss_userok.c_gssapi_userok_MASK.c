
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gssapi_data {int client_name; } ;


 int FUNC_0 (int ,char*) ;

int
FUNC_1(void *VAR_0, char *VAR_1)
{
    struct gssapi_data *VAR_2 = VAR_0;


    return !FUNC_0(VAR_2->client_name, VAR_1);
}
