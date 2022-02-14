
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int U8 ;
typedef int U32 ;
typedef int U16 ;
typedef int SCIC_REMOTE_NODE_TABLE_T ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int,int) ;
 int FUNC_4 (int *,int) ;

__attribute__((used)) static
void FUNC_5(
   SCIC_REMOTE_NODE_TABLE_T * VAR_2,
   U16 VAR_3
)
{
   U32 VAR_4;
   U8 VAR_5;

   VAR_4 = VAR_3 / VAR_1;

   VAR_5 = FUNC_2(VAR_2, VAR_4);



   FUNC_0(VAR_5 != VAR_0);

   if (VAR_5 == 0x00)
   {


      FUNC_3(VAR_2, 0, VAR_4);
   }
   else if ((VAR_5 & (VAR_5 -1)) == 0)
   {


      FUNC_1(VAR_2, 0, VAR_4);
      FUNC_3(VAR_2, 1, VAR_4);
   }
   else
   {


      FUNC_1(VAR_2, 1, VAR_4);
      FUNC_3(VAR_2, 2, VAR_4);
   }

   FUNC_4(VAR_2, VAR_3);
}
