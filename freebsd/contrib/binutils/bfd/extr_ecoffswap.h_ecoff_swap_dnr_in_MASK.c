
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct dnr_ext {int d_index; int d_rfd; } ;
typedef int bfd ;
struct TYPE_3__ {void* index; void* rfd; } ;
typedef TYPE_1__ DNR ;


 void* FUNC_0 (int *,int ) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (char*,char*,int) ;

__attribute__((used)) static void
FUNC_3 (bfd *VAR_0, void * VAR_1, DNR *VAR_2)
{
  struct dnr_ext VAR_3[1];

  *VAR_3 = *(struct dnr_ext *) VAR_1;

  VAR_2->rfd = FUNC_0 (VAR_0, VAR_3->d_rfd);
  VAR_2->index = FUNC_0 (VAR_0, VAR_3->d_index);





}
