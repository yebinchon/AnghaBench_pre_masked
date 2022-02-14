
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int apr_xml_parser ;
struct TYPE_3__ {int root; } ;
typedef TYPE_1__ apr_xml_doc ;
typedef scalar_t__ apr_status_t ;
typedef int apr_file_t ;
typedef int abts_case ;


 int FUNC_0 (int *,scalar_t__,scalar_t__) ;
 int FUNC_1 (int *,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ,int **,TYPE_1__**,int *,int) ;
 scalar_t__ FUNC_4 (int *,int ,int **) ;
 scalar_t__ FUNC_5 (int *,int ,int **) ;
 int FUNC_6 (int *,int ,int ) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_7(abts_case *VAR_2, void *VAR_3)
{
    apr_file_t *VAR_4;
    apr_xml_parser *VAR_5;
    apr_xml_doc *VAR_6;
    apr_status_t VAR_7;

    VAR_7 = FUNC_4(VAR_2, VAR_1, &VAR_4);
    FUNC_0(VAR_2, VAR_0, VAR_7);

    if (VAR_7 != VAR_0)
        return;

    VAR_7 = FUNC_3(VAR_1, &VAR_5, &VAR_6, VAR_4, 2000);
    FUNC_0(VAR_2, VAR_0, VAR_7);

    FUNC_6(VAR_2, VAR_6->root, 0);

    VAR_7 = FUNC_2(VAR_4);
    FUNC_0(VAR_2, VAR_0, VAR_7);

    VAR_7 = FUNC_5(VAR_2, VAR_1, &VAR_4);
    FUNC_0(VAR_2, VAR_0, VAR_7);

    if (VAR_7 != VAR_0)
        return;

    VAR_7 = FUNC_3(VAR_1, &VAR_5, &VAR_6, VAR_4, 2000);
    FUNC_1(VAR_2, VAR_7 != VAR_0);
}
