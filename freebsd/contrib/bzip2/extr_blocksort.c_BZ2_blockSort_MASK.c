
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ UInt32 ;
typedef int UInt16 ;
typedef int UChar ;
struct TYPE_3__ {int nblock; int verbosity; int workFactor; int origPtr; int arr2; int arr1; scalar_t__* ftab; int * block; scalar_t__* ptr; } ;
typedef int Int32 ;
typedef TYPE_1__ EState ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int,int,float) ;
 int FUNC_3 (int ,int ,scalar_t__*,int,int) ;
 int FUNC_4 (scalar_t__*,int *,int *,scalar_t__*,int,int,int*) ;

void FUNC_5 ( EState* VAR_1 )
{
   UInt32* VAR_2 = VAR_1->ptr;
   UChar* VAR_3 = VAR_1->block;
   UInt32* VAR_4 = VAR_1->ftab;
   Int32 VAR_5 = VAR_1->nblock;
   Int32 VAR_6 = VAR_1->verbosity;
   Int32 VAR_7 = VAR_1->workFactor;
   UInt16* VAR_8;
   Int32 VAR_9;
   Int32 VAR_10;
   Int32 VAR_11;

   if (VAR_5 < 10000) {
      FUNC_3 ( VAR_1->arr1, VAR_1->arr2, VAR_4, VAR_5, VAR_6 );
   } else {





      VAR_11 = VAR_5+VAR_0;
      if (VAR_11 & 1) VAR_11++;
      VAR_8 = (UInt16*)(&(VAR_3[VAR_11]));
      if (VAR_7 < 1 ) VAR_7 = 1;
      if (VAR_7 > 100) VAR_7 = 100;
      VAR_10 = VAR_5 * ((VAR_7-1) / 3);
      VAR_9 = VAR_10;

      FUNC_4 ( VAR_2, VAR_3, VAR_8, VAR_4, VAR_5, VAR_6, &VAR_9 );
      if (VAR_6 >= 3)
         FUNC_2 ( "      %d work, %d block, ratio %5.2f\n",
                    VAR_10 - VAR_9,
                    VAR_5,
                    (float)(VAR_10 - VAR_9) /
                    (float)(VAR_5==0 ? 1 : VAR_5) );
      if (VAR_9 < 0) {
         if (VAR_6 >= 2)
            FUNC_1 ( "    too repetitive; using fallback"
                       " sorting algorithm\n" );
         FUNC_3 ( VAR_1->arr1, VAR_1->arr2, VAR_4, VAR_5, VAR_6 );
      }
   }

   VAR_1->origPtr = -1;
   for (VAR_11 = 0; VAR_11 < VAR_1->nblock; VAR_11++)
      if (VAR_2[VAR_11] == 0)
         { VAR_1->origPtr = VAR_11; break; };

   FUNC_0( VAR_1->origPtr != -1, 1003 );
}
