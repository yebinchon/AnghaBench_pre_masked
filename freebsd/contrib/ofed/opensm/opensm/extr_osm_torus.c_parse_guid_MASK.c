
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct torus {int dummy; } ;
typedef int guid_t ;


 int FUNC_0 (int ) ;
 char* FUNC_1 (int *,char const*) ;
 int FUNC_2 (char*,int *,int ) ;

__attribute__((used)) static
bool FUNC_3(struct torus *VAR_0, guid_t *VAR_1, const char *VAR_2)
{
 char *VAR_3;
 bool VAR_4 = 0;

 VAR_3 = FUNC_1(((void*)0), VAR_2);
 if (!VAR_3)
  goto out;
 *VAR_1 = FUNC_2(VAR_3, ((void*)0), 0);
 *VAR_1 = FUNC_0(*VAR_1);

 VAR_4 = 1;
out:
 return VAR_4;
}
