
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_mount {int dummy; } ;
struct xfs_eofblocks {int eof_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct xfs_mount*,int ,int,struct xfs_eofblocks*,int ) ;
 int VAR_4 ;

int
FUNC_1(
 struct xfs_mount *VAR_5,
 struct xfs_eofblocks *VAR_6)
{
 int VAR_7 = VAR_0;

 if (VAR_6 && (VAR_6->eof_flags & VAR_2))
  VAR_7 = VAR_1;

 return FUNC_0(VAR_5, VAR_4, VAR_7,
      VAR_6, VAR_3);
}
