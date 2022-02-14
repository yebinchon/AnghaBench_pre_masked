
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmci_resource {int dummy; } ;
struct vmci_datagram {int src; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct vmci_resource* FUNC_0 (int ,int ) ;
 int FUNC_1 (struct vmci_resource*) ;
 int FUNC_2 (struct vmci_datagram*) ;

__attribute__((used)) static int
FUNC_3(struct vmci_datagram *VAR_2)
{
 struct vmci_resource *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_0(VAR_2->src, VAR_1);
 if (((void*)0) == VAR_3)
  return VAR_0;

 VAR_4 = FUNC_2(VAR_2);
 FUNC_1(VAR_3);

 return (VAR_4);
}
