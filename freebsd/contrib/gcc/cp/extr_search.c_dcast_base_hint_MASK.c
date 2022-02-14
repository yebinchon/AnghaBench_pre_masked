
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
struct dcast_data_s {scalar_t__ offset; int repeated_base; scalar_t__ virt_depth; scalar_t__ subtype; } ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,int,int ,int ,struct dcast_data_s*) ;
 scalar_t__ FUNC_3 (int) ;

tree
FUNC_4 (tree VAR_3, tree VAR_4)
{
  struct dcast_data_s VAR_5;

  VAR_5.subtype = VAR_3;
  VAR_5.virt_depth = 0;
  VAR_5.offset = VAR_0;
  VAR_5.repeated_base = FUNC_0 (VAR_4);

  FUNC_2 (FUNC_1 (VAR_4), 0,
       VAR_2, VAR_1, &VAR_5);
  return VAR_5.offset ? VAR_5.offset : FUNC_3 (-2);
}
