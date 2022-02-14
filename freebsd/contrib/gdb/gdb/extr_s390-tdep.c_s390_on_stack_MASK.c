
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct prologue_value {int dummy; } ;
struct s390_prologue_data {int gpr_size; int fpr_size; struct prologue_value back_chain; struct prologue_value* spill; struct prologue_value* gpr; } ;
typedef enum pv_boolean { ____Placeholder_pv_boolean } pv_boolean ;
typedef int CORE_ADDR ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct prologue_value*,int ,struct prologue_value*,int,int,int*) ;
 int VAR_4 ;
 int FUNC_1 (struct prologue_value*,size_t,int) ;

__attribute__((used)) static enum pv_boolean
FUNC_2 (struct prologue_value *VAR_5,
               CORE_ADDR VAR_6,
        struct s390_prologue_data *VAR_7,
               struct prologue_value **VAR_8)
{
  struct prologue_value VAR_9;
  struct prologue_value VAR_10;
  struct prologue_value VAR_11;
  int VAR_12;
  enum pv_boolean VAR_13;


  FUNC_1 (&VAR_9, VAR_1, 2 * VAR_7->gpr_size);
  FUNC_1 (&VAR_10, VAR_1, 16 * VAR_7->gpr_size);
  VAR_11 = VAR_7->gpr[VAR_1 - VAR_0];







  VAR_13 = FUNC_0 (VAR_5, VAR_6, &VAR_9, 14, VAR_7->gpr_size, &VAR_12);
  if (VAR_13 == VAR_3)
    {
      *VAR_8 = &VAR_7->spill[VAR_12];
      return VAR_3;
    }
  if (VAR_13 == VAR_4)
    return VAR_4;


  VAR_13 = FUNC_0 (VAR_5, VAR_6, &VAR_10, 4, VAR_7->fpr_size, &VAR_12);
  if (VAR_13 == VAR_3)
    {
      *VAR_8 = &VAR_7->spill[14 + VAR_12];
      return VAR_3;
    }
  if (VAR_13 == VAR_4)
    return VAR_4;




  VAR_13 = FUNC_0 (VAR_5, VAR_6, &VAR_11, 1, VAR_7->gpr_size, &VAR_12);
  if (VAR_13 == VAR_3)
    {
      *VAR_8 = &VAR_7->back_chain;
      return VAR_3;
    }
  if (VAR_13 == VAR_4)
    return VAR_4;


  return VAR_2;
}
