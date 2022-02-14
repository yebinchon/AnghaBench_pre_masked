
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct iucv_path {size_t pathid; int list; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int ** VAR_3 ;
 int FUNC_1 (size_t,int *) ;
 int VAR_4 ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

int FUNC_8(struct iucv_path *VAR_5, u8 VAR_6[16])
{
 int VAR_7;

 FUNC_3();
 if (FUNC_0(VAR_2)) {
  VAR_7 = -VAR_0;
  goto out;
 }
 if (VAR_1 != FUNC_5())
  FUNC_6(&VAR_4);
 VAR_7 = FUNC_1(VAR_5->pathid, VAR_6);
 VAR_3[VAR_5->pathid] = ((void*)0);
 FUNC_2(&VAR_5->list);
 if (VAR_1 != FUNC_5())
  FUNC_7(&VAR_4);
out:
 FUNC_4();
 return VAR_7;
}
