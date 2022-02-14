
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ahd_softc {int * platform_data; } ;
struct ahd_platform_data {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_0 (int,int ,int) ;

int
FUNC_1(struct ahd_softc *VAR_4, void *VAR_5)
{
 VAR_4->platform_data = FUNC_0(sizeof(struct ahd_platform_data), VAR_1,
     VAR_2 | VAR_3);
 if (VAR_4->platform_data == ((void*)0))
  return (VAR_0);
 return (0);
}
