
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int pl; int pi; } ;
typedef TYPE_1__ irda_param_t ;
typedef int __u8 ;
typedef int PV_TYPE ;
typedef int (* PI_HANDLER ) (void*,TYPE_1__*,int ) ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int *,int *) ;
 int FUNC_1 (void*,TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_2(void *VAR_1, __u8 *VAR_2, int VAR_3, __u8 VAR_4,
     PV_TYPE VAR_5, PI_HANDLER VAR_6)
{
 irda_param_t VAR_7;
 int VAR_8;


 FUNC_0(VAR_2, "bb", &VAR_7.pi, &VAR_7.pl);


 VAR_8 = (*VAR_6)(VAR_1, &VAR_7, VAR_0);

 if (VAR_8 < 0)
  return VAR_8;

 return 2;
}
