
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u_long ;
typedef int ssize_t ;
typedef int off_t ;
struct TYPE_9__ {int program; int pmfd; TYPE_1__* arch; int vmfd; int writable; } ;
typedef TYPE_2__ kvm_t ;
struct TYPE_8__ {int (* ka_kvatop ) (TYPE_2__*,int,int *) ;} ;


 scalar_t__ FUNC_0 (TYPE_2__*) ;
 char* VAR_0 ;
 int FUNC_1 (TYPE_2__*,int ,char*,...) ;
 int FUNC_2 (TYPE_2__*,int ,char*) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (TYPE_2__*,int,int *) ;
 int FUNC_5 (int ,char const*,int) ;

ssize_t
FUNC_6(kvm_t *VAR_2, u_long VAR_3, const void *VAR_4, size_t VAR_5)
{
 int VAR_6;
 ssize_t VAR_7;
 off_t VAR_8;
 const char *VAR_9;

 if (!FUNC_0(VAR_2) && !VAR_2->writable) {
  FUNC_1(VAR_2, VAR_2->program,
      "kvm_write not implemented for dead kernels");
  return (-1);
 }

 if (FUNC_0(VAR_2)) {



  VAR_1 = 0;
  if (FUNC_3(VAR_2->vmfd, (off_t)VAR_3, 0) == -1 && VAR_1 != 0) {
   FUNC_1(VAR_2, 0, "invalid address (%lx)", VAR_3);
   return (-1);
  }
  VAR_6 = FUNC_5(VAR_2->vmfd, VAR_4, VAR_5);
  if (VAR_6 < 0) {
   FUNC_2(VAR_2, 0, "kvm_write");
   return (-1);
  } else if ((size_t)VAR_6 < VAR_5)
   FUNC_1(VAR_2, VAR_2->program, "short write");
  return (VAR_6);
 }

 VAR_9 = VAR_4;
 while (VAR_5 > 0) {
  VAR_6 = VAR_2->arch->ka_kvatop(VAR_2, VAR_3, &VAR_8);
  if (VAR_6 == 0)
   return (-1);
  if (VAR_6 > (ssize_t)VAR_5)
   VAR_6 = VAR_5;
  VAR_1 = 0;
  if (FUNC_3(VAR_2->pmfd, VAR_8, 0) == -1 && VAR_1 != 0) {
   FUNC_2(VAR_2, 0, VAR_0);
   break;
  }
  VAR_7 = FUNC_5(VAR_2->pmfd, VAR_9, VAR_6);
  if (VAR_7 < 0) {
   FUNC_2(VAR_2, VAR_2->program, "kvm_write");
   break;
  }





  if (VAR_7 == 0)
   break;
  VAR_9 += VAR_7;
  VAR_3 += VAR_7;
  VAR_5 -= VAR_7;
 }

 return (VAR_9 - (const char *)VAR_4);
}
