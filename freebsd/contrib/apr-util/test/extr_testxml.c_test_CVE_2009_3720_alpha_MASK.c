
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int apr_xml_parser ;
typedef int apr_xml_doc ;
typedef scalar_t__ apr_status_t ;
typedef int abts_case ;


 scalar_t__ VAR_0 ;
 int * FUNC_0 (int ) ;
 int FUNC_1 (int *,int **) ;
 scalar_t__ FUNC_2 (int *,char*,int) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_3(abts_case *VAR_2, void *VAR_3)
{
    apr_xml_parser *VAR_4;
    apr_xml_doc *VAR_5;
    apr_status_t VAR_6;

    VAR_4 = FUNC_0(VAR_1);

    VAR_6 = FUNC_2(VAR_4, "\0\r\n", 3);
    if (VAR_6 == VAR_0)
        FUNC_1(VAR_4, &VAR_5);
}
