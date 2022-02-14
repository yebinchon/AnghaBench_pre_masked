
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct atp_softc {int sc_n_strokes; int sc_stroke_used; int sc_stroke_free; } ;
typedef int atp_stroke_t ;


 int * FUNC_0 (int *) ;
 int FUNC_1 (int *,int *,int ) ;
 int FUNC_2 (int *,int *,int ) ;
 int VAR_0 ;
 int FUNC_3 (int *,int ,int) ;

__attribute__((used)) static atp_stroke_t *
FUNC_4(struct atp_softc *VAR_1)
{
 atp_stroke_t *VAR_2;

 VAR_2 = FUNC_0(&VAR_1->sc_stroke_free);
 if (VAR_2 == ((void*)0))
  goto done;

 FUNC_2(&VAR_1->sc_stroke_free, VAR_2, VAR_0);
 FUNC_3(VAR_2, 0, sizeof(*VAR_2));
 FUNC_1(&VAR_1->sc_stroke_used, VAR_2, VAR_0);

 VAR_1->sc_n_strokes++;
done:
 return (VAR_2);
}
