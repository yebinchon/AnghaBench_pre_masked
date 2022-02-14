
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct port {int dummy; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (struct port*) ;
 struct port* FUNC_1 (int ) ;
 int FUNC_2 (struct port*) ;

int FUNC_3(u32 VAR_1, unsigned int *VAR_2)
{
 struct port *VAR_3;

 VAR_3 = FUNC_1(VAR_1);
 if (!VAR_3)
  return -VAR_0;
 *VAR_2 = FUNC_0(VAR_3);
 FUNC_2(VAR_3);
 return 0;
}
