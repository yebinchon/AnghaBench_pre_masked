
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct malloc_hdr {int dummy; } ;


 int FUNC_0 (int *,struct malloc_hdr*,int ) ;
 int VAR_0 ;
 int VAR_1 ;

void
FUNC_1(void *VAR_2)
{
 struct malloc_hdr *VAR_3;

 if (VAR_2 == ((void*)0))
  return;

 VAR_3 = VAR_2;
 VAR_3--;

 FUNC_0(&VAR_1, VAR_3, VAR_0);
}
