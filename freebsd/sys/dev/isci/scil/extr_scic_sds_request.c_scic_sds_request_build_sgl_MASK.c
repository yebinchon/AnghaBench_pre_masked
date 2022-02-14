
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ U32 ;
struct TYPE_4__ {scalar_t__ next_pair_lower; scalar_t__ next_pair_upper; int B; int A; } ;
typedef TYPE_1__ SCU_SGL_ELEMENT_PAIR_T ;
typedef int SCI_PHYSICAL_ADDRESS ;
typedef int SCIC_SDS_REQUEST_T ;


 int FUNC_0 (void*,int ,void*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (void*,void*,void**) ;
 int FUNC_5 (int ,int *,TYPE_1__*,int *) ;
 int FUNC_6 (int *) ;
 TYPE_1__* FUNC_7 (int *,scalar_t__) ;
 void* FUNC_8 (int *) ;

void FUNC_9(
   SCIC_SDS_REQUEST_T *VAR_0
)
{
   void *VAR_1;
   void *VAR_2;
   SCI_PHYSICAL_ADDRESS VAR_3;
   U32 VAR_4 = 0;
   SCU_SGL_ELEMENT_PAIR_T *VAR_5 = ((void*)0);
   SCU_SGL_ELEMENT_PAIR_T *VAR_6 = ((void*)0);

   VAR_2 = FUNC_8(VAR_0);
   FUNC_4(VAR_2, ((void*)0), &VAR_1);

   while (VAR_1 != ((void*)0))
   {
      VAR_5 =
         FUNC_7(VAR_0, VAR_4);

      FUNC_0(VAR_2, VAR_5->A, VAR_1);

      FUNC_4(VAR_2, VAR_1, &VAR_1);

      if (VAR_1 != ((void*)0))
      {
         FUNC_0(VAR_2, VAR_5->B, VAR_1);

         FUNC_4(VAR_2, VAR_1, &VAR_1);
      }
      else
      {
         FUNC_1(VAR_5->B);
      }

      if (VAR_6 != ((void*)0))
      {
         FUNC_5(
            FUNC_6(VAR_0),
            VAR_0,
            VAR_5,
            &VAR_3
         );

         VAR_6->next_pair_upper =
            FUNC_3(VAR_3);
         VAR_6->next_pair_lower =
            FUNC_2(VAR_3);
      }

      VAR_6 = VAR_5;
      VAR_4++;
   }

   if (VAR_5 != ((void*)0))
   {
      VAR_5->next_pair_upper = 0;
      VAR_5->next_pair_lower = 0;
   }
}
