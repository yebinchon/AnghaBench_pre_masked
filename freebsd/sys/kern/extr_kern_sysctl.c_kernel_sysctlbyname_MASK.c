
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
typedef int oid ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct thread*,int*,size_t,void*,size_t*,void*,size_t,size_t*,int) ;
 int FUNC_1 (char*) ;

int
FUNC_2(struct thread *VAR_3, char *VAR_4, void *VAR_5, size_t *VAR_6,
    void *VAR_7, size_t VAR_8, size_t *VAR_9, int VAR_10)
{
        int VAR_11[VAR_0];
        size_t VAR_12, VAR_13;
 int VAR_14;

 VAR_11[0] = VAR_1;
 VAR_11[1] = VAR_2;
 VAR_12 = sizeof(VAR_11);

 VAR_14 = FUNC_0(VAR_3, VAR_11, 2, VAR_11, &VAR_12,
     (void *)VAR_4, FUNC_1(VAR_4), &VAR_13, VAR_10);
 if (VAR_14)
  return (VAR_14);

 VAR_14 = FUNC_0(VAR_3, VAR_11, VAR_13 / sizeof(int), VAR_5, VAR_6,
     VAR_7, VAR_8, VAR_9, VAR_10);
 return (VAR_14);
}
