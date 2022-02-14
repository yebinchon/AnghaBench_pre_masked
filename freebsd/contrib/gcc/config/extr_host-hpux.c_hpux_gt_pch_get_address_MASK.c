
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 void* FUNC_0 (void*,size_t,int,int ,int,int ) ;
 int FUNC_1 (void*,size_t) ;

__attribute__((used)) static void *
FUNC_2 (size_t VAR_5, int VAR_6)
{
  void *VAR_7;

  VAR_7 = FUNC_0 ((void *)VAR_4, VAR_5, VAR_2 | VAR_3,
        VAR_1, VAR_6, 0);


  if (VAR_7 == (void *) VAR_0)
    return ((void*)0);

  FUNC_1 (VAR_7, VAR_5);

  return VAR_7;
}
