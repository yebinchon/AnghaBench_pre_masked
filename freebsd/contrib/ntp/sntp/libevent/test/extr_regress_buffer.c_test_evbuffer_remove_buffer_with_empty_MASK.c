
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evbuffer {int dummy; } ;
typedef int buf ;


 int FUNC_0 (struct evbuffer*,char*,int) ;
 int FUNC_1 (struct evbuffer*,char*,int,int ,int *) ;
 int FUNC_2 (struct evbuffer*) ;
 struct evbuffer* FUNC_3 () ;
 int FUNC_4 (struct evbuffer*,struct evbuffer*,int) ;
 int FUNC_5 (struct evbuffer*) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_6(void *VAR_1)
{
    struct evbuffer *VAR_2 = FUNC_3();
    struct evbuffer *VAR_3 = FUNC_3();
    char VAR_4[2];

    FUNC_5(VAR_2);
    FUNC_5(VAR_3);



    FUNC_1(VAR_2, VAR_4, sizeof(VAR_4), VAR_0, ((void*)0));
    FUNC_1(VAR_2, VAR_4, sizeof(VAR_4), VAR_0, ((void*)0));

    FUNC_0(VAR_3, VAR_4, sizeof(VAR_4));
    FUNC_1(VAR_3, VAR_4, 0, VAR_0, ((void*)0));

    FUNC_5(VAR_2);
    FUNC_5(VAR_3);


    FUNC_4(VAR_2, VAR_3, 3);

    FUNC_5(VAR_2);
    FUNC_5(VAR_3);

end:
    FUNC_2(VAR_2);
    FUNC_2(VAR_3);
}
