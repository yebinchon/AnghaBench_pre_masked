
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pyrf_thread_map {int * threads; } ;
typedef int PyObject ;


 int FUNC_0 (int *,int *,char*,char**,int*,int*,int*) ;
 int VAR_0 ;
 int * FUNC_1 (int,int,int) ;

__attribute__((used)) static int FUNC_2(struct pyrf_thread_map *VAR_1,
     PyObject *VAR_2, PyObject *VAR_3)
{
 static char *VAR_4[] = { "pid", "tid", "uid", ((void*)0) };
 int VAR_5 = -1, VAR_6 = -1, VAR_7 = VAR_0;

 if (!FUNC_0(VAR_2, VAR_3, "|iii",
      VAR_4, &VAR_5, &VAR_6, &VAR_7))
  return -1;

 VAR_1->threads = FUNC_1(VAR_5, VAR_6, VAR_7);
 if (VAR_1->threads == ((void*)0))
  return -1;
 return 0;
}
