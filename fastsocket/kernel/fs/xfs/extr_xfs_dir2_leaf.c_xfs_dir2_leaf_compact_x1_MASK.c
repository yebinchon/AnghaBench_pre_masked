
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int count; int stale; } ;
struct TYPE_8__ {TYPE_2__ hdr; TYPE_1__* ents; } ;
typedef TYPE_3__ xfs_dir2_leaf_t ;
struct TYPE_9__ {TYPE_3__* data; } ;
typedef TYPE_4__ xfs_dabuf_t ;
struct TYPE_6__ {int address; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int) ;

void
FUNC_5(
 xfs_dabuf_t *VAR_1,
 int *VAR_2,
 int *VAR_3,
 int *VAR_4,
 int *VAR_5,
 int *VAR_6)
{
 int VAR_7;
 int VAR_8;
 int VAR_9;
 int VAR_10;
 xfs_dir2_leaf_t *VAR_11;
 int VAR_12;
 int VAR_13=0;
 int VAR_14;

 VAR_11 = VAR_1->data;
 FUNC_0(FUNC_2(VAR_11->hdr.stale) > 1);
 VAR_9 = *VAR_2;



 for (VAR_12 = VAR_9 - 1;
      VAR_12 >= 0 &&
  FUNC_3(VAR_11->ents[VAR_12].address) != VAR_0;
      VAR_12--)
  continue;




 for (VAR_8 = VAR_9;
      VAR_8 < FUNC_2(VAR_11->hdr.count) &&
  FUNC_3(VAR_11->ents[VAR_8].address) != VAR_0 &&
  (VAR_12 < 0 || VAR_9 - VAR_12 > VAR_8 - VAR_9);
      VAR_8++)
  continue;



 if (VAR_12 >= 0 &&
     (VAR_8 == FUNC_2(VAR_11->hdr.count) ||
      VAR_9 - VAR_12 <= VAR_8 - VAR_9))
  VAR_10 = VAR_12;
 else
  VAR_10 = VAR_8;




 for (VAR_7 = VAR_14 = 0; VAR_7 < FUNC_2(VAR_11->hdr.count); VAR_7++) {



  if (VAR_9 == VAR_7)
   VAR_13 = VAR_14;
  if (VAR_7 != VAR_10 &&
      FUNC_3(VAR_11->ents[VAR_7].address) == VAR_0) {
   if (VAR_7 == VAR_14)
    *VAR_5 = VAR_14;
   continue;
  }



  if (VAR_7 == VAR_10)
   VAR_12 = VAR_8 = VAR_14;



  if (VAR_7 > VAR_14)
   VAR_11->ents[VAR_14] = VAR_11->ents[VAR_7];
  VAR_14++;
 }
 FUNC_0(VAR_7 > VAR_14);




 if (VAR_9 == VAR_7)
  VAR_13 = VAR_14;
 *VAR_2 = VAR_13;



 FUNC_1(&VAR_11->hdr.count, -(VAR_7 - VAR_14));
 VAR_11->hdr.stale = FUNC_4(1);




 if (VAR_12 >= VAR_13)
  VAR_12 = -1;
 else
  VAR_8 = FUNC_2(VAR_11->hdr.count);
 *VAR_6 = FUNC_2(VAR_11->hdr.count) - 1;
 *VAR_3 = VAR_12;
 *VAR_4 = VAR_8;
}
