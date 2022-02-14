
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct csa_info {int res; } ;
typedef int device_t ;
typedef int csa_res ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct csa_info*) ;
 int FUNC_1 (struct csa_info*,int) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct csa_info*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct csa_info*) ;
 int FUNC_7 (int *,int ,int) ;
 int FUNC_8 (int *,int ,int) ;
 struct csa_info* FUNC_9 (int ) ;

__attribute__((used)) static int
FUNC_10(device_t VAR_5)
{
 struct csa_info *VAR_6;
 csa_res *VAR_7;

 VAR_6 = FUNC_9(VAR_5);
 VAR_7 = &VAR_6->res;

 FUNC_1(VAR_6, 1);


 FUNC_8(VAR_7, VAR_3,
     (FUNC_2(VAR_7, VAR_3) & ~0x0000f03f) | 0x00000010);

 FUNC_8(VAR_7, VAR_2,
     (FUNC_2(VAR_7, VAR_2) & ~0x0000003f) | 0x00000011);
 FUNC_6(VAR_6);
 FUNC_4(VAR_6);

 FUNC_0(VAR_6);

 FUNC_3(VAR_7);

 FUNC_5(VAR_7);



 FUNC_7(&VAR_6->res, VAR_0, 0x300);



 FUNC_8(VAR_7, VAR_1, 0);




 FUNC_8(VAR_7, VAR_1,
     FUNC_2(VAR_7, VAR_1) & ~VAR_4);

 FUNC_1(VAR_6, -1);

 return 0;
}
