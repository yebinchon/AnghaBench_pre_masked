
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef scalar_t__ int64_t ;
struct TYPE_7__ {int dd_lock; int dd_pool; struct TYPE_7__* dd_parent; } ;
typedef TYPE_1__ dsl_dir_t ;
struct TYPE_8__ {scalar_t__ dd_quota; scalar_t__ dd_used_bytes; scalar_t__ dd_reserved; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_5__* FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

uint64_t
FUNC_7(dsl_dir_t *VAR_2,
    dsl_dir_t *VAR_3, int64_t VAR_4, int VAR_5)
{
 uint64_t VAR_6, VAR_7, VAR_8, VAR_9;





 VAR_8 = VAR_0;
 VAR_6 = VAR_0;

 if (VAR_2->dd_parent != ((void*)0)) {
  VAR_6 = FUNC_7(VAR_2->dd_parent,
      VAR_3, VAR_4, VAR_5);
 }

 FUNC_5(&VAR_2->dd_lock);
 if (FUNC_2(VAR_2)->dd_quota != 0)
  VAR_8 = FUNC_2(VAR_2)->dd_quota;
 VAR_9 = FUNC_2(VAR_2)->dd_used_bytes;
 if (!VAR_5)
  VAR_9 += FUNC_3(VAR_2);

 if (VAR_2->dd_parent == ((void*)0)) {
  uint64_t VAR_10 = FUNC_4(VAR_2->dd_pool,
      VAR_1);
  VAR_8 = FUNC_1(VAR_8, VAR_10);
 }

 if (FUNC_2(VAR_2)->dd_reserved > VAR_9 && VAR_6 != VAR_0) {




  VAR_6 += FUNC_2(VAR_2)->dd_reserved - VAR_9;
 }

 if (VAR_2 == VAR_3) {
  FUNC_0(VAR_4 <= 0);
  FUNC_0(VAR_9 >= -VAR_4);
  VAR_9 += VAR_4;
  if (VAR_6 != VAR_0)
   VAR_6 -= VAR_4;
 }

 if (VAR_9 > VAR_8) {

  VAR_7 = 0;
 } else {




  VAR_7 = FUNC_1(VAR_6, VAR_8 - VAR_9);
 }

 FUNC_6(&VAR_2->dd_lock);

 return (VAR_7);
}
