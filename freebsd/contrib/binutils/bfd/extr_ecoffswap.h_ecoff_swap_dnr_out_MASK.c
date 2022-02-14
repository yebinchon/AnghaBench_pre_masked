
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct dnr_ext {int d_index; int d_rfd; } ;
typedef int bfd ;
struct TYPE_3__ {int index; int rfd; } ;
typedef TYPE_1__ DNR ;


 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (char*,char*,int) ;

__attribute__((used)) static void
FUNC_3 (bfd *VAR_0, const DNR *VAR_1, void * VAR_2)
{
  struct dnr_ext *VAR_3 = (struct dnr_ext *) VAR_2;
  DNR VAR_4[1];


  *VAR_4 = *VAR_1;

  FUNC_0 (VAR_0, VAR_4->rfd, VAR_3->d_rfd);
  FUNC_0 (VAR_0, VAR_4->index, VAR_3->d_index);





}
