
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct percpu_data {void** ptrs; } ;
typedef int gfp_t ;


 int FUNC_0 (void*) ;
 int VAR_0 ;
 struct percpu_data* FUNC_1 (void*) ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;
 void* FUNC_4 (size_t,int,int) ;
 void* FUNC_5 (size_t,int) ;
 scalar_t__ FUNC_6 (int) ;
 size_t FUNC_7 (size_t,int ) ;

__attribute__((used)) static void *FUNC_8(void *VAR_1, size_t VAR_2, gfp_t VAR_3, int VAR_4)
{
 struct percpu_data *VAR_5 = FUNC_1(VAR_1);
 int VAR_6 = FUNC_3(VAR_4);




 VAR_2 = FUNC_7(VAR_2, FUNC_2());

 FUNC_0(VAR_5->ptrs[VAR_4]);
 if (FUNC_6(VAR_6))
  VAR_5->ptrs[VAR_4] = FUNC_4(VAR_2, VAR_3|VAR_0, VAR_6);
 else
  VAR_5->ptrs[VAR_4] = FUNC_5(VAR_2, VAR_3);
 return VAR_5->ptrs[VAR_4];
}
