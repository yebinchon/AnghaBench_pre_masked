
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int objset_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char const*,int ,int **) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int ,char const*,int,int,void*,char*) ;

int
FUNC_4(const char *VAR_1, const char *VAR_2,
    int VAR_3, int VAR_4, void *VAR_5, char *VAR_6)
{
 objset_t *VAR_7;
 int VAR_8;

 VAR_8 = FUNC_1(VAR_1, VAR_0, &VAR_7);
 if (VAR_8 != 0)
  return (VAR_8);

 VAR_8 = FUNC_3(FUNC_0(VAR_7), VAR_2,
     VAR_3, VAR_4, VAR_5, VAR_6);

 FUNC_2(VAR_7, VAR_0);
 return (VAR_8);
}
