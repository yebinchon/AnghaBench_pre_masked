
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*,int,...) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_4 ;

__attribute__((used)) static void *
FUNC_5(void *VAR_5)
{
 int VAR_6 = (int)(long)VAR_5;
 int VAR_7;

 FUNC_1("thread %d entering barrier\n", VAR_6);
 VAR_7 = FUNC_2(&VAR_2);
 FUNC_1("thread %d leaving barrier -> %d\n", VAR_6, VAR_7);

 FUNC_0(FUNC_3(&VAR_3));
 VAR_1++;
 if (VAR_7 == VAR_0)
  VAR_4++;
 FUNC_0(FUNC_4(&VAR_3));

 return ((void*)0);
}
