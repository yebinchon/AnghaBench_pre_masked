
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned int,unsigned int) ;
 int FUNC_1 (unsigned int) ;
 unsigned int FUNC_2 (unsigned int,int ) ;
 unsigned int FUNC_3 () ;
 unsigned int VAR_2 ;

__attribute__((used)) static int
FUNC_4(unsigned int VAR_3)
{
 int VAR_4;
 unsigned int VAR_5, VAR_6;

 VAR_5 = VAR_2;
 VAR_6 = FUNC_2(VAR_3, VAR_1);
 if (VAR_5 + VAR_6 > FUNC_3())
  return (VAR_0);

 VAR_4 = FUNC_0(VAR_5, VAR_5 + VAR_6 - 1);
 if (!VAR_4)
  VAR_4 = FUNC_1(VAR_6);

 return (VAR_4);
}
