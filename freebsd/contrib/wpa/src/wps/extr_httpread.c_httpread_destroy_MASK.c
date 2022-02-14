
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct httpread {int sd; struct httpread* uri; struct httpread* body; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *,struct httpread*) ;
 int FUNC_1 (int,int ) ;
 int VAR_2 ;
 int FUNC_2 (struct httpread*) ;
 int FUNC_3 (struct httpread*,int ,int) ;
 int FUNC_4 (int ,char*,struct httpread*) ;

void FUNC_5(struct httpread *VAR_3)
{
 FUNC_4(VAR_1, "httpread_destroy(%p)", VAR_3);
 if (!VAR_3)
  return;

 FUNC_0(VAR_2, ((void*)0), VAR_3);
 FUNC_1(VAR_3->sd, VAR_0);
 FUNC_2(VAR_3->body);
 FUNC_2(VAR_3->uri);
 FUNC_3(VAR_3, 0, sizeof(*VAR_3));
 VAR_3->sd = -1;
 FUNC_2(VAR_3);
}
