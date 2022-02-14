
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct imx6_anatop_softc {scalar_t__ temp_last_cnt; scalar_t__ temp_throttle_trigger_cnt; scalar_t__ temp_throttle_reset_cnt; int temp_throttle_delay; int temp_throttle_callout; } ;


 int FUNC_0 (int *,int ,int ,void (*) (void*),struct imx6_anatop_softc*,int ) ;
 int FUNC_1 (struct imx6_anatop_softc*) ;
 int FUNC_2 (struct imx6_anatop_softc*) ;

__attribute__((used)) static void
FUNC_3(void *VAR_0)
{
 struct imx6_anatop_softc *VAR_1 = VAR_0;


 if (VAR_1->temp_last_cnt < VAR_1->temp_throttle_trigger_cnt)
  FUNC_2(VAR_1);
 else if (VAR_1->temp_last_cnt > (VAR_1->temp_throttle_reset_cnt))
  FUNC_1(VAR_1);

 FUNC_0(&VAR_1->temp_throttle_callout, VAR_1->temp_throttle_delay,
  0, FUNC_3, VAR_1, 0);

}
