
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_int32_t ;
struct TYPE_5__ {scalar_t__* other; } ;
typedef TYPE_1__ nfsv4stateid_t ;
struct TYPE_6__ {scalar_t__* lval; } ;
typedef TYPE_2__ nfsquad_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int *,int *,int) ;
 scalar_t__ VAR_7 ;

__attribute__((used)) static int
FUNC_4(nfsquad_t VAR_8, u_int32_t VAR_9,
    nfsv4stateid_t *VAR_10, int VAR_11)
{
 int VAR_12 = 0;





 if (VAR_9 &
     (VAR_4 | VAR_6 | VAR_5 | VAR_3)) {
  if (VAR_8.lval[0] != VAR_7) {
   VAR_12 = VAR_0;
   goto out;
  }
 } else if (VAR_10->other[0] != VAR_7 &&
  VAR_11 == 0) {
  VAR_12 = VAR_1;
  goto out;
 }






 if (!(VAR_9 & (VAR_2 | VAR_6)))
  goto out;

 FUNC_1();
 VAR_12 = FUNC_3(((void*)0), ((void*)0), VAR_9);
 FUNC_2();

out:
 FUNC_0(VAR_12);
 return (VAR_12);
}
