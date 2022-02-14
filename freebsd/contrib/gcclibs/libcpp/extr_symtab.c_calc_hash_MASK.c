
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int FUNC_0 (unsigned int,size_t) ;
 unsigned int FUNC_1 (unsigned int,int ) ;

__attribute__((used)) static unsigned int
FUNC_2 (const unsigned char *VAR_0, size_t VAR_1)
{
  size_t VAR_2 = VAR_1;
  unsigned int VAR_3 = 0;

  while (VAR_2--)
    VAR_3 = FUNC_1 (VAR_3, *VAR_0++);

  return FUNC_0 (VAR_3, VAR_1);
}
