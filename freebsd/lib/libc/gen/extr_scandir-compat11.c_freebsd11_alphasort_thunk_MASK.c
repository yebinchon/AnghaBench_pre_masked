
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef struct freebsd11_dirent freebsd11_dirent ;



__attribute__((used)) static int
FUNC_0(void *VAR_0, const void *VAR_1, const void *VAR_2)
{
 int (*VAR_3)(const struct freebsd11_dirent **, const struct
     freebsd11_dirent **);

 VAR_3 = *(int (**)(const struct freebsd11_dirent **,
     const struct freebsd11_dirent **))VAR_0;
 return (VAR_3((const struct freebsd11_dirent **)VAR_1,
     (const struct freebsd11_dirent **)VAR_2));
}
