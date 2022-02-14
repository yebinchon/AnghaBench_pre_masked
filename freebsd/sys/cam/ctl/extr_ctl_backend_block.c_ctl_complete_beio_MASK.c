
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union ctl_io {int dummy; } ctl_io ;
struct ctl_be_block_io {int (* beio_cont ) (struct ctl_be_block_io*) ;union ctl_io* io; } ;


 int FUNC_0 (union ctl_io*) ;
 int FUNC_1 (struct ctl_be_block_io*) ;
 int FUNC_2 (struct ctl_be_block_io*) ;

__attribute__((used)) static void
FUNC_3(struct ctl_be_block_io *VAR_0)
{
 union ctl_io *VAR_1 = VAR_0->io;

 if (VAR_0->beio_cont != ((void*)0)) {
  VAR_0->beio_cont(VAR_0);
 } else {
  FUNC_1(VAR_0);
  FUNC_0(VAR_1);
 }
}
