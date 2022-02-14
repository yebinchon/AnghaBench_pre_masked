
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct t4_wq {int * db_offp; } ;


 int VAR_0 ;

__attribute__((used)) static inline int FUNC_0(struct t4_wq *VAR_1)
{






 if ( VAR_0 >= 2 )
  return ! *VAR_1->db_offp;
 else
  return 1;
}
