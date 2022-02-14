
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kinfo_proc {int ki_pid; int * ki_fd; } ;
struct filedesc {unsigned short fd_cmask; } ;
typedef int kvm_t ;
typedef int fd ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,unsigned long,struct filedesc*,int) ;
 int FUNC_2 (char*,int *,int ) ;

__attribute__((used)) static int
FUNC_3(kvm_t *VAR_0, struct kinfo_proc *VAR_1, unsigned short *VAR_2)
{
 struct filedesc VAR_3;

 FUNC_0(VAR_0 != ((void*)0));
 FUNC_0(VAR_1 != ((void*)0));
 if (VAR_1->ki_fd == ((void*)0))
  return (-1);
 if (!FUNC_1(VAR_0, (unsigned long)VAR_1->ki_fd, &VAR_3, sizeof(VAR_3))) {
  FUNC_2("can't read filedesc at %p for pid %d", VAR_1->ki_fd,
      VAR_1->ki_pid);
  return (-1);
 }
 *VAR_2 = VAR_3.fd_cmask;
 return (0);
}
