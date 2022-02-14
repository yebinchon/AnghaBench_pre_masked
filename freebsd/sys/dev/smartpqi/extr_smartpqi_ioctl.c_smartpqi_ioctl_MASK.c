
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct thread {int dummy; } ;
struct pqisrc_softstate {int dummy; } ;
struct cdev {struct pqisrc_softstate* si_drv1; } ;
typedef int caddr_t ;






 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int,...) ;
 int FUNC_2 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;

 scalar_t__ FUNC_3 (struct pqisrc_softstate*) ;
 int FUNC_4 (struct pqisrc_softstate*,int ,int ) ;
 int FUNC_5 (struct pqisrc_softstate*) ;
 int FUNC_6 (int ,struct cdev*) ;
 int FUNC_7 (int ,struct cdev*) ;

__attribute__((used)) static int FUNC_8(struct cdev *VAR_2, u_long VAR_3, caddr_t VAR_4,
  int VAR_5, struct thread *VAR_6)
{
 int VAR_7 = VAR_1;
 struct pqisrc_softstate *VAR_8 = VAR_2->si_drv1;

 FUNC_1("IN cmd = 0x%lx udata = %p cdev = %p\n", VAR_3, VAR_4, VAR_2);

 if (!VAR_4) {
  FUNC_0("udata is null !!\n");
 }

 if (FUNC_3(VAR_8)){
  FUNC_0("Controller s offline !!\n");
  return VAR_0;
 }

 switch (VAR_3) {
  case 132:
   FUNC_6(VAR_4, VAR_2);
   break;
  case 131:
   FUNC_7(VAR_4, VAR_2);
   break;
  case 128:
  case 130:
   VAR_7 = FUNC_4(VAR_8, VAR_4, 0);
   VAR_7 = VAR_1;
   break;
  case 129:
   VAR_7 = FUNC_5(VAR_8);
   break;
  default:
   FUNC_2( "!IOCTL cmd 0x%lx not supported", VAR_3);
   VAR_7 = VAR_0;
   break;
 }

 FUNC_1("OUT error = %d\n", VAR_7);
 return VAR_7;
}
