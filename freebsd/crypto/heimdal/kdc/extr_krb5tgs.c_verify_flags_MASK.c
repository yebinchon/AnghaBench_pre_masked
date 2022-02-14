
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int krb5_kdc_configuration ;
typedef int krb5_error_code ;
typedef int krb5_context ;
struct TYPE_4__ {scalar_t__ invalid; } ;
struct TYPE_5__ {scalar_t__ endtime; TYPE_1__ flags; } ;
typedef TYPE_2__ EncTicketPart ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *,int ,char*,char const*) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static krb5_error_code
FUNC_1 (krb5_context VAR_3,
       krb5_kdc_configuration *VAR_4,
       const EncTicketPart *VAR_5,
       const char *VAR_6)
{
    if(VAR_5->endtime < VAR_2){
 FUNC_0(VAR_3, VAR_4, 0, "Ticket expired (%s)", VAR_6);
 return VAR_0;
    }
    if(VAR_5->flags.invalid){
 FUNC_0(VAR_3, VAR_4, 0, "Ticket not valid (%s)", VAR_6);
 return VAR_1;
    }
    return 0;
}
