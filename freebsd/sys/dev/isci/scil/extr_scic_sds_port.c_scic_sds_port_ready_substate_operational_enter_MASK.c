
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef size_t U32 ;
struct TYPE_9__ {int active_phy_mask; int enabled_phy_mask; int ** phy_table; } ;
typedef int SCI_BASE_OBJECT_T ;
typedef TYPE_1__ SCIC_SDS_PORT_T ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int ,TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int *) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,int *) ;

__attribute__((used)) static
void FUNC_7(
   SCI_BASE_OBJECT_T *VAR_2
)
{
   U32 VAR_3;
   SCIC_SDS_PORT_T *VAR_4 = (SCIC_SDS_PORT_T *)VAR_2;

   FUNC_4(
      VAR_4, VAR_0
   );

   FUNC_0(
      FUNC_1(VAR_4), VAR_4
   );

   for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++)
   {
      if (VAR_4->phy_table[VAR_3] != ((void*)0))
      {
         FUNC_6(
            VAR_4, VAR_4->phy_table[VAR_3]
         );



         if ( ( (VAR_4->active_phy_mask ^ VAR_4->enabled_phy_mask) & (1 << VAR_3) ) != 0)
         {
            FUNC_3 (
               VAR_4,
               VAR_4->phy_table[VAR_3]
            );
         }
      }
   }

   FUNC_5(VAR_4);



   FUNC_2(VAR_4);
}
