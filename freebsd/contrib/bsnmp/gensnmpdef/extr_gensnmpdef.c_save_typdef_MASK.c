
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tdef {char* name; } ;


 int FUNC_0 (int *,struct tdef*,int ) ;
 struct tdef* FUNC_1 (int,int) ;
 int FUNC_2 (int,int *) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_3(char *VAR_2)
{
 struct tdef *VAR_3;

 VAR_3 = FUNC_1(1, sizeof(struct tdef));
 if (VAR_3 == ((void*)0))
  FUNC_2(1, ((void*)0));

 VAR_3->name = VAR_2;
 FUNC_0(&VAR_1, VAR_3, VAR_0);
}
