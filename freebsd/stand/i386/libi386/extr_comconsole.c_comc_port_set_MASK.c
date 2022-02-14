
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct env_var {int ev_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (void const*) ;
 int VAR_4 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int,void const*,int *,int *) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static int
FUNC_4(struct env_var *VAR_5, int VAR_6, const void *VAR_7)
{
 int VAR_8;

 if (VAR_7 == ((void*)0) || (VAR_8 = FUNC_0(VAR_7)) <= 0) {
  FUNC_3("Invalid port\n");
  return (VAR_0);
 }

 if (VAR_4 != VAR_8)
  FUNC_1(VAR_3, VAR_8);

 FUNC_2(VAR_5->ev_name, VAR_6 | VAR_2, VAR_7, ((void*)0), ((void*)0));

 return (VAR_1);
}
