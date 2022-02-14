
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bce_softc {int last_status_idx; int hc_command; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct bce_softc*,int ,int) ;

__attribute__((used)) static void
FUNC_3(struct bce_softc *VAR_6, int VAR_7)
{
 FUNC_0(VAR_5);

 FUNC_2(VAR_6, VAR_2,
     VAR_3 |
     VAR_4 | VAR_6->last_status_idx);

 FUNC_2(VAR_6, VAR_2,
     VAR_3 | VAR_6->last_status_idx);


 if (VAR_7)
  FUNC_2(VAR_6, VAR_0, VAR_6->hc_command | VAR_1);

 FUNC_1(VAR_5);
}
