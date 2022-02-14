
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int phdr; } ;
struct port {TYPE_1__ publ; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 struct port* FUNC_1 (int ) ;
 int FUNC_2 (struct port*) ;

int FUNC_3(u32 VAR_2, unsigned int VAR_3)
{
 struct port *VAR_4;

 if (VAR_3 > VAR_1)
  return -VAR_0;

 VAR_4 = FUNC_1(VAR_2);
 if (!VAR_4)
  return -VAR_0;
 FUNC_0(&VAR_4->publ.phdr, (u32)VAR_3);
 FUNC_2(VAR_4);
 return 0;
}
