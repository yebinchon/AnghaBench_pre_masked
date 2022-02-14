
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef int mechbuf ;
typedef int hostname ;
typedef int gss_name_t ;
struct TYPE_17__ {char* value; int length; } ;
typedef TYPE_1__ gss_buffer_desc ;
typedef TYPE_2__* gss_OID_set ;
struct TYPE_19__ {size_t length; char* elements; } ;
typedef TYPE_3__ gss_OID_desc ;
typedef TYPE_3__* gss_OID ;
struct TYPE_18__ {size_t count; TYPE_3__* elements; } ;
typedef scalar_t__ OM_uint32 ;
typedef int MechType ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_3__* VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 TYPE_3__ VAR_9 ;
 TYPE_3__ VAR_10 ;
 scalar_t__ FUNC_0 (int ,TYPE_3__*) ;
 int FUNC_1 (char**,char*,char*) ;
 scalar_t__ FUNC_2 (unsigned char*,int,int *,size_t*) ;
 scalar_t__ VAR_11 ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (char*,int) ;
 scalar_t__ FUNC_6 (scalar_t__*,TYPE_3__*,TYPE_3__**) ;
 scalar_t__ FUNC_7 (scalar_t__*,TYPE_1__*,int ,int *) ;
 scalar_t__ FUNC_8 (scalar_t__*,TYPE_2__**) ;
 scalar_t__ FUNC_9 (TYPE_3__*,TYPE_3__*) ;
 int FUNC_10 (scalar_t__*,int *) ;
 int FUNC_11 (scalar_t__*,TYPE_2__**) ;
 scalar_t__ FUNC_12 () ;
 int FUNC_13 (char*) ;

__attribute__((used)) static OM_uint32
FUNC_14(OM_uint32 *VAR_12, MechType *VAR_13, int VAR_14,
     gss_OID *VAR_15)
{
    char VAR_16[64];
    size_t VAR_17;
    gss_OID_desc VAR_18;
    gss_OID VAR_19;
    gss_OID_set VAR_20;
    size_t VAR_21;
    OM_uint32 VAR_22, VAR_23;

    VAR_22 = FUNC_2 ((unsigned char *)VAR_16 + sizeof(VAR_16) - 1,
         sizeof(VAR_16),
         VAR_13,
         &VAR_17);
    if (VAR_22) {
 return VAR_6;
    }

    VAR_18.length = VAR_17;
    VAR_18.elements = VAR_16 + sizeof(VAR_16) - VAR_17;

    if (FUNC_9(&VAR_18, VAR_3)) {
 return VAR_4;
    }

    *VAR_12 = 0;


    if (FUNC_9(&VAR_18, &VAR_10))
     VAR_19 = &VAR_9;
    else
     VAR_19 = &VAR_18;


    VAR_22 = FUNC_8(&VAR_23, &VAR_20);
    if (VAR_22)
     return (VAR_22);

    for (VAR_21 = 0; VAR_21 < VAR_20->count; VAR_21++)
     if (FUNC_9(&VAR_20->elements[VAR_21], VAR_19))
      break;

    if (VAR_21 == VAR_20->count) {
     FUNC_11(&VAR_23, &VAR_20);
     return VAR_4;
    }
    FUNC_11(&VAR_23, &VAR_20);

    VAR_22 = FUNC_6(VAR_12,
       &VAR_18,
       VAR_15);

    if (VAR_14) {
 gss_name_t VAR_24 = VAR_1;
 gss_buffer_desc VAR_25;
 char *VAR_26 = ((void*)0), *VAR_27, VAR_28[VAR_8];

 VAR_27 = FUNC_4("GSSAPI_SPNEGO_NAME");
 if (VAR_27 == ((void*)0) || FUNC_12()) {
     int VAR_29;
     if (FUNC_5(VAR_28, sizeof(VAR_28)) != 0) {
  *VAR_12 = VAR_11;
  return VAR_7;
     }
     VAR_29 = FUNC_1(&VAR_26, "host@%s", VAR_28);
     if (VAR_29 < 0 || VAR_26 == ((void*)0)) {
  *VAR_12 = VAR_0;
  return VAR_7;
     }
     VAR_27 = VAR_26;
 }

 VAR_25.length = FUNC_13(VAR_27);
 VAR_25.value = VAR_27;

 VAR_22 = FUNC_7(VAR_12, &VAR_25,
         VAR_2, &VAR_24);
 if (VAR_26)
     FUNC_3(VAR_26);
 if (VAR_22 != VAR_5)
     return VAR_22;

 VAR_22 = FUNC_0(VAR_24, *VAR_15);
 FUNC_10(&VAR_23, &VAR_24);
    }

    return VAR_22;
}
