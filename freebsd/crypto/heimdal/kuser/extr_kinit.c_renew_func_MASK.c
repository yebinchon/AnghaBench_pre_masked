
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct renew_ctx {int principal; int ccache; int context; int ticket_life; } ;
typedef scalar_t__ krb5_error_code ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ,int ) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int ,int ,int *,int *) ;
 scalar_t__ FUNC_3 (int ,scalar_t__,int ,int ,int ,int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int ,int ,int ,int ) ;
 int VAR_3 ;

__attribute__((used)) static time_t
FUNC_5(void *VAR_4)
{
    struct renew_ctx *VAR_5 = VAR_4;
    krb5_error_code VAR_6;
    time_t VAR_7;
    int VAR_8 = 0;

    if (VAR_1) {
 VAR_6 = FUNC_3(VAR_5->context, VAR_1, VAR_3,
        VAR_5->ccache, VAR_2, VAR_5->ticket_life);
 if (VAR_6)
     VAR_8 = 1;
    } else
 VAR_8 = 1;

    if (VAR_8)
 FUNC_0(VAR_5->context, VAR_5->principal,
   VAR_5->ccache, VAR_5->ticket_life, 0);


    if(VAR_0 && FUNC_1())
 FUNC_2(VAR_5->context, VAR_5->ccache, ((void*)0), ((void*)0));


    VAR_7 = FUNC_4(VAR_5->context, VAR_5->ccache, VAR_5->principal,
        VAR_2) / 2;
    return VAR_7 + 1;
}
