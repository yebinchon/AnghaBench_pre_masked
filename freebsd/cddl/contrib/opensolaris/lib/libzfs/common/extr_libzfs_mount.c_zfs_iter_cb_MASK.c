
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zfs_handle_t ;
typedef int get_all_cb_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int (*) (int *,void*),int *) ;
 scalar_t__ FUNC_4 (int *,int ,int *,int ,int *,int *,int ,int ) ;
 scalar_t__ FUNC_5 (int *,int ) ;

__attribute__((used)) static int
FUNC_6(zfs_handle_t *VAR_6, void *VAR_7)
{
 get_all_cb_t *VAR_8 = VAR_7;

 if (!(FUNC_2(VAR_6) & VAR_5)) {
  FUNC_1(VAR_6);
  return (0);
 }

 if (FUNC_5(VAR_6, VAR_2) == VAR_1) {
  FUNC_1(VAR_6);
  return (0);
 }





 if (FUNC_5(VAR_6, VAR_3) &&
     FUNC_4(VAR_6, VAR_4,
     ((void*)0), 0, ((void*)0), ((void*)0), 0, VAR_0) == 0) {
  FUNC_1(VAR_6);
  return (0);
 }

 FUNC_0(VAR_8, VAR_6);
 if (FUNC_3(VAR_6, FUNC_6, VAR_8) != 0) {
  FUNC_1(VAR_6);
  return (-1);
 }
 return (0);
}
