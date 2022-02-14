
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int U8 ;
struct TYPE_6__ {int is_sense_response_set; } ;
typedef TYPE_1__ SATI_TRANSLATOR_SEQUENCE_T ;






 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,void*,void*,int,int,int,int,int) ;
 int FUNC_2 (TYPE_1__*,void*,void*,int,int,int,int,int) ;

void FUNC_3(
   SATI_TRANSLATOR_SEQUENCE_T * VAR_1,
   void * VAR_2,
   void * VAR_3,
   U8 VAR_4,
   U8 VAR_5,
   U8 VAR_6,
   U8 VAR_7
)
{
    U8 VAR_8;

    VAR_8 = FUNC_0(VAR_1);

    switch (VAR_8)
    {
    case 129:
    case 128:
        FUNC_2(VAR_1, VAR_2, VAR_3, VAR_4,
                VAR_8, VAR_5, VAR_6, VAR_7);
    break;
    case 131:
    case 130:
        FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4,
                VAR_8, VAR_5, VAR_6, VAR_7);
        break;
    }

    VAR_1->is_sense_response_set = VAR_0;
}
