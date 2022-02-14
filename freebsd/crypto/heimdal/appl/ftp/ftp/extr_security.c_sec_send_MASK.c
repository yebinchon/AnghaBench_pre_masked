
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int bytes ;
struct TYPE_2__ {int (* encode ) (int ,char*,int,int ,void**) ;} ;


 int VAR_0 ;
 int FUNC_0 (int,void*,int) ;
 int VAR_1 ;
 int FUNC_1 (void*) ;
 int FUNC_2 (int) ;
 TYPE_1__* VAR_2 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,char*,int,int ,void**) ;

__attribute__((used)) static int
FUNC_5(int VAR_3, char *VAR_4, int VAR_5)
{
    int VAR_6;
    void *VAR_7;
    VAR_6 = (*VAR_2->encode)(VAR_0, VAR_4, VAR_5, VAR_1, &VAR_7);
    VAR_6 = FUNC_2(VAR_6);
    FUNC_0(VAR_3, &VAR_6, sizeof(VAR_6));
    FUNC_0(VAR_3, VAR_7, FUNC_3(VAR_6));
    FUNC_1(VAR_7);
    return VAR_5;
}
