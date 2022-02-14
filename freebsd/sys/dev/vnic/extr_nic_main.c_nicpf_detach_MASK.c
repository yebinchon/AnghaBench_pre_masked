
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nicpf {int check_link_mtx; int check_link; } ;
typedef int device_t ;


 int FUNC_0 (int *) ;
 struct nicpf* FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct nicpf*) ;
 int FUNC_5 (struct nicpf*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int
FUNC_8(device_t VAR_0)
{
 struct nicpf *VAR_1;
 int VAR_2;

 VAR_2 = 0;
 VAR_1 = FUNC_1(VAR_0);

 FUNC_0(&VAR_1->check_link);
 FUNC_3(&VAR_1->check_link_mtx);

 FUNC_4(VAR_1);
 FUNC_5(VAR_1);
 FUNC_6(VAR_0);






 return (VAR_2);
}
