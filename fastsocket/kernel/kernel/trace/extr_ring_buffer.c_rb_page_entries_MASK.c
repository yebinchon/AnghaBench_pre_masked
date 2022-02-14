
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buffer_page {int entries; } ;


 unsigned long VAR_0 ;
 unsigned long FUNC_0 (int *) ;

__attribute__((used)) static inline unsigned long FUNC_1(struct buffer_page *VAR_1)
{
 return FUNC_0(&VAR_1->entries) & VAR_0;
}
