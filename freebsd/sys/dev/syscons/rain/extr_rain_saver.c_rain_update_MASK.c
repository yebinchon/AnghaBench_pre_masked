
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int video_adapter_t ;


 size_t FUNC_0 (int) ;
 int VAR_0 ;
 int* VAR_1 ;
 int FUNC_1 (int *,int*) ;

__attribute__((used)) static void
FUNC_2(video_adapter_t *VAR_2)
{
 int VAR_3, VAR_4;

 VAR_4 = VAR_1[FUNC_0(VAR_0)];
 for (VAR_3 = VAR_0; VAR_3 > 1; VAR_3--)
  VAR_1[FUNC_0(VAR_3)] = VAR_1[FUNC_0(VAR_3 - 1)];
 VAR_1[FUNC_0(1)] = VAR_4;
 FUNC_1(VAR_2, VAR_1);
}
