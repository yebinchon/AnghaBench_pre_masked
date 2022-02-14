
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xonar_pcm179x {int broken_i2c; } ;
struct oxygen {int card; struct xonar_pcm179x* model_data; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,struct oxygen*) ;

__attribute__((used)) static int FUNC_2(struct oxygen *VAR_1)
{
 struct xonar_pcm179x *VAR_2 = VAR_1->model_data;
 int VAR_3;

 if (!VAR_2->broken_i2c) {
  VAR_3 = FUNC_0(VAR_1->card,
      FUNC_1(&VAR_0, VAR_1));
  if (VAR_3 < 0)
   return VAR_3;
 }
 return 0;
}
