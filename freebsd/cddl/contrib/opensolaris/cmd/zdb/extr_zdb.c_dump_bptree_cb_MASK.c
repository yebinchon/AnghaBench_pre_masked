
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int dmu_tx_t ;
struct TYPE_4__ {scalar_t__ blk_birth; } ;
typedef TYPE_1__ blkptr_t ;
typedef int blkbuf ;


 int VAR_0 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*,int,TYPE_1__ const*) ;

__attribute__((used)) static int
FUNC_2(void *VAR_1, const blkptr_t *VAR_2, dmu_tx_t *VAR_3)
{
 char VAR_4[VAR_0];

 if (VAR_2->blk_birth != 0) {
  FUNC_1(VAR_4, sizeof (VAR_4), VAR_2);
  (void) FUNC_0("\t%s\n", VAR_4);
 }
 return (0);
}
