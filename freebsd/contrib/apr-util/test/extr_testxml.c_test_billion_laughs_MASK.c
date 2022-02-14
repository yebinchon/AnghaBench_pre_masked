
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int apr_xml_parser ;
typedef int apr_xml_doc ;
typedef int apr_status_t ;
typedef int apr_file_t ;
typedef int abts_case ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int **,char*,int ,int ,int ) ;
 int FUNC_3 (int ,int **,int **,int *,int) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_4(abts_case *VAR_2, void *VAR_3)
{
    apr_file_t *VAR_4;
    apr_xml_parser *VAR_5;
    apr_xml_doc *VAR_6;
    apr_status_t VAR_7;

    VAR_7 = FUNC_2(&VAR_4, "data/billion-laughs.xml",
                       VAR_0, 0, VAR_1);
    FUNC_0(VAR_2, "open billion-laughs.xml", VAR_7);



    FUNC_3(VAR_1, &VAR_5, &VAR_6, VAR_4, 2000);

    FUNC_1(VAR_4);
}
