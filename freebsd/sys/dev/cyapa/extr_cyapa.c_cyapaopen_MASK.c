
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct thread {int dummy; } ;
struct cyapa_cdevpriv {TYPE_1__* sc; } ;
struct cdev {TYPE_1__* si_drv1; } ;
struct TYPE_3__ {int count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (struct cyapa_cdevpriv*,int ) ;
 int FUNC_3 (struct cyapa_cdevpriv*,int ) ;
 struct cyapa_cdevpriv* FUNC_4 (int,int ,int) ;

__attribute__((used)) static int
FUNC_5(struct cdev *VAR_4, int VAR_5, int VAR_6, struct thread *VAR_7)
{
 struct cyapa_cdevpriv *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_4(sizeof(*VAR_8), VAR_0, VAR_1 | VAR_2);
 VAR_8->sc = VAR_4->si_drv1;

 VAR_9 = FUNC_2(VAR_8, VAR_3);
 if (VAR_9 == 0) {
  FUNC_0(VAR_8->sc);
  VAR_8->sc->count++;
  FUNC_1(VAR_8->sc);
 }
 else
  FUNC_3(VAR_8, VAR_0);

 return (VAR_9);
}
