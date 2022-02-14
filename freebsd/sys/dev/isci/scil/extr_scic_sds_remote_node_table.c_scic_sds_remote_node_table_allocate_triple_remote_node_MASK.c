
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ U32 ;
typedef int U16 ;
typedef int SCIC_REMOTE_NODE_TABLE_T ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 (int *,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (int *,scalar_t__) ;

__attribute__((used)) static
U16 FUNC_3(
   SCIC_REMOTE_NODE_TABLE_T * VAR_3,
   U32 VAR_4
)
{
   U32 VAR_5;
   U16 VAR_6 = VAR_0;

   VAR_5 = FUNC_2(
                                             VAR_3, VAR_4);

   if (VAR_5 != VAR_1)
   {
      VAR_6 = (U16) VAR_5 * VAR_2;

      FUNC_1(
         VAR_3, VAR_4, VAR_5
      );

      FUNC_0(
         VAR_3, VAR_5
      );
   }

   return VAR_6;
}
