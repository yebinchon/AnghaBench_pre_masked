
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct servent {int s_port; } ;
typedef int krb5_context ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*,char*) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int ,char*,int ) ;
 int FUNC_4 (int *,int,char**,int ,int ,int (*) (int,int ,int )) ;
 int VAR_4 ;
 char* VAR_5 ;
 int FUNC_5 (int *) ;
 struct servent* FUNC_6 (char*,char*) ;
 int FUNC_7 (char*,char**,int) ;
 int FUNC_8 (int,int ,int ) ;
 int FUNC_9 (int,int ,int ) ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static int
FUNC_10(krb5_context *VAR_7, int VAR_8, char **VAR_9)
{
    int VAR_10 = 0;
    int VAR_11;

    VAR_11 = FUNC_4(VAR_7, VAR_8, VAR_9, VAR_2, VAR_4, FUNC_9);

    if(VAR_3)
 FUNC_9)(0, VAR_2, VAR_4);
    if(VAR_6) {
 FUNC_5(((void*)0));
 FUNC_1(0);
    }

    if(VAR_5){
 struct servent *VAR_12 = FUNC_6(VAR_5, "tcp");
 if(VAR_12)
     VAR_10 = VAR_12->s_port;
 else {
     char *VAR_13;

     VAR_10 = FUNC_7 (VAR_5, &VAR_13, 10);
     if (VAR_10 == 0 && VAR_13 == VAR_5)
  FUNC_0 (1, "Bad port `%s'", VAR_5);
     VAR_10 = FUNC_2(VAR_10);
 }
    }

    if (VAR_10 == 0)
 VAR_10 = FUNC_3 (*VAR_7, VAR_0, "tcp", VAR_1);

    if(VAR_9[VAR_11] != ((void*)0))
        FUNC_9(1, VAR_2, VAR_4);

    return VAR_10;
}
