
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xonar_hdav {int hdmi; } ;
struct oxygen {struct xonar_hdav* model_data; } ;


 int FUNC_0 (struct oxygen*) ;
 int FUNC_1 (struct oxygen*) ;
 int FUNC_2 (struct oxygen*,int *) ;

__attribute__((used)) static void FUNC_3(struct oxygen *VAR_0)
{
 struct xonar_hdav *VAR_1 = VAR_0->model_data;

 FUNC_0(VAR_0);
 FUNC_2(VAR_0, &VAR_1->hdmi);
 FUNC_1(VAR_0);
}
