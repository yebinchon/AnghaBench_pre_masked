
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
struct loop {int num; } ;
typedef int htab_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (scalar_t__,char*,...) ;
 int VAR_6 ;
 int FUNC_1 (int,int ,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct loop*,int ,int ,int ,int ) ;
 int FUNC_4 (scalar_t__,int ,int ) ;

tree
FUNC_5 (struct loop *VAR_7,
   tree VAR_8)
{
  tree VAR_9;
  htab_t VAR_10 = FUNC_1 (10, VAR_6, VAR_5, VAR_2);

  if (VAR_3 && (VAR_4 & VAR_1))
    {
      FUNC_0 (VAR_3, "(instantiate_parameters \n");
      FUNC_0 (VAR_3, "  (loop_nb = %d)\n", VAR_7->num);
      FUNC_0 (VAR_3, "  (chrec = ");
      FUNC_4 (VAR_3, VAR_8, 0);
      FUNC_0 (VAR_3, ")\n");
    }

  VAR_9 = FUNC_3 (VAR_7, VAR_8, VAR_0, VAR_10,
      0);

  if (VAR_3 && (VAR_4 & VAR_1))
    {
      FUNC_0 (VAR_3, "  (res = ");
      FUNC_4 (VAR_3, VAR_9, 0);
      FUNC_0 (VAR_3, "))\n");
    }

  FUNC_2 (VAR_10);

  return VAR_9;
}
