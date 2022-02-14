
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvme_completion_poll_status {int done; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int) ;

__attribute__((used)) static __inline
void
FUNC_3(struct nvme_completion_poll_status *VAR_1)
{
 int VAR_2 = VAR_0 * 1;

 while (!FUNC_0(&VAR_1->done) && --VAR_2 > 0)
  FUNC_2("nvme", 1);
 if (VAR_2 <= 0)
  FUNC_1("NVME polled command failed to complete within 1s.");
}
