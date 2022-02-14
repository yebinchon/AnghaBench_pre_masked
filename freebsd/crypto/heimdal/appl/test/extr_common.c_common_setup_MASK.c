
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct servent {int s_port; } ;
typedef int krb5_context ;


 int VAR_0 ;
 struct getargs* VAR_1 ;
 int FUNC_0 (int,char*,char*) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int ,char*,int) ;
 int FUNC_4 (int *,int,char**,struct getargs*,int,void (*) (int,struct getargs*,int)) ;
 int VAR_3 ;
 char* VAR_4 ;
 int FUNC_5 (int *) ;
 struct servent* FUNC_6 (char*,char*) ;
 int FUNC_7 (char*,char**,int) ;
 void FUNC_8 (int,struct getargs*,int) ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static int
FUNC_9(krb5_context *VAR_6, int *VAR_7, char **VAR_8,
      void (*VAR_9)(int, struct getargs*, int))
{
    int VAR_10 = 0;
    *VAR_7 = FUNC_4(VAR_6, *VAR_7, VAR_8, VAR_1, VAR_3, VAR_9);

    if(VAR_2)
 (*VAR_9)(0, VAR_1, VAR_3);
    if(VAR_5) {
 FUNC_5(((void*)0));
 FUNC_1(0);
    }

    if(VAR_4){
 struct servent *VAR_11 = FUNC_6(VAR_4, "tcp");
 if(VAR_11)
     VAR_10 = VAR_11->s_port;
 else {
     char *VAR_12;

     VAR_10 = FUNC_7 (VAR_4, &VAR_12, 10);
     if (VAR_10 == 0 && VAR_12 == VAR_4)
  FUNC_0 (1, "Bad port `%s'", VAR_4);
     VAR_10 = FUNC_2(VAR_10);
 }
    }

    if (VAR_10 == 0)
 VAR_10 = FUNC_3 (*VAR_6, VAR_0, "tcp", 4711);

    return VAR_10;
}
