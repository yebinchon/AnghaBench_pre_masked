
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucred {int dummy; } ;
struct nfsrv_descript {int nd_flag; int nd_nam; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct ucred*) ;
 int VAR_9 ;
 int FUNC_2 (int *,int ,int*,struct ucred**,int*,int**) ;

int
FUNC_3(struct nfsrv_descript *VAR_10)
{
 struct ucred *VAR_11;
 int VAR_12, VAR_13 = 0, VAR_14, *VAR_15, VAR_16;

 VAR_13 = FUNC_2(&VAR_9, VAR_10->nd_nam, &VAR_12,
     &VAR_11, &VAR_14, &VAR_15);
 if (VAR_13) {
  VAR_13 = VAR_5;
  goto out;
 }
 if (VAR_11 != ((void*)0))
  FUNC_1(VAR_11);
 for (VAR_16 = 0; VAR_16 < VAR_14; VAR_16++) {
  if (VAR_15[VAR_16] == VAR_0)
   VAR_10->nd_flag |= VAR_1;
  else if (VAR_15[VAR_16] == VAR_6)
   VAR_10->nd_flag |= VAR_2;
  else if (VAR_15[VAR_16] == VAR_7)
   VAR_10->nd_flag |= VAR_3;
  else if (VAR_15[VAR_16] == VAR_8)
   VAR_10->nd_flag |= VAR_4;
 }

out:
 FUNC_0(VAR_13);
 return (VAR_13);
}
