
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct http_client {int cb_ctx; int (* cb ) (int ,struct http_client*,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct http_client*,int ) ;
 int FUNC_1 (int ,char*,struct http_client*) ;

__attribute__((used)) static void FUNC_2(void *VAR_2, void *VAR_3)
{
 struct http_client *VAR_4 = VAR_2;
 FUNC_1(VAR_1, "HTTP: Timeout (c=%p)", VAR_4);
 VAR_4->cb(VAR_4->cb_ctx, VAR_4, VAR_0);
}
