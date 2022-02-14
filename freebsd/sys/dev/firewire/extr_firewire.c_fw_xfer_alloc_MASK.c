
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct malloc_type {int dummy; } ;
struct fw_xfer {int tl; struct malloc_type* malloc; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct fw_xfer* FUNC_0 (int,struct malloc_type*,int) ;

struct fw_xfer *
FUNC_1(struct malloc_type *VAR_2)
{
 struct fw_xfer *VAR_3;

 VAR_3 = FUNC_0(sizeof(struct fw_xfer), VAR_2, VAR_0 | VAR_1);
 if (VAR_3 == ((void*)0))
  return VAR_3;

 VAR_3->malloc = VAR_2;
 VAR_3->tl = -1;

 return VAR_3;
}
