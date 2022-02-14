
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_print_options {int dummy; } ;
typedef int hx509_request ;


 int FUNC_0 (int ,char*,int *) ;
 int FUNC_1 (int ,int ,int ) ;
 int VAR_0 ;
 int FUNC_2 (int ,int,int,char*,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*) ;
 int VAR_1 ;

int
FUNC_5(struct request_print_options *VAR_2, int VAR_3, char **VAR_4)
{
    int VAR_5, VAR_6;

    FUNC_4("request print\n");

    for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
 hx509_request VAR_7;

 VAR_5 = FUNC_0(VAR_0, VAR_4[VAR_6], &VAR_7);
 if (VAR_5)
     FUNC_2(VAR_0, 1, VAR_5, "parse_request: %s", VAR_4[VAR_6]);

 VAR_5 = FUNC_1(VAR_0, VAR_7, VAR_1);
 FUNC_3(&VAR_7);
 if (VAR_5)
     FUNC_2(VAR_0, 1, VAR_5, "Failed to print file %s", VAR_4[VAR_6]);
    }

    return 0;
}
