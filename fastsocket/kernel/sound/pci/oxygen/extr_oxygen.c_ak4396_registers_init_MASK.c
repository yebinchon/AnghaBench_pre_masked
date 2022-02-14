
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct oxygen {int* dac_volume; struct generic_data* model_data; } ;
struct generic_data {unsigned int dacs; int** ak4396_regs; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct oxygen*,unsigned int,size_t,int) ;

__attribute__((used)) static void FUNC_1(struct oxygen *VAR_8)
{
 struct generic_data *VAR_9 = VAR_8->model_data;
 unsigned int VAR_10;

 for (VAR_10 = 0; VAR_10 < VAR_9->dacs; ++VAR_10) {
  FUNC_0(VAR_8, VAR_10, VAR_0,
        VAR_3 | VAR_7);
  FUNC_0(VAR_8, VAR_10, VAR_1,
        VAR_9->ak4396_regs[0][VAR_1]);
  FUNC_0(VAR_8, VAR_10, VAR_2,
        VAR_5);
  FUNC_0(VAR_8, VAR_10, VAR_4,
        VAR_8->dac_volume[VAR_10 * 2]);
  FUNC_0(VAR_8, VAR_10, VAR_6,
        VAR_8->dac_volume[VAR_10 * 2 + 1]);
 }
}
