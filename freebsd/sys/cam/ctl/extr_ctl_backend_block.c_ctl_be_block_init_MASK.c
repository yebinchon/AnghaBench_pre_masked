
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ctl_be_block_softc {int lun_list; int beio_zone; int lock; } ;
struct ctl_be_block_io {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 struct ctl_be_block_softc VAR_2 ;
 int FUNC_1 (int *,char*,int *,int ) ;
 int FUNC_2 (char*,int,int *,int *,int *,int *,int ,int ) ;

__attribute__((used)) static int
FUNC_3(void)
{
 struct ctl_be_block_softc *VAR_3 = &VAR_2;

 FUNC_1(&VAR_3->lock, "ctlblock", ((void*)0), VAR_0);
 VAR_3->beio_zone = FUNC_2("beio", sizeof(struct ctl_be_block_io),
     ((void*)0), ((void*)0), ((void*)0), ((void*)0), VAR_1, 0);
 FUNC_0(&VAR_3->lun_list);
 return (0);
}
