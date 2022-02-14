
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uio {scalar_t__ uio_offset; int uio_resid; } ;
struct pccard_softc {TYPE_1__* cis; } ;
struct cdev {struct pccard_softc* si_drv1; } ;
struct TYPE_2__ {scalar_t__ len; scalar_t__ buffer; } ;


 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (scalar_t__,int ,struct uio*) ;

__attribute__((used)) static int
FUNC_2(struct cdev *VAR_0, struct uio *VAR_1, int VAR_2)
{
 struct pccard_softc *VAR_3;

 VAR_3 = VAR_0->si_drv1;

 if (VAR_3->cis == ((void*)0) || VAR_1->uio_offset > VAR_3->cis->len)
  return (0);
 return (FUNC_1(VAR_3->cis->buffer + VAR_1->uio_offset,
   FUNC_0(VAR_1->uio_resid, VAR_3->cis->len - VAR_1->uio_offset), VAR_1));
}
