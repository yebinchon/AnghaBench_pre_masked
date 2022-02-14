
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hci_conn {int mode; } ;


 int FUNC_0 (char*,struct hci_conn*,int ) ;
 int FUNC_1 (struct hci_conn*) ;

__attribute__((used)) static void FUNC_2(unsigned long VAR_0)
{
 struct hci_conn *VAR_1 = (void *) VAR_0;

 FUNC_0("conn %p mode %d", VAR_1, VAR_1->mode);

 FUNC_1(VAR_1);
}
