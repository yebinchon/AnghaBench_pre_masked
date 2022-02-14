
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zpool_handle_t ;
typedef int bootfs ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (char*,char*,int) ;
 scalar_t__ FUNC_1 (int *,int ,char*,int,int *,int ) ;

boolean_t
FUNC_2(zpool_handle_t *VAR_3)
{
 char VAR_4[VAR_1];

 return (FUNC_1(VAR_3, VAR_2, VAR_4,
     sizeof (VAR_4), ((void*)0), VAR_0) == 0 && FUNC_0(VAR_4, "-",
     sizeof (VAR_4)) != 0);
}
