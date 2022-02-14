
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evrpc_base {int dummy; } ;
struct evhttp {int dummy; } ;
typedef int ev_uint16_t ;


 int FUNC_0 (struct evrpc_base*,int ,int ,int ,int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct evrpc_base* FUNC_1 (struct evhttp*) ;
 struct evhttp* FUNC_2 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;

__attribute__((used)) static void
FUNC_3(struct evhttp **VAR_8, ev_uint16_t *VAR_9, struct evrpc_base **VAR_10)
{
 ev_uint16_t VAR_11;
 struct evhttp *VAR_12 = ((void*)0);
 struct evrpc_base *VAR_13 = ((void*)0);

 VAR_12 = FUNC_2(&VAR_11);
 VAR_13 = FUNC_1(VAR_12);

 FUNC_0(VAR_13, VAR_0, VAR_5, VAR_4, VAR_1, ((void*)0));
 FUNC_0(VAR_13, VAR_2, VAR_5, VAR_4, VAR_3, ((void*)0));

 *VAR_8 = VAR_12;
 *VAR_9 = VAR_11;
 *VAR_10 = VAR_13;

 VAR_6 = 0;
 VAR_7 = 0;
}
