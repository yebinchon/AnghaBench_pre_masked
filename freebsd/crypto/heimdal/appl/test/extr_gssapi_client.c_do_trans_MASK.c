
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int gss_ctx_id_t ;
typedef TYPE_1__* gss_buffer_t ;
struct TYPE_8__ {int length; char* value; } ;
typedef TYPE_1__ gss_buffer_desc ;
typedef int OM_uint32 ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int,int ,char*) ;
 int FUNC_2 (int *,int ,int ,TYPE_1__*,TYPE_1__*) ;
 int FUNC_3 (int *,int ,int,int ,TYPE_1__*,int *,TYPE_1__*) ;
 char* FUNC_4 (char*) ;
 int FUNC_5 (int,TYPE_1__*) ;

__attribute__((used)) static int
FUNC_6 (int VAR_1, gss_ctx_id_t VAR_2)
{
    OM_uint32 VAR_3, VAR_4;
    gss_buffer_desc VAR_5, VAR_6;
    gss_buffer_t VAR_7 = &VAR_5,
 VAR_8 = &VAR_6;



    VAR_7->length = 3;
    VAR_7->value = FUNC_4("hej");

    VAR_3 = FUNC_2(&VAR_4,
      VAR_2,
      VAR_0,
      VAR_7,
      VAR_8);
    if (FUNC_0(VAR_3))
 FUNC_1 (1, VAR_4, "gss_get_mic");

    FUNC_5 (VAR_1, VAR_7);
    FUNC_5 (VAR_1, VAR_8);



    VAR_7->length = 7;
    VAR_7->value = "hemligt";

    VAR_3 = FUNC_3 (&VAR_4,
    VAR_2,
    0,
    VAR_0,
    VAR_7,
    ((void*)0),
    VAR_8);
    if (FUNC_0(VAR_3))
 FUNC_1 (1, VAR_4, "gss_wrap");

    FUNC_5 (VAR_1, VAR_8);

    VAR_3 = FUNC_3 (&VAR_4,
    VAR_2,
    1,
    VAR_0,
    VAR_7,
    ((void*)0),
    VAR_8);
    if (FUNC_0(VAR_3))
 FUNC_1 (1, VAR_4, "gss_wrap");

    FUNC_5 (VAR_1, VAR_8);

    return 0;
}
