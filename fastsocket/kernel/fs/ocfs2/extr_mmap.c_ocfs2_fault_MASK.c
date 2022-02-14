
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_fault {int page; int pgoff; } ;
struct vm_area_struct {int dummy; } ;
typedef int sigset_t ;


 int VAR_0 ;
 int FUNC_0 (struct vm_area_struct*,struct vm_fault*) ;
 int FUNC_1 (char*,struct vm_area_struct*,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct vm_area_struct *VAR_1, struct vm_fault *VAR_2)
{
 sigset_t VAR_3, VAR_4;
 int VAR_5, VAR_6;

 FUNC_1("(area=%p, page offset=%lu)\n", VAR_1, VAR_2->pgoff);

 VAR_5 = FUNC_4(&VAR_3, &VAR_4);
 if (VAR_5 < 0) {
  FUNC_2(VAR_5);
  VAR_6 = VAR_0;
  goto out;
 }

 VAR_6 = FUNC_0(VAR_1, VAR_2);

 VAR_5 = FUNC_5(&VAR_4);
 if (VAR_5 < 0)
  FUNC_2(VAR_5);
out:
 FUNC_3(VAR_2->page);
 return VAR_6;
}
