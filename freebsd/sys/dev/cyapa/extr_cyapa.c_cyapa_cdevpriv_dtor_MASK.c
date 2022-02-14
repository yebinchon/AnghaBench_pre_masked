
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct cyapa_cdevpriv {TYPE_1__* sc; } ;
struct TYPE_3__ {int count; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (struct cyapa_cdevpriv*,int ) ;

__attribute__((used)) static void
FUNC_4(void *VAR_1)
{
 struct cyapa_cdevpriv *VAR_2;

 VAR_2 = VAR_1;
 FUNC_0(VAR_2 != ((void*)0), ("cyapa cdevpriv should not be NULL!"));

 FUNC_1(VAR_2->sc);
 VAR_2->sc->count--;
 FUNC_2(VAR_2->sc);

 FUNC_3(VAR_2, VAR_0);
}
