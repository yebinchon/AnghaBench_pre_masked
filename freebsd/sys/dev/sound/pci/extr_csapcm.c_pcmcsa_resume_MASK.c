
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct csa_info {int rch; int pch; int res; } ;
typedef int device_t ;
typedef int csa_res ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct csa_info*) ;
 int FUNC_1 (struct csa_info*,int) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct csa_info*) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (struct csa_info*) ;
 int FUNC_8 (struct csa_info*) ;
 int FUNC_9 (struct csa_info*) ;
 int FUNC_10 (int *,int ,int) ;
 int FUNC_11 (int *,int ,int) ;
 struct csa_info* FUNC_12 (int ) ;

__attribute__((used)) static int
FUNC_13(device_t VAR_8)
{
 struct csa_info *VAR_9;
 csa_res *VAR_10;

 VAR_9 = FUNC_12(VAR_8);
 VAR_10 = &VAR_9->res;

 FUNC_1(VAR_9, 1);


 FUNC_9(VAR_9);
 FUNC_8(VAR_9);
 FUNC_0(VAR_9);
 if (FUNC_6(VAR_10))
  return (VAR_4);

 if ((FUNC_2(VAR_10, VAR_1) & VAR_7) == 0)
  FUNC_10(VAR_10, VAR_0, VAR_6 | VAR_5);

 FUNC_11(VAR_10, VAR_3, FUNC_3(VAR_10, VAR_3) & ~0x0000f03f);

 FUNC_11(VAR_10, VAR_2,
     (FUNC_3(VAR_10, VAR_2) & ~0x0000003f) | 0x00000001);

 FUNC_4(&VAR_9->pch);
 FUNC_7(VAR_9);
 FUNC_4(&VAR_9->rch);
 FUNC_5(VAR_9);

 FUNC_1(VAR_9, -1);

 return 0;
}
