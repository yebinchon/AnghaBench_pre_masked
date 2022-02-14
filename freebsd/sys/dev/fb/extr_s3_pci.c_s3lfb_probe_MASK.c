
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int video_adapter_t ;
struct TYPE_2__ {int (* probe ) (int,int **,void*,int) ;} ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int,int **,void*,int) ;

__attribute__((used)) static int
FUNC_1(int VAR_1, video_adapter_t **VAR_2, void *VAR_3, int VAR_4)
{
 return (*VAR_0->probe)(VAR_1, VAR_2, VAR_3, VAR_4);
}
