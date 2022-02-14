
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int freq; double live_length; double size; int n_refs; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1 (const void *VAR_2, const void *VAR_3)
{
  int VAR_4 = *(const int *)VAR_2, VAR_5 = *(const int *)VAR_3;





  int VAR_6
    = (((double) (FUNC_0 (VAR_1[VAR_4].n_refs) * VAR_1[VAR_4].freq)
 / VAR_1[VAR_4].live_length)
       * (10000 / VAR_0) * VAR_1[VAR_4].size);
  int VAR_7
    = (((double) (FUNC_0 (VAR_1[VAR_5].n_refs) * VAR_1[VAR_5].freq)
 / VAR_1[VAR_5].live_length)
       * (10000 / VAR_0) * VAR_1[VAR_5].size);
  if (VAR_7 - VAR_6)
    return VAR_7 - VAR_6;



  return VAR_4 - VAR_5;
}
