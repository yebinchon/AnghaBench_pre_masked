
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int krb5_keytype ;
struct TYPE_14__ {int keytype; } ;
typedef TYPE_1__ krb5_keyblock ;
typedef int krb5_context ;
typedef TYPE_2__* gsskrb5_ctx ;
typedef int gss_qop_t ;
typedef int gss_buffer_t ;
struct TYPE_15__ {int more_flags; int ctx_id_mutex; } ;
typedef scalar_t__ OM_uint32 ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;




 scalar_t__ FUNC_2 (scalar_t__*,TYPE_2__* const,int ,int const,int const,int *,TYPE_1__*,char const*) ;
 scalar_t__ FUNC_3 (scalar_t__*,TYPE_2__* const,int ,int const,int const,int *) ;
 scalar_t__ FUNC_4 (TYPE_2__* const,int ,TYPE_1__**) ;
 int FUNC_5 () ;
 int FUNC_6 (int ,int ,int*) ;
 int FUNC_7 (int ,TYPE_1__*) ;
 scalar_t__ FUNC_8 (scalar_t__*,TYPE_2__* const,int ,int const,int const,int *,TYPE_1__*,char const*) ;
 scalar_t__ FUNC_9 (scalar_t__*,TYPE_2__* const,int ,int const,int const,int *,TYPE_1__*,char const*) ;

OM_uint32
FUNC_10
           (OM_uint32 * VAR_2,
            const gsskrb5_ctx VAR_3,
     krb5_context VAR_4,
            const gss_buffer_t VAR_5,
            const gss_buffer_t VAR_6,
            gss_qop_t * VAR_7,
     const char * VAR_8
     )
{
    krb5_keyblock *VAR_9;
    OM_uint32 VAR_10;
    krb5_keytype VAR_11;

    if (VAR_3->more_flags & VAR_1)
        return FUNC_3 (VAR_2, VAR_3,
           VAR_4, VAR_5, VAR_6,
           VAR_7);

    FUNC_0(&VAR_3->ctx_id_mutex);
    VAR_10 = FUNC_4(VAR_3, VAR_4, &VAR_9);
    FUNC_1(&VAR_3->ctx_id_mutex);
    if (VAR_10) {
 *VAR_2 = VAR_10;
 return VAR_0;
    }
    *VAR_2 = 0;
    FUNC_6 (VAR_4, VAR_9->keytype, &VAR_11);
    switch (VAR_11) {
    case 129 :





      VAR_10 = VAR_0;

 break;
    case 128 :
 VAR_10 = FUNC_9 (VAR_2, VAR_3, VAR_4,
          VAR_5, VAR_6, VAR_7, VAR_9,
          VAR_8);
 break;
    case 131 :
    case 130 :
 VAR_10 = FUNC_2 (VAR_2, VAR_3,
       VAR_4,
       VAR_5, VAR_6,
       VAR_7, VAR_9, VAR_8);
 break;
    default :
        FUNC_5();
    }
    FUNC_7 (VAR_4, VAR_9);

    return VAR_10;
}
