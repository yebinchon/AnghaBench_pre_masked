
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t src_string; size_t dest_string; size_t real_len; size_t pseudo_len; } ;
typedef TYPE_1__ xprintf_struct ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (size_t,size_t,size_t) ;
 scalar_t__ FUNC_1 (TYPE_1__*,size_t) ;
 size_t FUNC_2 (size_t,char*) ;

__attribute__((used)) static int FUNC_3(xprintf_struct * VAR_1)
{
  size_t VAR_2;

  VAR_2 = FUNC_2(VAR_1->src_string, "%");



  if (FUNC_1(VAR_1,VAR_2) == VAR_0)
    return VAR_0;

  FUNC_0(VAR_1->dest_string, VAR_1->src_string, VAR_2);
  VAR_1->src_string += VAR_2;
  VAR_1->dest_string += VAR_2;
  VAR_1->real_len += VAR_2;
  VAR_1->pseudo_len += VAR_2;

  return 0;
}
