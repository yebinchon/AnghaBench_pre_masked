
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tracing_data {int temp_file; scalar_t__ temp; } ;


 int FUNC_0 (struct tracing_data*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;

void FUNC_3(struct tracing_data *VAR_0)
{
 if (VAR_0->temp) {
  FUNC_1(VAR_0->temp_file, 0);
  FUNC_2(VAR_0->temp_file);
 }

 FUNC_0(VAR_0);
}
