
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int io_error; int io_txg; int io_bp; int io_spa; } ;
typedef TYPE_1__ zio_t ;


 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static zio_t *
FUNC_1(zio_t *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_0(VAR_0->io_spa, VAR_0->io_bp, VAR_0->io_txg);
 if (VAR_1)
  VAR_0->io_error = VAR_1;

 return (VAR_0);
}
