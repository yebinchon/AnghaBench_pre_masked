
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ,int,char*) ;
 unsigned int* FUNC_1 (int) ;
 int FUNC_2 (unsigned int*,char const*) ;

__attribute__((used)) static int
FUNC_3 (unsigned int **VAR_1, const char *VAR_2)
{
    unsigned int VAR_3;
    int VAR_4;

    *VAR_1 = ((void*)0);
    VAR_4 = FUNC_2 (&VAR_3, VAR_2);
    if (VAR_4 == 1) {
 *VAR_1 = FUNC_1 (sizeof (**VAR_1));
 if (*VAR_1 == ((void*)0))
     FUNC_0 (VAR_0, 1, "malloc: out of memory");
 **VAR_1 = VAR_3;
    }
    return VAR_4;
}
