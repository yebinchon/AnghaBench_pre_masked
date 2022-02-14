
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ UInt32 ;
struct TYPE_6__ {scalar_t__ GlueCount; scalar_t__* FreeList; void* UnitsStart; void* Text; } ;
typedef TYPE_1__ CPpmd8 ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (unsigned int) ;
 unsigned int VAR_0 ;
 void* FUNC_2 (TYPE_1__*,unsigned int) ;
 int FUNC_3 (TYPE_1__*,void*,unsigned int,unsigned int) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static void *FUNC_5(CPpmd8 *VAR_1, unsigned VAR_2)
{
  unsigned VAR_3;
  void *VAR_4;
  if (VAR_1->GlueCount == 0)
  {
    FUNC_0(VAR_1);
    if (VAR_1->FreeList[VAR_2] != 0)
      return FUNC_2(VAR_1, VAR_2);
  }
  VAR_3 = VAR_2;
  do
  {
    if (++VAR_3 == VAR_0)
    {
      UInt32 VAR_5 = FUNC_4(FUNC_1(VAR_2));
      VAR_1->GlueCount--;
      return ((UInt32)(VAR_1->UnitsStart - VAR_1->Text) > VAR_5) ? (VAR_1->UnitsStart -= VAR_5) : (((void*)0));
    }
  }
  while (VAR_1->FreeList[VAR_3] == 0);
  VAR_4 = FUNC_2(VAR_1, VAR_3);
  FUNC_3(VAR_1, VAR_4, VAR_3, VAR_2);
  return VAR_4;
}
