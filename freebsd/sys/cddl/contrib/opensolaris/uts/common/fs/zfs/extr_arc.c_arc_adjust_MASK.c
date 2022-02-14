
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef scalar_t__ int64_t ;
struct TYPE_9__ {int arcs_size; } ;
struct TYPE_8__ {int arcs_size; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 TYPE_5__* VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 TYPE_1__* VAR_6 ;
 TYPE_1__* VAR_7 ;
 TYPE_1__* VAR_8 ;
 TYPE_1__* VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_5 (int *) ;

__attribute__((used)) static uint64_t
FUNC_6(void)
{
 uint64_t VAR_12 = 0;
 uint64_t VAR_13;
 int64_t VAR_14;
 uint64_t VAR_15 = FUNC_1(&VAR_11);
 uint64_t VAR_16 = FUNC_1(&VAR_5);





 VAR_12 += FUNC_3(VAR_16);
 VAR_14 = FUNC_0((int64_t)(VAR_15 - VAR_3),
     (int64_t)(FUNC_5(&VAR_2->arcs_size) +
     FUNC_5(&VAR_8->arcs_size) + VAR_16 - VAR_10));
 if (FUNC_4(VAR_8) == VAR_1 &&
     VAR_16 > VAR_4) {
  VAR_13 = FUNC_2(VAR_8, 0, VAR_14, VAR_1);
  VAR_12 += VAR_13;





  VAR_14 -= VAR_13;

  VAR_12 +=
      FUNC_2(VAR_8, 0, VAR_14, VAR_0);
 } else {
  VAR_13 = FUNC_2(VAR_8, 0, VAR_14, VAR_0);
  VAR_12 += VAR_13;





  VAR_14 -= VAR_13;

  VAR_12 +=
      FUNC_2(VAR_8, 0, VAR_14, VAR_1);
 }




 VAR_15 = FUNC_1(&VAR_11);
 VAR_16 = FUNC_1(&VAR_5);
 VAR_14 = VAR_15 - VAR_3;

 if (FUNC_4(VAR_6) == VAR_1 &&
     VAR_16 > VAR_4) {
  VAR_13 = FUNC_2(VAR_6, 0, VAR_14, VAR_1);
  VAR_12 += VAR_13;





  VAR_14 -= VAR_13;

  VAR_12 +=
      FUNC_2(VAR_6, 0, VAR_14, VAR_0);
 } else {
  VAR_13 = FUNC_2(VAR_6, 0, VAR_14, VAR_0);
  VAR_12 += VAR_13;





  VAR_14 -= VAR_13;

  VAR_12 +=
      FUNC_2(VAR_6, 0, VAR_14, VAR_1);
 }
 VAR_14 = FUNC_5(&VAR_8->arcs_size) +
     FUNC_5(&VAR_9->arcs_size) - VAR_3;

 VAR_13 = FUNC_2(VAR_9, 0, VAR_14, VAR_0);
 VAR_12 += VAR_13;

 VAR_14 -= VAR_13;

 VAR_12 +=
     FUNC_2(VAR_9, 0, VAR_14, VAR_1);
 VAR_14 = FUNC_5(&VAR_9->arcs_size) +
     FUNC_5(&VAR_7->arcs_size) - VAR_3;

 VAR_13 = FUNC_2(VAR_7, 0, VAR_14, VAR_0);
 VAR_12 += VAR_13;

 VAR_14 -= VAR_13;

 VAR_12 +=
     FUNC_2(VAR_7, 0, VAR_14, VAR_1);

 return (VAR_12);
}
