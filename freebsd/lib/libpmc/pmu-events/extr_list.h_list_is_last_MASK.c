
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_head {struct list_head const* next; } ;



__attribute__((used)) static inline int FUNC_0(const struct list_head *VAR_0,
    const struct list_head *VAR_1)
{
 return VAR_0->next == VAR_1;
}
