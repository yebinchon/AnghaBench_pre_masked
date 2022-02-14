
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int u_int32_t ;
typedef scalar_t__ indx_t ;
struct TYPE_13__ {int bt_nrecs; } ;
struct TYPE_12__ {int upper; scalar_t__* linp; int lower; } ;
struct TYPE_11__ {int flags; int bytes; } ;
typedef TYPE_1__ RLEAF ;
typedef TYPE_2__ PAGE ;
typedef TYPE_3__ BTREE ;


 TYPE_1__* FUNC_0 (TYPE_2__*,int) ;
 size_t FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (TYPE_3__*,int ) ;
 int FUNC_4 (char*,char*,int) ;

int
FUNC_5(BTREE *VAR_3, PAGE *VAR_4, u_int32_t VAR_5)
{
 RLEAF *VAR_6;
 indx_t *VAR_7, VAR_8, VAR_9;
 u_int32_t VAR_10;
 char *VAR_11;
 void *VAR_12;
 VAR_12 = VAR_6 = FUNC_0(VAR_4, VAR_5);
 if (VAR_6->flags & VAR_0 && FUNC_3(VAR_3, VAR_6->bytes) == VAR_1)
  return (VAR_1);
 VAR_10 = FUNC_2(VAR_6);





 VAR_11 = (char *)VAR_4 + VAR_4->upper;
 FUNC_4(VAR_11 + VAR_10, VAR_11, (char *)VAR_12 - VAR_11);
 VAR_4->upper += VAR_10;

 VAR_9 = VAR_4->linp[VAR_5];
 for (VAR_8 = &VAR_4->linp[VAR_5] - (VAR_7 = &VAR_4->linp[0]); VAR_8--; ++VAR_7)
  if (VAR_7[0] < VAR_9)
   VAR_7[0] += VAR_10;
 for (VAR_8 = &VAR_4->linp[FUNC_1(VAR_4)] - VAR_7; --VAR_8; ++VAR_7)
  VAR_7[0] = VAR_7[1] < VAR_9 ? VAR_7[1] + VAR_10 : VAR_7[1];
 VAR_4->lower -= sizeof(indx_t);
 --VAR_3->bt_nrecs;
 return (VAR_2);
}
