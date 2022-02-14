
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vmci_id ;
typedef int uint32_t ;
struct vmci_datagram {scalar_t__ payload_size; int src; int dst; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int VAR_4 ;
 int FUNC_3 (struct vmci_datagram*) ;

vmci_id
FUNC_4(void)
{
 if (FUNC_1(&VAR_4) == VAR_3) {
  uint32_t VAR_5;
  struct vmci_datagram VAR_6;
  VAR_6.dst = FUNC_0(VAR_2,
      VAR_1);
  VAR_6.src = VAR_0;
  VAR_6.payload_size = 0;
  VAR_5 = FUNC_3(&VAR_6);
  FUNC_2(&VAR_4, VAR_5);
 }
 return (FUNC_1(&VAR_4));
}
