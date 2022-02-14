
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_mount {int dummy; } ;
typedef int inst_t ;


 int VAR_0 ;
 int FUNC_0 (struct xfs_mount*,int ,char*,char const*,int,char const*,int *) ;
 int VAR_1 ;
 int FUNC_1 () ;

void
FUNC_2(
 const char *VAR_2,
 int VAR_3,
 struct xfs_mount *VAR_4,
 const char *VAR_5,
 int VAR_6,
 inst_t *VAR_7)
{
 if (VAR_3 <= VAR_1) {
  FUNC_0(VAR_4, VAR_0,
  "Internal error %s at line %d of file %s.  Caller 0x%p\n",
       VAR_2, VAR_6, VAR_5, VAR_7);

  FUNC_1();
 }
}
