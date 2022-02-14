
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int lzma_ret ;
struct TYPE_4__ {scalar_t__ id; } ;
typedef TYPE_1__ lzma_filter ;
struct TYPE_5__ {scalar_t__ id; int non_last_ok; int last_ok; scalar_t__ changes_size; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_3__* VAR_5 ;

__attribute__((used)) static lzma_ret
FUNC_0(const lzma_filter *VAR_6, size_t *VAR_7)
{

 if (VAR_6 == ((void*)0) || VAR_6[0].id == VAR_4)
  return VAR_3;



 size_t VAR_8 = 0;


 bool VAR_9 = 1;




 bool VAR_10 = 0;

 size_t VAR_11 = 0;
 do {
  size_t VAR_12;
  for (VAR_12 = 0; VAR_6[VAR_11].id != VAR_5[VAR_12].id; ++VAR_12)
   if (VAR_5[VAR_12].id == VAR_4)
    return VAR_2;



  if (!VAR_9)
   return VAR_2;

  VAR_9 = VAR_5[VAR_12].non_last_ok;
  VAR_10 = VAR_5[VAR_12].last_ok;
  VAR_8 += VAR_5[VAR_12].changes_size;

 } while (VAR_6[++VAR_11].id != VAR_4);




 if (VAR_11 > VAR_0 || !VAR_10 || VAR_8 > 3)
  return VAR_2;

 *VAR_7 = VAR_11;
 return VAR_1;
}
