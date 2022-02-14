
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* h_cmp ) (void*,void*) ;} ;
typedef TYPE_1__ hash_t ;


 int FUNC_0 (void*,void*) ;

__attribute__((used)) static int
FUNC_1(void *VAR_0, void *VAR_1, void *VAR_2)
{
 hash_t *VAR_3 = VAR_2;
 return (VAR_3->h_cmp(VAR_0, VAR_1));
}
