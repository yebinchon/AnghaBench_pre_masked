
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reg_write_state {int write_count; int first_pred; int written_by_or; int written_by_and; int written_by_fp; } ;
struct reg_flags {int is_or; int is_and; int is_fp; } ;



__attribute__((used)) static void
FUNC_0 (struct reg_write_state *VAR_0, int VAR_1, struct reg_flags VAR_2, int VAR_3)
{
  if (VAR_3)
    VAR_0[VAR_1].write_count++;
  else
    VAR_0[VAR_1].write_count = 2;
  VAR_0[VAR_1].written_by_fp |= VAR_2.is_fp;

  VAR_0[VAR_1].written_by_and = VAR_2.is_and;
  VAR_0[VAR_1].written_by_or = VAR_2.is_or;
  VAR_0[VAR_1].first_pred = VAR_3;
}
