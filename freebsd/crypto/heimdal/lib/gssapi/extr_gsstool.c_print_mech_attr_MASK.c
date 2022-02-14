
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int * rtbl_t ;
typedef scalar_t__ gss_const_OID ;
struct TYPE_8__ {scalar_t__ value; scalar_t__ length; } ;
typedef TYPE_1__ gss_buffer_desc ;
typedef TYPE_2__* gss_OID_set ;
struct TYPE_9__ {size_t count; int * elements; } ;
typedef scalar_t__ OM_uint32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*) ;
 scalar_t__ FUNC_1 (scalar_t__*,int *,TYPE_1__*,TYPE_1__*,int *) ;
 scalar_t__ FUNC_2 (scalar_t__,int *,TYPE_1__*) ;
 int FUNC_3 (scalar_t__*,TYPE_1__*) ;
 int FUNC_4 (char*,char const*) ;
 int FUNC_5 (int *,int ,int ) ;
 int FUNC_6 (int *,int ,char*,...) ;
 int * FUNC_7 () ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int *,char*) ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_11(const char *VAR_4, gss_const_OID VAR_5, gss_OID_set VAR_6)
{
    gss_buffer_desc VAR_7, VAR_8;
    OM_uint32 VAR_9, VAR_10;
    rtbl_t VAR_11;
    size_t VAR_12;

    VAR_11 = FUNC_7();
    if (VAR_11 == ((void*)0))
 FUNC_0(1, "rtbl_create");

    FUNC_10(VAR_11, "  ");
    FUNC_5(VAR_11, VAR_1, 0);
    FUNC_5(VAR_11, VAR_0, 0);
    if (VAR_5)
 FUNC_5(VAR_11, VAR_2, 0);

    for (VAR_12 = 0; VAR_12 < VAR_6->count; VAR_12++) {
 VAR_9 = FUNC_1(&VAR_10, &VAR_6->elements[VAR_12], &VAR_7, &VAR_8, ((void*)0));
 if (VAR_9)
     continue;

 FUNC_6(VAR_11, VAR_1, "%.*s",
          (int)VAR_7.length, (char *)VAR_7.value);
 FUNC_6(VAR_11, VAR_0, "%.*s",
          (int)VAR_8.length, (char *)VAR_8.value);
 if (VAR_5) {
     gss_buffer_desc VAR_13;

     if (FUNC_2(VAR_5, &VAR_6->elements[VAR_12], &VAR_13) != 0)
  VAR_13.length = 0;

     if (VAR_13.length)
  FUNC_6(VAR_11, VAR_2, "%.*s",
           (int)VAR_13.length, (char *)VAR_13.value);
     else
  FUNC_6(VAR_11, VAR_2, "<>");
     FUNC_3(&VAR_10, &VAR_13);
 }

 FUNC_3(&VAR_10, &VAR_7);
 FUNC_3(&VAR_10, &VAR_8);
    }

    FUNC_4("attributes for: %s\n", VAR_4);
    FUNC_9(VAR_11, VAR_3);
    FUNC_8(VAR_11);
}
