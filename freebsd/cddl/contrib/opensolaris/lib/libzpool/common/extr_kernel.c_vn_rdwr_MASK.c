
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int v_dump_fd; int v_fd; } ;
typedef TYPE_1__ vnode_t ;
typedef int ssize_t ;
typedef int rlim64_t ;
typedef scalar_t__ offset_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,void*,int,scalar_t__) ;
 int FUNC_2 (int,char*,int,scalar_t__) ;
 int FUNC_3 () ;

int
FUNC_4(int VAR_4, vnode_t *VAR_5, void *VAR_6, ssize_t VAR_7, offset_t VAR_8,
    int VAR_9, int VAR_10, rlim64_t VAR_11, void *VAR_12, ssize_t *VAR_13)
{
 ssize_t VAR_14, VAR_15;

 if (VAR_4 == VAR_2) {
  VAR_14 = FUNC_1(VAR_5->v_fd, VAR_6, VAR_7, VAR_8);
  if (VAR_5->v_dump_fd != -1) {
   int VAR_16 =
       FUNC_2(VAR_5->v_dump_fd, VAR_6, VAR_14, VAR_8);
   FUNC_0(VAR_16 != -1);
  }
 } else {




  int VAR_17 = VAR_7 >> VAR_1;
  VAR_15 = (VAR_17 > 0 ? FUNC_3() % VAR_17 : 0) <<
      VAR_1;
  VAR_14 = FUNC_2(VAR_5->v_fd, VAR_6, VAR_15, VAR_8);
  VAR_14 += FUNC_2(VAR_5->v_fd, (char *)VAR_6 + VAR_15,
      VAR_7 - VAR_15, VAR_8 + VAR_15);
 }

 if (VAR_14 == -1)
  return (VAR_3);
 if (VAR_13)
  *VAR_13 = VAR_7 - VAR_14;
 else if (VAR_14 != VAR_7)
  return (VAR_0);
 return (0);
}
