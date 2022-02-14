
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlattr {int dummy; } ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct nlattr const* const) ;

__attribute__((used)) static inline bool
FUNC_1(const struct nlattr * const VAR_2[])
{
 return !VAR_2[VAR_0] ||
        FUNC_0(VAR_2[VAR_0]) != VAR_1;
}
