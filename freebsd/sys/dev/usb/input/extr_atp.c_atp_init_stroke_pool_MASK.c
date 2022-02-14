
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int ;
struct atp_softc {int * sc_strokes_data; int sc_stroke_free; scalar_t__ sc_n_strokes; int sc_stroke_used; } ;


 size_t VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *,int ) ;
 int VAR_1 ;
 int FUNC_2 (int **,int ,int) ;

__attribute__((used)) static void
FUNC_3(struct atp_softc *VAR_2)
{
 u_int VAR_3;

 FUNC_0(&VAR_2->sc_stroke_free);
 FUNC_0(&VAR_2->sc_stroke_used);

 VAR_2->sc_n_strokes = 0;

 FUNC_2(&VAR_2->sc_strokes_data, 0, sizeof(VAR_2->sc_strokes_data));

 for (VAR_3 = 0; VAR_3 != VAR_0; VAR_3++) {
  FUNC_1(&VAR_2->sc_stroke_free, &VAR_2->sc_strokes_data[VAR_3],
      VAR_1);
 }
}
