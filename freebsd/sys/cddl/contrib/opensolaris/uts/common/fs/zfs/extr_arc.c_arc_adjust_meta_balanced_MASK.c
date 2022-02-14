
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef scalar_t__ int64_t ;
typedef size_t arc_buf_contents_t ;
struct TYPE_6__ {int * arcs_esize; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int ,scalar_t__,size_t) ;
 scalar_t__ VAR_2 ;
 TYPE_1__* VAR_3 ;
 TYPE_1__* VAR_4 ;
 TYPE_1__* VAR_5 ;
 TYPE_1__* VAR_6 ;
 int FUNC_3 (scalar_t__) ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_4 (int *) ;

__attribute__((used)) static uint64_t
FUNC_5(uint64_t VAR_9)
{
 int64_t VAR_10, VAR_11 = 0, VAR_12;
 uint64_t VAR_13 = 0;
 arc_buf_contents_t VAR_14 = VAR_0;
 int VAR_15 = FUNC_0(VAR_7, 0);

restart:
 VAR_12 = VAR_9 - VAR_2;

 if (VAR_12 > 0 &&
     FUNC_4(&VAR_5->arcs_esize[VAR_14]) > 0) {
  VAR_10 = FUNC_1(FUNC_4(&VAR_5->arcs_esize[VAR_14]),
      VAR_12);
  VAR_13 += FUNC_2(VAR_5, 0, VAR_10, VAR_14);
  VAR_12 -= VAR_10;
 }
 if (VAR_12 > 0 &&
     FUNC_4(&VAR_3->arcs_esize[VAR_14]) > 0) {
  VAR_10 = FUNC_1(FUNC_4(&VAR_3->arcs_esize[VAR_14]),
      VAR_12);
  VAR_13 += FUNC_2(VAR_3, 0, VAR_10, VAR_14);
 }

 VAR_12 = VAR_9 - VAR_2;

 if (VAR_12 > 0 &&
     FUNC_4(&VAR_6->arcs_esize[VAR_14]) > 0) {
  VAR_10 = FUNC_1(VAR_12,
      FUNC_4(&VAR_6->arcs_esize[VAR_14]));
  VAR_13 += FUNC_2(VAR_6, 0, VAR_10, VAR_14);
  VAR_12 -= VAR_10;
 }

 if (VAR_12 > 0 &&
     FUNC_4(&VAR_4->arcs_esize[VAR_14]) > 0) {
  VAR_10 = FUNC_1(VAR_12,
      FUNC_4(&VAR_4->arcs_esize[VAR_14]));
  VAR_13 += FUNC_2(VAR_4, 0, VAR_10, VAR_14);
 }
 if (VAR_9 > VAR_2) {
  if (VAR_14 == VAR_0) {
   VAR_14 = VAR_1;
  } else {
   VAR_14 = VAR_0;

   if (VAR_8) {
    VAR_11 += VAR_8;
    FUNC_3(VAR_11);
   }
  }

  if (VAR_15 > 0) {
   VAR_15--;
   goto restart;
  }
 }
 return (VAR_13);
}
