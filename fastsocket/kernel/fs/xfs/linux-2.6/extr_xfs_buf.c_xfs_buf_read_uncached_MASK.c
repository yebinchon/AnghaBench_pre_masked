
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xfs_daddr_t ;
struct xfs_buf {int dummy; } ;
typedef struct xfs_buf xfs_buf_t ;
struct xfs_mount {int dummy; } ;
struct xfs_buftarg {int dummy; } ;


 int FUNC_0 (struct xfs_buf*) ;
 int FUNC_1 (struct xfs_buf*) ;
 int FUNC_2 (struct xfs_buf*,int ) ;
 struct xfs_buf* FUNC_3 (struct xfs_buftarg*,size_t,int) ;
 int FUNC_4 (struct xfs_buf*) ;
 int FUNC_5 (struct xfs_buf*) ;
 int FUNC_6 (struct xfs_buf*) ;
 int FUNC_7 (struct xfs_mount*,struct xfs_buf*) ;

struct xfs_buf *
FUNC_8(
 struct xfs_mount *VAR_0,
 struct xfs_buftarg *VAR_1,
 xfs_daddr_t VAR_2,
 size_t VAR_3,
 int VAR_4)
{
 xfs_buf_t *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_3(VAR_1, VAR_3, VAR_4);
 if (!VAR_5)
  return ((void*)0);


 FUNC_5(VAR_5);
 FUNC_2(VAR_5, VAR_2);
 FUNC_1(VAR_5);
 FUNC_0(VAR_5);

 FUNC_7(VAR_0, VAR_5);
 VAR_6 = FUNC_4(VAR_5);
 if (VAR_6) {
  FUNC_6(VAR_5);
  return ((void*)0);
 }
 return VAR_5;
}
