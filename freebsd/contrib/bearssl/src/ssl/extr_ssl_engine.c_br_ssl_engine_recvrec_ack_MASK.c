
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int record_type_in; int application_data; } ;
typedef TYPE_1__ br_ssl_engine_context ;


 int VAR_0 ;




 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*,size_t) ;
 unsigned char* FUNC_4 (TYPE_1__*,size_t*) ;
 int FUNC_5 (TYPE_1__*,size_t) ;

void
FUNC_6(br_ssl_engine_context *VAR_1, size_t VAR_2)
{
 unsigned char *VAR_3;

 FUNC_5(VAR_1, VAR_2);
 if (FUNC_0(VAR_1)) {
  return;
 }






 VAR_3 = FUNC_4(VAR_1, &VAR_2);
 if (VAR_3 != ((void*)0)) {
  switch (VAR_1->record_type_in) {
  case 129:
  case 131:
  case 128:
   FUNC_2(VAR_1, 0);
   break;
  case 130:
   if (VAR_1->application_data == 1) {
    break;
   }






   if (VAR_1->application_data == 2) {
    FUNC_3(VAR_1, VAR_2);
    break;
   }


  default:
   FUNC_1(VAR_1, VAR_0);
   break;
  }
 }
}
