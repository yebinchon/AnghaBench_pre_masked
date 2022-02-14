
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct open_file {int f_devdata; TYPE_1__* f_dev; } ;
typedef int daddr_t ;
struct TYPE_2__ {int (* dv_strategy ) (int ,int ,int ,size_t,void*,size_t*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,size_t,void*,size_t*) ;

__attribute__((used)) static int
FUNC_1(struct open_file *VAR_2, daddr_t VAR_3, void *VAR_4, size_t VAR_5)
{
    size_t VAR_6;
    int VAR_7;


    VAR_6 = 0;
    VAR_7 = (VAR_2->f_dev->dv_strategy)(VAR_2->f_devdata, VAR_1, VAR_3,
        VAR_5, VAR_4, &VAR_6);
    if ((VAR_7 == 0) && (VAR_5 != VAR_6))
        VAR_7 = VAR_0;
    return (VAR_7);
}
