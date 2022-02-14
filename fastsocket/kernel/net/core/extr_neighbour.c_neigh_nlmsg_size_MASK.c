
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ndmsg {int dummy; } ;
struct nda_cacheinfo {int dummy; } ;


 int VAR_0 ;
 size_t FUNC_0 (int) ;
 size_t FUNC_1 (int) ;

__attribute__((used)) static inline size_t FUNC_2(void)
{
 return FUNC_0(sizeof(struct ndmsg))
        + FUNC_1(VAR_0)
        + FUNC_1(VAR_0)
        + FUNC_1(sizeof(struct nda_cacheinfo))
        + FUNC_1(4);
}
