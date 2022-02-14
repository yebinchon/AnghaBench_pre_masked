
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {void* usr_handle; } ;
struct port {TYPE_1__ publ; } ;


 struct port* FUNC_0 (int const) ;
 int FUNC_1 (struct port*) ;

void *FUNC_2(const u32 VAR_0)
{
 struct port *VAR_1;
 void * VAR_2;

 VAR_1 = FUNC_0(VAR_0);
 if (!VAR_1)
  return ((void*)0);
 VAR_2 = VAR_1->publ.usr_handle;
 FUNC_1(VAR_1);
 return VAR_2;
}
