
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msg {int dummy; } ;
struct kill {int dummy; } ;
struct evrpc_pool {int dummy; } ;
struct evrpc_base {int dummy; } ;
struct evhttp {int dummy; } ;
typedef int ev_uint16_t ;


 int FUNC_0 (int ,struct evrpc_pool*,struct msg*,struct kill*,int ,int *) ;
 int FUNC_1 (struct msg*,int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 () ;
 int FUNC_3 (struct evhttp*) ;
 int FUNC_4 (struct evrpc_pool*) ;
 int VAR_3 ;
 int FUNC_5 (struct kill*) ;
 struct kill* FUNC_6 () ;
 int FUNC_7 (struct msg*) ;
 struct msg* FUNC_8 () ;
 struct evrpc_pool* FUNC_9 (int ) ;
 int FUNC_10 (struct evhttp**,int *,struct evrpc_base**) ;
 int FUNC_11 (struct evrpc_base*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_12 (int) ;

__attribute__((used)) static void
FUNC_13(void)
{
 ev_uint16_t VAR_6;
 struct evhttp *VAR_7 = ((void*)0);
 struct evrpc_base *VAR_8 = ((void*)0);
 struct evrpc_pool *VAR_9 = ((void*)0);
 struct msg *VAR_10=((void*)0);
 struct kill *VAR_11=((void*)0), *VAR_12=((void*)0);

 FUNC_10(&VAR_7, &VAR_6, &VAR_8);

 VAR_9 = FUNC_9(VAR_6);
 FUNC_12(VAR_9);


 VAR_10 = FUNC_8();
 FUNC_12(VAR_10);
 FUNC_1(VAR_10, VAR_3, "niels");
 FUNC_1(VAR_10, VAR_5, "tester");

 VAR_11 = FUNC_6();
 VAR_12 = FUNC_6();

 FUNC_0(VAR_2, VAR_9, VAR_10, VAR_11, VAR_1, ((void*)0));
 FUNC_0(VAR_2, VAR_9, VAR_10, VAR_12, VAR_0, ((void*)0));

 VAR_4 = 0;

 FUNC_2();

 FUNC_11(VAR_8);

 FUNC_12(VAR_4 == 2);

end:
 if (VAR_10)
  FUNC_7(VAR_10);
 if (VAR_11)
  FUNC_5(VAR_11);
 if (VAR_12)
  FUNC_5(VAR_12);

 if (VAR_9)
  FUNC_4(VAR_9);
 if (VAR_7)
  FUNC_3(VAR_7);
}
