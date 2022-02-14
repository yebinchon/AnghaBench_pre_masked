
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pmfd; scalar_t__ rawdump; } ;
typedef TYPE_1__ kvm_t ;


 scalar_t__ FUNC_0 (char**,char*,int) ;
 int FUNC_1 (int ,char**,int,int ) ;

int
FUNC_2(kvm_t *VAR_0)
{
 char VAR_1[8];

 if (VAR_0->rawdump)
  return (0);
 if (FUNC_1(VAR_0->pmfd, &VAR_1, 8, 0) == 8 &&
     FUNC_0(&VAR_1, "minidump", 8) == 0)
  return (1);
 return (0);
}
