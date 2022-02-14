
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int core_object; } ;
struct TYPE_7__ {int core_object; } ;
typedef scalar_t__ SCI_STATUS ;
typedef scalar_t__ SCI_LIBRARY_HANDLE_T ;
typedef scalar_t__ SCI_CONTROLLER_HANDLE_T ;
typedef TYPE_1__ SCIF_SAS_LIBRARY_T ;
typedef TYPE_2__ SCIF_SAS_CONTROLLER_T ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,scalar_t__*,scalar_t__*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (TYPE_2__*,int ,int) ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (int ,int *) ;
 int FUNC_5 (scalar_t__,TYPE_2__*) ;

SCI_STATUS FUNC_6(
   SCI_LIBRARY_HANDLE_T VAR_4,
   SCI_CONTROLLER_HANDLE_T * VAR_5
)
{
   SCI_STATUS VAR_6;


   if (VAR_4 != VAR_2)
   {
      SCIF_SAS_LIBRARY_T * VAR_7 = (SCIF_SAS_LIBRARY_T *) VAR_4;


      FUNC_1(VAR_7, VAR_5, &VAR_6);
      if (VAR_6 == VAR_3)
      {
         SCIF_SAS_CONTROLLER_T * VAR_8;



         VAR_8 = (SCIF_SAS_CONTROLLER_T*) *VAR_5;


         FUNC_2(VAR_8, 0, sizeof(SCIF_SAS_CONTROLLER_T));

         VAR_6 = FUNC_4(
                     VAR_7->core_object, &(VAR_8->core_object)
                  );



         if (VAR_6 != VAR_3)
            FUNC_5(VAR_4, VAR_8);
      }

      if (VAR_6 != VAR_3)
      {
         FUNC_0((
            FUNC_3(VAR_7),
            VAR_0,
            "Library:0x%x Status:0x%x controller allocation failed\n",
            VAR_7, VAR_6
         ));
      }
   }
   else
      VAR_6 = VAR_1;

   return VAR_6;
}
