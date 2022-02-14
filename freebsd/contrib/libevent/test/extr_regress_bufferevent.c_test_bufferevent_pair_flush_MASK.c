
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bufferevent {int dummy; } ;
struct basic_test_data {int base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct bufferevent*,int ) ;
 int FUNC_1 (struct bufferevent*,int ,int ) ;
 int FUNC_2 (struct bufferevent*) ;
 scalar_t__ FUNC_3 (int ,int ,struct bufferevent**) ;
 int FUNC_4 (struct bufferevent*,int *,int *,int ,int*) ;
 int FUNC_5 (int ,int ) ;
 int VAR_6 ;
 int FUNC_6 (int) ;

__attribute__((used)) static void
FUNC_7(void *VAR_7)
{
 struct basic_test_data *VAR_8 = VAR_7;
 struct bufferevent *VAR_9[2];
 struct bufferevent *VAR_10 = ((void*)0);
 struct bufferevent *VAR_11 = ((void*)0);
 int VAR_12 = 0;

 FUNC_6(0 == FUNC_3(VAR_8->base, 0, VAR_9));
 VAR_10 = VAR_9[0];
 VAR_11 = VAR_9[1];
 FUNC_6(0 == FUNC_0(VAR_10, VAR_5));
 FUNC_6(0 == FUNC_0(VAR_11, VAR_4));

 FUNC_4(VAR_11, ((void*)0), ((void*)0), VAR_6, &VAR_12);

 FUNC_1(VAR_10, VAR_5, VAR_2);

 FUNC_5(VAR_8->base, VAR_3);

 FUNC_6(VAR_12 == (VAR_1 | VAR_0));

end:
 if (VAR_10)
  FUNC_2(VAR_10);
 if (VAR_11)
  FUNC_2(VAR_11);
}
