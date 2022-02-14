
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int ;
struct TYPE_4__ {TYPE_1__* its; } ;
struct iort_node {scalar_t__ type; TYPE_2__ entries; } ;
struct TYPE_3__ {int xref; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*) ;
 struct iort_node* FUNC_1 (int ,int ,scalar_t__,int *) ;

int
FUNC_2(u_int VAR_2, u_int VAR_3, u_int *VAR_4, u_int *VAR_5)
{
 struct iort_node *VAR_6;

 VAR_6 = FUNC_1(VAR_2, VAR_3, VAR_0, VAR_5);
 if (VAR_6 == ((void*)0))
  return (VAR_1);


 FUNC_0(VAR_6->type == VAR_0, ("bad group"));


 *VAR_4 = VAR_6->entries.its[0].xref;
 return (0);
}
