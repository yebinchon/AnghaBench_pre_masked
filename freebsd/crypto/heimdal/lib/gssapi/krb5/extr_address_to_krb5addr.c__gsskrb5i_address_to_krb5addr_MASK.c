
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sockaddr {int dummy; } ;
typedef int sa ;
typedef int krb5_socklen_t ;
typedef scalar_t__ krb5_error_code ;
typedef int krb5_context ;
typedef int krb5_address ;
typedef int int16_t ;
struct TYPE_3__ {int value; } ;
typedef TYPE_1__ gss_buffer_desc ;
typedef int OM_uint32 ;


 int VAR_0 ;
 int VAR_1 ;


 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ,int,int ,struct sockaddr*,int*,int ) ;
 scalar_t__ FUNC_1 (int ,struct sockaddr*,int *) ;

krb5_error_code
FUNC_2(krb5_context VAR_3,
         OM_uint32 VAR_4,
         gss_buffer_desc *VAR_5,
         int16_t VAR_6,
         krb5_address *VAR_7)
{
   int VAR_8;
   struct sockaddr VAR_9;
   krb5_socklen_t VAR_10 = sizeof(VAR_9);
   krb5_error_code VAR_11;

   if (VAR_5 == ((void*)0))
      return VAR_2;

   switch (VAR_4) {





      case 129: VAR_8 = VAR_0;
                           break;
      default:
                           return VAR_2;
   }

   VAR_11 = FUNC_0 (VAR_3,
       VAR_8,
                                   VAR_5->value,
                                   &VAR_9,
                                   &VAR_10,
                                   VAR_6);
   if (VAR_11)
      return VAR_2;

   VAR_11 = FUNC_1 (VAR_3, &VAR_9, VAR_7);

   return VAR_11;
}
