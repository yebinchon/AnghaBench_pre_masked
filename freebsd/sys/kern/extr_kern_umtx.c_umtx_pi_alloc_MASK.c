
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct umtx_pi {int pi_blocked; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 struct umtx_pi* FUNC_2 (int ,int) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static inline struct umtx_pi *
FUNC_3(int VAR_3)
{
 struct umtx_pi *VAR_4;

 VAR_4 = FUNC_2(VAR_2, VAR_0 | VAR_3);
 FUNC_0(&VAR_4->pi_blocked);
 FUNC_1(&VAR_1, 1);
 return (VAR_4);
}
