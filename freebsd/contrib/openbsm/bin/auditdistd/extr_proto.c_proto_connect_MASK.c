
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proto_conn {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (char const*,char const*,int,int ,struct proto_conn**) ;

int
FUNC_2(const char *VAR_1, const char *VAR_2, int VAR_3,
    struct proto_conn **VAR_4)
{

 FUNC_0(VAR_1 == ((void*)0) || VAR_1[0] != '\0');
 FUNC_0(VAR_2 != ((void*)0));
 FUNC_0(VAR_3 >= -1);

 return (FUNC_1(VAR_1, VAR_2, VAR_3,
     VAR_0, VAR_4));
}
