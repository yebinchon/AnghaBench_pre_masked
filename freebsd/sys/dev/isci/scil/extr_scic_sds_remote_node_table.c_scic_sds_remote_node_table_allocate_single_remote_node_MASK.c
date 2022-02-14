
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int U8 ;
typedef int U32 ;
typedef scalar_t__ U16 ;
typedef int SCIC_REMOTE_NODE_TABLE_T ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int,int) ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int,int) ;

__attribute__((used)) static
U16 FUNC_5(
   SCIC_REMOTE_NODE_TABLE_T * VAR_3,
   U32 VAR_4
)
{
   U8 VAR_5;
   U8 VAR_6;
   U32 VAR_7;
   U16 VAR_8 = VAR_0;

   VAR_7 = FUNC_2(
                                             VAR_3, VAR_4);


   if (VAR_7 != VAR_1)
   {
      VAR_6 = FUNC_3(
                                    VAR_3, VAR_7);

      for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++)
      {
         if (((1 << VAR_5) & VAR_6) != 0)
         {

            VAR_8 = (U16) (VAR_7 * VAR_2
                                       + VAR_5);

            FUNC_0(
               VAR_3, VAR_4, VAR_7
            );

            FUNC_1(
               VAR_3, VAR_8
            );

            if (VAR_4 > 0)
            {
               FUNC_4(
                  VAR_3, VAR_4 - 1, VAR_7
               );
            }

            break;
         }
      }
   }

   return VAR_8;
}
