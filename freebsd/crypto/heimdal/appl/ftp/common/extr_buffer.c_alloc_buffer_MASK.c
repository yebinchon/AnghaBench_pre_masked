
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_blksize; } ;


 size_t VAR_0 ;
 int FUNC_0 (void*) ;
 void* FUNC_1 (size_t) ;
 size_t FUNC_2 (size_t,int ) ;
 int FUNC_3 (char*) ;

void *
FUNC_4 (void *VAR_1, size_t *VAR_2, struct stat *VAR_3)
{
    size_t VAR_4;

    VAR_4 = VAR_0;




    if(VAR_4 > *VAR_2) {
 if (VAR_1)
     FUNC_0 (VAR_1);
 VAR_1 = FUNC_1 (VAR_4);
 if (VAR_1 == ((void*)0)) {
     FUNC_3 ("malloc");
     *VAR_2 = 0;
     return ((void*)0);
 }
 *VAR_2 = VAR_4;
    }
    return VAR_1;
}
