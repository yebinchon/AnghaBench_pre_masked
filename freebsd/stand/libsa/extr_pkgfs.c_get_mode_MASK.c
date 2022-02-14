
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ut_mode; } ;
struct tarfile {TYPE_1__ tf_hdr; } ;


 int FUNC_0 (int ,int) ;

__attribute__((used)) static int
FUNC_1(struct tarfile *VAR_0)
{
 return (FUNC_0(VAR_0->tf_hdr.ut_mode, sizeof(VAR_0->tf_hdr.ut_mode)));
}
