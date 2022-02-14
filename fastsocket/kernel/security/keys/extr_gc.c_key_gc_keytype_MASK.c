
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct key_type {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int ) ;
 struct key_type* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 () ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 () ;
 int FUNC_6 (int *,int ,int ,int ) ;

void FUNC_7(struct key_type *VAR_6)
{
 FUNC_1("%s", VAR_6->name);

 VAR_3 = VAR_6;
 FUNC_4(VAR_0, &VAR_4);
 FUNC_5();
 FUNC_4(VAR_1, &VAR_4);

 FUNC_0("schedule");
 FUNC_2();

 FUNC_0("sleep");
 FUNC_6(&VAR_4, VAR_0, VAR_5,
      VAR_2);

 VAR_3 = ((void*)0);
 FUNC_3("");
}
