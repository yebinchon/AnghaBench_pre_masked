
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u_int32_t ;
typedef int u_int16_t ;
struct TYPE_9__ {int addr; } ;
struct TYPE_8__ {int* SPARES; int LAST_FREED; int BSHIFT; int BSIZE; int ** mapp; } ;
typedef TYPE_1__ HTAB ;
typedef TYPE_2__ BUFHEAD ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_2 (int ) ;
 int * FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (int ,char*,int,...) ;
 int VAR_3 ;

void
FUNC_5(HTAB *VAR_4, BUFHEAD *VAR_5)
{
 u_int16_t VAR_6;
 u_int32_t *VAR_7;
 int VAR_8, VAR_9, VAR_10;
 u_int16_t VAR_11;

 VAR_6 = VAR_5->addr;



 VAR_11 = (((u_int16_t)VAR_6) >> VAR_2);
 VAR_8 =
     (VAR_11 ? VAR_4->SPARES[VAR_11 - 1] : 0) + (VAR_6 & VAR_1) - 1;
  if (VAR_8 < VAR_4->LAST_FREED)
  VAR_4->LAST_FREED = VAR_8;
 VAR_9 = (VAR_8 >> (VAR_4->BSHIFT + VAR_0));
 VAR_10 = VAR_8 & ((VAR_4->BSIZE << VAR_0) - 1);

 if (!(VAR_7 = VAR_4->mapp[VAR_9]))
  VAR_7 = FUNC_3(VAR_4, VAR_9);
 FUNC_0(VAR_7, VAR_10);




 FUNC_1(VAR_4, VAR_5);
}
