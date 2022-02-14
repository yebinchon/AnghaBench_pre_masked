
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
typedef int u_long ;
typedef int u_char ;
struct thread {int dummy; } ;
struct cfiocqry {int offset; int count; int buffer; } ;
struct cfi_softc {int sc_size; int sc_width; int sc_writing; } ;
struct cdev {struct cfi_softc* si_drv1; } ;
typedef scalar_t__ caddr_t ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct cfi_softc*) ;
 int FUNC_1 (struct cfi_softc*,int *) ;
 int FUNC_2 (struct cfi_softc*,int *) ;
 int FUNC_3 (struct cfi_softc*,int *) ;
 int FUNC_4 (struct cfi_softc*,int ) ;
 int FUNC_5 (struct cfi_softc*) ;
 int FUNC_6 (struct cfi_softc*,int ) ;
 int FUNC_7 (int *,int ,int) ;

__attribute__((used)) static int
FUNC_8(struct cdev *VAR_3, u_long VAR_4, caddr_t VAR_5, int VAR_6,
    struct thread *VAR_7)
{
 struct cfi_softc *VAR_8;
 struct cfiocqry *VAR_9;
 int VAR_10;
 u_char VAR_11;

 VAR_8 = VAR_3->si_drv1;
 VAR_10 = 0;

 switch (VAR_4) {
 case 130:
  if (VAR_8->sc_writing) {
   VAR_10 = FUNC_0(VAR_8);
   if (VAR_10)
    break;
  }
  VAR_9 = (struct cfiocqry *)VAR_5;
  if (VAR_9->offset >= VAR_8->sc_size / VAR_8->sc_width)
   return (VAR_2);
  if (VAR_9->offset + VAR_9->count > VAR_8->sc_size / VAR_8->sc_width)
   return (VAR_1);

  while (!VAR_10 && VAR_9->count--) {
   VAR_11 = FUNC_6(VAR_8, VAR_9->offset++);
   VAR_10 = FUNC_7(&VAR_11, VAR_9->buffer++, 1);
  }
  break;
 default:
  VAR_10 = VAR_0;
  break;
 }
 return (VAR_10);
}
