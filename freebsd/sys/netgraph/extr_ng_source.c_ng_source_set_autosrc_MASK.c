
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct ng_mesg {scalar_t__ data; } ;
typedef TYPE_1__* sc_p ;
struct TYPE_3__ {int output; int node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ng_mesg*,int ,int ,int,int ) ;
 int FUNC_1 (int,int ,struct ng_mesg*,int ,int ) ;

__attribute__((used)) static int
FUNC_2(sc_p VAR_4, uint32_t VAR_5)
{
 struct ng_mesg *VAR_6;
 int VAR_7 = 0;

 FUNC_0(VAR_6, VAR_2, VAR_3,
     sizeof (uint32_t), VAR_1);
 if (VAR_6 == ((void*)0))
  return(VAR_0);

 *(uint32_t *)VAR_6->data = VAR_5;
 FUNC_1(VAR_7, VAR_4->node, VAR_6, VAR_4->output, 0);
 return (VAR_7);
}
