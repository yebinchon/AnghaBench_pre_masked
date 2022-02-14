
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct atp_softc {int sc_stroke_free; int sc_stroke_used; int sc_n_strokes; } ;
typedef int atp_stroke_t ;


 int FUNC_0 (int *,int *,int ) ;
 int FUNC_1 (int *,int *,int ) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_2(struct atp_softc *VAR_1, atp_stroke_t *VAR_2)
{
 if (VAR_2 == ((void*)0))
  return;

 VAR_1->sc_n_strokes--;

 FUNC_1(&VAR_1->sc_stroke_used, VAR_2, VAR_0);
 FUNC_0(&VAR_1->sc_stroke_free, VAR_2, VAR_0);
}
