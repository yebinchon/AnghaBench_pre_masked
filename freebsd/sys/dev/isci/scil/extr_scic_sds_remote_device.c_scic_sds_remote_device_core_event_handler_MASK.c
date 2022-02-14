
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int U32 ;
struct TYPE_4__ {int rnc; } ;
typedef int SCI_STATUS ;
typedef TYPE_1__ SCIC_SDS_REMOTE_DEVICE_T ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;




 int FUNC_0 (TYPE_1__*,int ,char*,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int *,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static
SCI_STATUS FUNC_5(
   SCIC_SDS_REMOTE_DEVICE_T *VAR_4,
   U32 VAR_5,
   BOOL VAR_6
)
{
   SCI_STATUS VAR_7;

   switch (FUNC_4(VAR_5))
   {
   case 130:
   case 129:
   case 128:
      VAR_7 = FUNC_1(VAR_4->rnc, VAR_5);
   break;
   case 131:

       if( FUNC_3(VAR_5) == VAR_3 )
       {
           VAR_7 = VAR_2;


           FUNC_2( VAR_4->rnc,
                                                 VAR_1,
                                                 ((void*)0), ((void*)0) );

           FUNC_0(
              VAR_4, VAR_5,
                   (VAR_6)
            ? "I_T_Nexus_Timeout event"
            : "I_T_Nexus_Timeout event in wrong state",
                   VAR_6 );

           break;
       }


   default:
      FUNC_0( VAR_4, VAR_5,
                                       (VAR_6)
                                          ? "unexpected event"
                                          : "unexpected event in wrong state",
                                       VAR_6 );
      VAR_7 = VAR_0;
   break;
   }

   return VAR_7;
}
