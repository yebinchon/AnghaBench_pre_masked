
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__* FreeList; int * UnitsStart; } ;
typedef TYPE_1__ CPpmd8 ;
typedef int Byte ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (TYPE_1__*,void*,unsigned int) ;
 int FUNC_2 (void*,void*,unsigned int) ;
 scalar_t__ FUNC_3 (void*) ;
 void* FUNC_4 (TYPE_1__*,unsigned int) ;
 int FUNC_5 (int ) ;
 unsigned int FUNC_6 (unsigned int) ;

__attribute__((used)) static void *FUNC_7(CPpmd8 *VAR_0, void *VAR_1, unsigned VAR_2)
{
  unsigned VAR_3 = FUNC_6(VAR_2);
  void *VAR_4;
  if ((Byte *)VAR_1 > VAR_0->UnitsStart + 16 * 1024 || FUNC_3(VAR_1) > VAR_0->FreeList[VAR_3])
    return VAR_1;
  VAR_4 = FUNC_4(VAR_0, VAR_3);
  FUNC_2(VAR_4, VAR_1, VAR_2);
  if ((Byte*)VAR_1 != VAR_0->UnitsStart)
    FUNC_1(VAR_0, VAR_1, VAR_3);
  else
    VAR_0->UnitsStart += FUNC_5(FUNC_0(VAR_3));
  return VAR_4;
}
