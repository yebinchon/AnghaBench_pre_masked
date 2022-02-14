
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rds_header {int h_csum; } ;


 scalar_t__ FUNC_0 (void*,int) ;

__attribute__((used)) static inline int FUNC_1(const struct rds_header *VAR_0)
{
 return !VAR_0->h_csum || FUNC_0((void *) VAR_0, sizeof(*VAR_0) >> 2) == 0;
}
