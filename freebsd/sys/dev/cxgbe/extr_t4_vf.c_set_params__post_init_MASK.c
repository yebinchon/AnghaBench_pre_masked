
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int port_caps32; } ;
struct adapter {TYPE_1__ params; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct adapter*,int,int*,int*) ;

__attribute__((used)) static int
FUNC_2(struct adapter *VAR_2)
{
 uint32_t VAR_3, VAR_4;


 VAR_3 = FUNC_0(VAR_0);
 VAR_4 = 1;
 (void)FUNC_1(VAR_2, 1, &VAR_3, &VAR_4);


 VAR_3 = FUNC_0(VAR_1);
 VAR_4 = 1;
 if (FUNC_1(VAR_2, 1, &VAR_3, &VAR_4) == 0)
  VAR_2->params.port_caps32 = 1;

 return (0);
}
