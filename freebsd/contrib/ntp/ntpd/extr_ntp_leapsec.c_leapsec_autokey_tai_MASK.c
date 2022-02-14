
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int vint64 ;
typedef int uint32_t ;
typedef int time_t ;
struct TYPE_8__ {scalar_t__ base_tai; int size; int this_tai; int next_tai; } ;
struct TYPE_10__ {TYPE_2__* info; TYPE_1__ head; } ;
typedef TYPE_3__ leap_table_t ;
struct TYPE_11__ {scalar_t__ taiof; void* ttime; void* ebase; } ;
typedef TYPE_4__ leap_era_t ;
struct TYPE_9__ {int taiof; int dynls; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (void**,int) ;
 int FUNC_1 (TYPE_4__*,TYPE_3__*,int *) ;
 TYPE_3__* FUNC_2 (int) ;
 int FUNC_3 (int ,int const*) ;
 scalar_t__ FUNC_4 (int *,void**) ;

int
FUNC_5(
 int VAR_2,
 uint32_t VAR_3 ,
 const time_t * VAR_4 )
{
 leap_table_t * VAR_5;
 leap_era_t VAR_6;
 vint64 VAR_7;
 int VAR_8;

 (void)VAR_2;
 VAR_5 = FUNC_2(VAR_0);





 if (VAR_5->head.base_tai != 0 || VAR_2 < 10)
  return VAR_0;
 for (VAR_8 = 0; VAR_8 != VAR_5->head.size; VAR_8++)
  if ( ! VAR_5->info[VAR_8].dynls)
   return VAR_0;


 VAR_7 = FUNC_3(VAR_3, VAR_4);
 FUNC_1(&VAR_6, VAR_5, &VAR_7);


 VAR_6.ebase = FUNC_0(&VAR_6.ebase, 20);
 if (FUNC_4(&VAR_7, &VAR_6.ebase) < 0)
  return VAR_0;

 VAR_6.ttime = FUNC_0(&VAR_6.ttime, -20);
 if (FUNC_4(&VAR_7, &VAR_6.ttime) > 0)
  return VAR_0;


 VAR_2 -= VAR_6.taiof;


 VAR_5->head.base_tai += VAR_2;
 VAR_5->head.this_tai += VAR_2;
 VAR_5->head.next_tai += VAR_2;


 for (VAR_8 = 0; VAR_8 != VAR_5->head.size; VAR_8++)
  VAR_5->info[VAR_8].taiof += VAR_2;


 return VAR_1;
}
