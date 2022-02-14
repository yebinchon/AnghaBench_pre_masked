
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ctl_be_block_softc {int beio_zone; } ;
struct ctl_be_block_io {struct ctl_be_block_softc* softc; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ctl_be_block_io* FUNC_0 (int ,int) ;

__attribute__((used)) static struct ctl_be_block_io *
FUNC_1(struct ctl_be_block_softc *VAR_2)
{
 struct ctl_be_block_io *VAR_3;

 VAR_3 = FUNC_0(VAR_2->beio_zone, VAR_0 | VAR_1);
 VAR_3->softc = VAR_2;
 return (VAR_3);
}
