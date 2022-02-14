
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct httpread {int cookie; int (* cb ) (struct httpread*,int ,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct httpread*,int ,int ) ;
 int FUNC_1 (int ,char*,struct httpread*) ;

__attribute__((used)) static void FUNC_2(void *VAR_2, void *VAR_3)
{
 struct httpread *VAR_4 = VAR_3;
 FUNC_1(VAR_1, "httpread timeout (%p)", VAR_4);
 (*VAR_4->cb)(VAR_4, VAR_4->cookie, VAR_0);
}
