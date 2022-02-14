
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmipci {scalar_t__ iobase; } ;


 unsigned char FUNC_0 (scalar_t__) ;

__attribute__((used)) static inline unsigned char FUNC_1(struct cmipci *VAR_0, unsigned int VAR_1)
{
 return FUNC_0(VAR_0->iobase + VAR_1);
}
