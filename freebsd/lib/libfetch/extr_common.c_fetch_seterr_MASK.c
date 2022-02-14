
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fetcherr {char* string; int cat; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct fetcherr* FUNC_0 (struct fetcherr*,int) ;
 int FUNC_1 (int ,int ,char*,char*) ;

void
FUNC_2(struct fetcherr *VAR_3, int VAR_4)
{
 VAR_3 = FUNC_0(VAR_3, VAR_4);
 VAR_1 = VAR_3->cat;
 FUNC_1(VAR_2, VAR_0, "%s", VAR_3->string);
}
