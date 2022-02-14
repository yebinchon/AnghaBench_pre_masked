
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_da_args {scalar_t__ cmpresult; int op_flags; int valuelen; int value; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int ,unsigned char const*,int) ;

int
FUNC_2(
 struct xfs_da_args *VAR_8,
 const unsigned char *VAR_9,
 int VAR_10)
{
 if (VAR_8->cmpresult == VAR_6)
  return VAR_1;
 if (VAR_8->cmpresult != VAR_5 ||
     !(VAR_8->op_flags & VAR_7))
  return VAR_0;

 VAR_8->value = FUNC_0(VAR_10, VAR_4 | VAR_3);
 if (!VAR_8->value)
  return VAR_2;

 FUNC_1(VAR_8->value, VAR_9, VAR_10);
 VAR_8->valuelen = VAR_10;
 return VAR_0;
}
