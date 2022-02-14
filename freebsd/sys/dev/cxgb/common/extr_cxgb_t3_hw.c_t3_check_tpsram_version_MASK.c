
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_7__ {scalar_t__ rev; } ;
struct TYPE_8__ {TYPE_1__ params; } ;
typedef TYPE_2__ adapter_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,char*,unsigned int,unsigned int,unsigned int,unsigned int) ;
 int VAR_1 ;
 unsigned int FUNC_1 (int ) ;
 unsigned int FUNC_2 (int ) ;
 scalar_t__ VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_3 (TYPE_2__*,int *) ;
 int FUNC_4 (TYPE_2__*,int ) ;

int FUNC_5(adapter_t *VAR_5)
{
 int VAR_6;
 u32 VAR_7;
 unsigned int VAR_8, VAR_9;

 if (VAR_5->params.rev == VAR_2)
  return 0;


 VAR_6 = FUNC_3(VAR_5, &VAR_7);
 if (VAR_6)
  return VAR_6;

 VAR_7 = FUNC_4(VAR_5, VAR_0);

 VAR_8 = FUNC_1(VAR_7);
 VAR_9 = FUNC_2(VAR_7);

 if (VAR_8 == VAR_3 && VAR_9 == VAR_4)
  return 0;
 else {
  FUNC_0(VAR_5, "found wrong TP version (%u.%u), "
         "driver compiled for version %d.%d\n", VAR_8, VAR_9,
         VAR_3, VAR_4);
 }
 return -VAR_1;
}
