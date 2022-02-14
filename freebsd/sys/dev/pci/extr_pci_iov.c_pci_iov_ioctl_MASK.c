
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct thread {int dummy; } ;
struct pci_iov_schema {int dummy; } ;
struct pci_iov_arg {int dummy; } ;
struct cdev {int dummy; } ;
typedef scalar_t__ caddr_t ;


 int VAR_0 ;



 int FUNC_0 (struct cdev*,struct pci_iov_arg*) ;
 int FUNC_1 (struct cdev*) ;
 int FUNC_2 (struct cdev*,struct pci_iov_schema*) ;

__attribute__((used)) static int
FUNC_3(struct cdev *VAR_1, u_long VAR_2, caddr_t VAR_3, int VAR_4,
    struct thread *VAR_5)
{

 switch (VAR_2) {
 case 130:
  return (FUNC_0(VAR_1, (struct pci_iov_arg *)VAR_3));
 case 129:
  return (FUNC_1(VAR_1));
 case 128:
  return (FUNC_2(VAR_1,
      (struct pci_iov_schema *)VAR_3));
 default:
  return (VAR_0);
 }
}
