
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_int32_t ;
struct TYPE_4__ {int nmaps; int ** mapp; int * BITMAPS; int BSIZE; } ;
typedef TYPE_1__ HTAB ;


 scalar_t__ FUNC_0 (TYPE_1__*,char*,int ,int ,int,int) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static u_int32_t *
FUNC_3(HTAB *VAR_0, int VAR_1)
{
 if (VAR_1 >= VAR_0->nmaps)
  return (((void*)0));
 if ((VAR_0->mapp[VAR_1] = (u_int32_t *)FUNC_2(VAR_0->BSIZE)) == ((void*)0))
  return (((void*)0));
 if (FUNC_0(VAR_0,
     (char *)VAR_0->mapp[VAR_1], VAR_0->BITMAPS[VAR_1], 0, 1, 1)) {
  FUNC_1(VAR_0->mapp[VAR_1]);
  return (((void*)0));
 }
 return (VAR_0->mapp[VAR_1]);
}
