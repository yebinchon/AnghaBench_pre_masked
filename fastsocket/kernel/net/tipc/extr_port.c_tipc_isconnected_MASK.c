
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int connected; } ;
struct port {TYPE_1__ publ; } ;


 int VAR_0 ;
 struct port* FUNC_0 (int ) ;
 int FUNC_1 (struct port*) ;

int FUNC_2(u32 VAR_1, int *VAR_2)
{
 struct port *VAR_3;

 VAR_3 = FUNC_0(VAR_1);
 if (!VAR_3)
  return -VAR_0;
 *VAR_2 = VAR_3->publ.connected;
 FUNC_1(VAR_3);
 return 0;
}
