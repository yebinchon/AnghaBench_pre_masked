
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct address_info {unsigned int io_base; } ;


 unsigned int VAR_0 ;
 unsigned char FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned char,unsigned int) ;

__attribute__((used)) static inline void
FUNC_2(struct address_info *VAR_1, unsigned char VAR_2, unsigned char VAR_3)
{
 unsigned int VAR_4 = VAR_1->io_base + VAR_0;

 VAR_2 = ~VAR_2 & FUNC_0(VAR_4);

 FUNC_1(VAR_2 | VAR_3, VAR_4);
}
