
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cfi_softc {int dummy; } ;
struct cfi_disk_softc {int qlock; int bioq; struct cfi_softc* parent; } ;
struct bio {int bio_cmd; } ;




 struct bio* FUNC_0 (int *) ;
 int FUNC_1 (struct cfi_softc*,struct bio*) ;
 int FUNC_2 (struct cfi_softc*,struct bio*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(void *VAR_0, int VAR_1)
{
 struct cfi_disk_softc *VAR_2 = VAR_0;
 struct cfi_softc *VAR_3 = VAR_2->parent;
 struct bio *VAR_4;

 for (;;) {
  FUNC_3(&VAR_2->qlock);
  VAR_4 = FUNC_0(&VAR_2->bioq);
  FUNC_4(&VAR_2->qlock);
  if (VAR_4 == ((void*)0))
   break;

  switch (VAR_4->bio_cmd) {
  case 129:
   FUNC_1(VAR_3, VAR_4);
   break;
  case 128:
   FUNC_2(VAR_3, VAR_4);
   break;
  }
 }
}
