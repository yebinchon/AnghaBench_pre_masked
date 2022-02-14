
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ (* overhead ) (int ,scalar_t__,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__* VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int,char*,int) ;
 scalar_t__ FUNC_1 (int ,scalar_t__,int) ;
 int FUNC_2 (int,char*,int) ;

int
FUNC_3(int VAR_5, char *VAR_6, int VAR_7)
{
    int VAR_8 = VAR_1;
    int VAR_9 = 0;

    if(VAR_2 == VAR_4)
 return FUNC_2(VAR_5, VAR_6, VAR_7);

    VAR_8 -= (*VAR_3->overhead)(VAR_0, VAR_2, VAR_8);
    while(VAR_7){
 if(VAR_7 < VAR_8)
     VAR_8 = VAR_7;
 FUNC_0(VAR_5, VAR_6, VAR_8);
 VAR_7 -= VAR_8;
 VAR_6 += VAR_8;
 VAR_9 += VAR_8;
    }
    return VAR_9;
}
