
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gmesh {int dummy; } ;
typedef int efidp ;


 int VAR_0 ;
 int FUNC_0 (char*,char*,int *) ;
 int VAR_1 ;
 char* FUNC_1 (int ) ;
 char* FUNC_2 (struct gmesh*) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static int
FUNC_4(struct gmesh *VAR_2, char *VAR_3, efidp *VAR_4)
{
 char *VAR_5 = ((void*)0);
 int VAR_6;

 VAR_5 = FUNC_2(VAR_2);




 if (VAR_5 == ((void*)0)) {
  VAR_6 = VAR_0;
  goto errout;
 }

 VAR_6 = FUNC_0(VAR_5, VAR_3 + 1, VAR_4);
errout:
 FUNC_3(VAR_5);

 return VAR_6;
}
