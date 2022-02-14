
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int * rtbl_t ;
struct TYPE_10__ {scalar_t__ value; scalar_t__ length; } ;
typedef TYPE_1__ gss_buffer_desc ;
typedef TYPE_2__* gss_OID_set ;
struct TYPE_11__ {size_t count; int * elements; } ;
typedef scalar_t__ OM_uint32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int,char*) ;
 scalar_t__ FUNC_1 (scalar_t__*,TYPE_2__**) ;
 int FUNC_2 (scalar_t__*,int *,TYPE_1__*,TYPE_1__*,TYPE_1__*) ;
 scalar_t__ FUNC_3 (scalar_t__*,int *,TYPE_1__*) ;
 int FUNC_4 (scalar_t__*,TYPE_1__*) ;
 int FUNC_5 (scalar_t__*,TYPE_2__**) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int *,int ,int ) ;
 int FUNC_8 (int *,int ,char*,int,char*) ;
 int * FUNC_9 () ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int ) ;
 int FUNC_12 (int *,char*) ;
 int VAR_5 ;

int
FUNC_13(void *VAR_6, int VAR_7, char **VAR_8)
{
    OM_uint32 VAR_9, VAR_10;
    gss_OID_set VAR_11;
    rtbl_t VAR_12;
    size_t VAR_13;

    VAR_9 = FUNC_1(&VAR_10, &VAR_11);
    if (VAR_9 != VAR_4)
 FUNC_0(1, "gss_indicate_mechs failed");

    FUNC_6("Supported mechanisms:\n");

    VAR_12 = FUNC_9();
    if (VAR_12 == ((void*)0))
 FUNC_0(1, "rtbl_create");

    FUNC_12(VAR_12, "  ");
    FUNC_7(VAR_12, VAR_2, 0);
    FUNC_7(VAR_12, VAR_1, 0);
    FUNC_7(VAR_12, VAR_0, 0);
    FUNC_7(VAR_12, VAR_3, 0);

    for (VAR_13 = 0; VAR_13 < VAR_11->count; VAR_13++) {
 gss_buffer_desc VAR_14, VAR_15, VAR_16, VAR_17;

 VAR_9 = FUNC_3(&VAR_10, &VAR_11->elements[VAR_13], &VAR_14);
 if (VAR_9 != VAR_4)
     FUNC_0(1, "gss_oid_to_str failed");

 FUNC_8(VAR_12, VAR_2, "%.*s",
          (int)VAR_14.length, (char *)VAR_14.value);
 FUNC_4(&VAR_10, &VAR_14);

 (void)FUNC_2(&VAR_10,
         &VAR_11->elements[VAR_13],
         &VAR_15,
         &VAR_16,
         &VAR_17);

 FUNC_8(VAR_12, VAR_1, "%.*s",
          (int)VAR_16.length, (char *)VAR_16.value);
 FUNC_8(VAR_12, VAR_0, "%.*s",
          (int)VAR_17.length, (char *)VAR_17.value);
 FUNC_8(VAR_12, VAR_3, "%.*s",
          (int)VAR_15.length, (char *)VAR_15.value);

 FUNC_4(&VAR_10, &VAR_16);
 FUNC_4(&VAR_10, &VAR_17);
 FUNC_4(&VAR_10, &VAR_15);

    }
    FUNC_5(&VAR_10, &VAR_11);

    FUNC_11(VAR_12, VAR_5);
    FUNC_10(VAR_12);

    return 0;
}
