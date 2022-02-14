
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int off_t ;
typedef int dnode_phys_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ,int const*,int *,void*,size_t) ;

__attribute__((used)) static int
FUNC_2(const dnode_phys_t *VAR_1, off_t *VAR_2, void *VAR_3, size_t VAR_4)
{
    if ((size_t)FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4) != VAR_4) {
 FUNC_0("Invalid format\n");
 return -1;
    }
    return 0;
}
