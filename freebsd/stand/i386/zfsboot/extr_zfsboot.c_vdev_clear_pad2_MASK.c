
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int v_read_priv; } ;
typedef TYPE_1__ vdev_t ;
typedef int uint64_t ;
typedef int off_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,int) ;
 int FUNC_1 (int ,int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (TYPE_1__*,int ,int ,char*,int) ;
 int VAR_3 ;
 char* VAR_4 ;

__attribute__((used)) static int
FUNC_3(vdev_t *VAR_5)
{
 char *VAR_6 = VAR_4;
 uint64_t *VAR_7;
 off_t VAR_8 = FUNC_1(VAR_2, VAR_3);

 FUNC_0(VAR_6, 0, VAR_1);
 VAR_7 = (uint64_t *)(VAR_6 + VAR_1);

 VAR_7[-5] = 0x0210da7ab10c7a11;
 VAR_7[-4] = 0x97f48f807f6e2a3f;
 VAR_7[-3] = 0xaf909f1658aacefc;
 VAR_7[-2] = 0xcbd1ea57ff6db48b;
 VAR_7[-1] = 0x6ec692db0d465fab;
 if (FUNC_2(VAR_5, VAR_5->v_read_priv, VAR_8, VAR_6, VAR_1))
  return (VAR_0);
 return (0);
}
