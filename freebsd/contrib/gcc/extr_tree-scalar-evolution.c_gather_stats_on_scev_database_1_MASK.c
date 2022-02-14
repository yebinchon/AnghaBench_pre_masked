
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scev_info_str {int chrec; } ;
struct chrec_stats {int dummy; } ;


 int FUNC_0 (int ,struct chrec_stats*) ;

__attribute__((used)) static int
FUNC_1 (void **VAR_0, void *VAR_1)
{
  struct scev_info_str *VAR_2 = (struct scev_info_str *) *VAR_0;

  FUNC_0 (VAR_2->chrec, (struct chrec_stats *) VAR_1);

  return 1;
}
