
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct perf_read_values {int ** value; } ;


 int FUNC_0 (struct perf_read_values*,int ,char const*) ;
 int FUNC_1 (struct perf_read_values*,int ,int ) ;

void FUNC_2(struct perf_read_values *VAR_0,
    u32 VAR_1, u32 VAR_2,
    u64 VAR_3, const char *VAR_4, u64 VAR_5)
{
 int VAR_6, VAR_7;

 VAR_6 = FUNC_1(VAR_0, VAR_1, VAR_2);
 VAR_7 = FUNC_0(VAR_0, VAR_3, VAR_4);

 VAR_0->value[VAR_6][VAR_7] = VAR_5;
}
