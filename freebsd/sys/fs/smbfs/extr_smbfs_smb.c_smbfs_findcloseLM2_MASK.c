
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smbfs_fctx {int f_flags; scalar_t__ f_t2; scalar_t__ f_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct smbfs_fctx*) ;

__attribute__((used)) static int
FUNC_3(struct smbfs_fctx *VAR_2)
{
 if (VAR_2->f_name)
  FUNC_0(VAR_2->f_name, VAR_0);
 if (VAR_2->f_t2)
  FUNC_1(VAR_2->f_t2);
 if ((VAR_2->f_flags & VAR_1) == 0)
  FUNC_2(VAR_2);
 return 0;
}
