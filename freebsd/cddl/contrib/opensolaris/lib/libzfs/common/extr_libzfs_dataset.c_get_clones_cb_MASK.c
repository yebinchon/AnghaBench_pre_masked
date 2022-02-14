
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zfs_handle_t ;
struct get_clones_arg {scalar_t__ numclones; int value; int origin; int buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int (*) (int *,void*),struct get_clones_arg*) ;
 scalar_t__ FUNC_5 (int *,int ,int ,int,int *,int *,int ,int ) ;

int
FUNC_6(zfs_handle_t *VAR_2, void *VAR_3)
{
 struct get_clones_arg *VAR_4 = VAR_3;

 if (VAR_4->numclones == 0) {
  FUNC_2(VAR_2);
  return (0);
 }

 if (FUNC_5(VAR_2, VAR_1, VAR_4->buf, sizeof (VAR_4->buf),
     ((void*)0), ((void*)0), 0, VAR_0) != 0)
  goto out;
 if (FUNC_1(VAR_4->buf, VAR_4->origin) == 0) {
  FUNC_0(VAR_4->value, FUNC_3(VAR_2));
  VAR_4->numclones--;
 }

out:
 (void) FUNC_4(VAR_2, FUNC_6, VAR_4);
 FUNC_2(VAR_2);
 return (0);
}
