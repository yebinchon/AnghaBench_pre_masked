
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int gid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char const*,int ,int *,int*) ;
 int * FUNC_2 (int) ;
 int FUNC_3 (int,int *) ;
 int FUNC_4 (int ) ;

int
FUNC_5(const char *VAR_2, gid_t VAR_3)
{
 int VAR_4, VAR_5;
 long VAR_6;
 gid_t *VAR_7;





 VAR_6 = FUNC_4(VAR_1) + 2;
 if ((VAR_7 = FUNC_2(sizeof(*VAR_7) * VAR_6)) == ((void*)0))
  return (VAR_0);

 VAR_4 = (int)VAR_6;
 FUNC_1(VAR_2, VAR_3, VAR_7, &VAR_4);
 VAR_5 = FUNC_3(VAR_4, VAR_7);
 FUNC_0(VAR_7);
 return (VAR_5);
}
