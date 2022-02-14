
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct set_telem {int timeout; } ;
struct list_set {int dummy; } ;


 int FUNC_0 (int ) ;
 struct set_telem* FUNC_1 (struct list_set const*,int ) ;

__attribute__((used)) static inline bool
FUNC_2(const struct list_set *VAR_0, u32 VAR_1)
{
 const struct set_telem *VAR_2 = FUNC_1(VAR_0, VAR_1);

 return FUNC_0(VAR_2->timeout);
}
