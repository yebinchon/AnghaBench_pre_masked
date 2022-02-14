
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int * sk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;

__attribute__((used)) static int FUNC_1(struct socket *VAR_2, int VAR_3,
        int VAR_4, int VAR_5, int VAR_6)
{
 if (VAR_3 != VAR_0 || VAR_2->sk == ((void*)0))
  return 0;



 return FUNC_0(VAR_2->sk, VAR_1);
}
