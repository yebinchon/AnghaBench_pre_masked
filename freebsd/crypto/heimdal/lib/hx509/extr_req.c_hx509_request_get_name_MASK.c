
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* hx509_request ;
typedef int hx509_name ;
typedef int hx509_context ;
struct TYPE_3__ {int * name; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int *) ;
 int FUNC_1 (int ,int ,int,char*) ;

int
FUNC_2(hx509_context VAR_1,
   hx509_request VAR_2,
   hx509_name *VAR_3)
{
    if (VAR_2->name == ((void*)0)) {
 FUNC_1(VAR_1, 0, VAR_0, "Request have no name");
 return VAR_0;
    }
    return FUNC_0(VAR_1, VAR_2->name, VAR_3);
}
