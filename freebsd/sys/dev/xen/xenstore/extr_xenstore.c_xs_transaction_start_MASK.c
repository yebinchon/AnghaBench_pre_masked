
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xs_transaction {int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*,int *,int ) ;
 int FUNC_2 (int ,int ,char*,int *,void**) ;

int
FUNC_3(struct xs_transaction *VAR_3)
{
 char *VAR_4;
 int VAR_5;

 VAR_5 = FUNC_2(VAR_1, VAR_2, "", ((void*)0),
     (void **)&VAR_4);
 if (VAR_5 == 0) {
  VAR_3->id = FUNC_1(VAR_4, ((void*)0), 0);
  FUNC_0(VAR_4, VAR_0);
 }
 return (VAR_5);
}
