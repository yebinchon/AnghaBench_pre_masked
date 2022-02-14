
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int mr_Bytes; struct TYPE_5__* mr_Next; } ;
struct TYPE_4__ {char* mp_End; scalar_t__ mp_Base; TYPE_2__* mp_First; scalar_t__ mp_Size; } ;
typedef TYPE_1__ MemPool ;
typedef TYPE_2__ MemNode ;


 int FUNC_0 (char*,int,...) ;

void
FUNC_1(MemPool *VAR_0)
{
 int VAR_1 = 0;
 int VAR_2 = 0;
 int VAR_3 = 0;
 MemNode *VAR_4;

 FUNC_0("%d bytes reserved", (int)VAR_0->mp_Size);

 VAR_4 = VAR_0->mp_First;

 if ((void *)VAR_4 != (void *)VAR_0->mp_Base) {
  VAR_1 += (char *)VAR_4 - (char *)VAR_0->mp_Base;
 }

 while (VAR_4 != ((void*)0)) {
  if ((char *)VAR_4 + VAR_4->mr_Bytes != VAR_0->mp_End) {
   VAR_2 += VAR_4->mr_Bytes;
   ++VAR_3;
  }
  if (VAR_4->mr_Next != ((void*)0)) {
   VAR_1 += (char *)VAR_4->mr_Next -
       ((char *)VAR_4 + VAR_4->mr_Bytes);
  }
  VAR_4 = VAR_4->mr_Next;
 }
 FUNC_0(" %d bytes allocated\n%d fragments (%d bytes fragmented)\n",
     VAR_1, VAR_3, VAR_2);
}
