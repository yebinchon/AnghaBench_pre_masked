
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbstat {int* m_mtypes; } ;
typedef int mbstat ;


 int const VAR_0 ;
 int const VAR_1 ;
 int const VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int const*) ;
 int FUNC_2 (int const*,int ,struct mbstat*,size_t*,int *,int ) ;

__attribute__((used)) static int
FUNC_3(void)
{
 struct mbstat VAR_4;
 size_t VAR_5 = sizeof(VAR_4);
 const int VAR_6[] = { VAR_0, VAR_1, VAR_2 };

 FUNC_0(FUNC_2(VAR_6, FUNC_1(VAR_6),
     &VAR_4, &VAR_5, ((void*)0), 0));
 return VAR_4.m_mtypes[VAR_3];
}
