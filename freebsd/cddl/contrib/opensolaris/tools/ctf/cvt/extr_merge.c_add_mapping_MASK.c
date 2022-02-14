
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tid_t ;
typedef int alist_t ;


 int FUNC_0 (int *,void*,void*) ;
 int FUNC_1 (int *,void*,int *) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,char*,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;

__attribute__((used)) static void
FUNC_4(alist_t *VAR_0, tid_t VAR_1, tid_t VAR_2)
{
 FUNC_3(3, "Adding mapping %u <%x> => %u <%x>\n", VAR_1, VAR_1, VAR_2, VAR_2);

 FUNC_2(!FUNC_1(VAR_0, (void *)(uintptr_t)VAR_1, ((void*)0)));
 FUNC_2(VAR_1 != 0 && VAR_2 != 0);

 FUNC_0(VAR_0, (void *)(uintptr_t)VAR_1, (void *)(uintptr_t)VAR_2);
}
