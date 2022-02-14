
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ length; int value; } ;
struct _gss_name {TYPE_1__ gn_value; int gn_type; } ;
typedef int gss_name_t ;
struct TYPE_7__ {scalar_t__ length; int value; } ;
typedef TYPE_2__ gss_buffer_desc ;
typedef scalar_t__ OM_uint32 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_1 (scalar_t__*,int ,int ,int*,int*,TYPE_2__*,TYPE_2__*,int*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (scalar_t__*,TYPE_2__*) ;
 scalar_t__ FUNC_4 (int ,int ,scalar_t__) ;

__attribute__((used)) static OM_uint32
FUNC_5(OM_uint32 *VAR_6,
                  const struct _gss_name *VAR_7,
                  const struct _gss_name *VAR_8)
{
    OM_uint32 VAR_9 = VAR_5;
    int VAR_10 = -1;

    if (!FUNC_2(&VAR_8->gn_type, VAR_1))
        return VAR_2;

    while (VAR_10 != 0 && VAR_9 != VAR_3) {
 OM_uint32 VAR_11, VAR_12;
 gss_buffer_desc VAR_13;
 gss_buffer_desc VAR_14;
 int VAR_15 = 0, VAR_16 = 0;

 VAR_11 = FUNC_1(VAR_6,
       (gss_name_t)VAR_7,
       VAR_0,
       &VAR_15,
       &VAR_16,
       &VAR_13,
       &VAR_14,
       &VAR_10);
 if (FUNC_0(VAR_11)) {
     VAR_9 = VAR_11;
     break;
 }


 if (VAR_15 &&
     VAR_13.length == VAR_8->gn_value.length &&
     FUNC_4(VAR_13.value, VAR_8->gn_value.value, VAR_8->gn_value.length) == 0)
     VAR_9 = VAR_3;
 else
     VAR_9 = VAR_4;

 FUNC_3(&VAR_12, &VAR_13);
 FUNC_3(&VAR_12, &VAR_14);
    }

    return VAR_9;
}
