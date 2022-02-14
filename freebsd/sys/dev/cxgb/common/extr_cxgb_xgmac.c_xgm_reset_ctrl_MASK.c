
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmac {scalar_t__ offset; int * adapter; } ;
typedef int adapter_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,scalar_t__) ;
 scalar_t__ FUNC_3 (int *) ;

__attribute__((used)) static inline int FUNC_4(const struct cmac *VAR_6)
{
 adapter_t *VAR_7 = VAR_6->adapter;
 int VAR_8 = VAR_1 | VAR_5;

 if (FUNC_1(VAR_7)) {
  int VAR_9 = FUNC_2(VAR_7, VAR_0 + VAR_6->offset);

  VAR_8 |= VAR_2;
  if (FUNC_0(VAR_9) != 3)
   VAR_8 |= VAR_4;
 } else if (FUNC_3(VAR_7))
  VAR_8 |= VAR_2 | VAR_4;
 else
  VAR_8 |= VAR_3 | VAR_4;

 return (VAR_8);
}
