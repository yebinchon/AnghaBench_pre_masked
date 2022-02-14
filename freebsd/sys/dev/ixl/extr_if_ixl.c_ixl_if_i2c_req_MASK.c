
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ixl_pf {scalar_t__ (* read_i2c_byte ) (struct ixl_pf*,scalar_t__,int ,int *) ;} ;
struct ifi2creq {int len; int * data; int dev_addr; scalar_t__ offset; } ;
typedef int if_ctx_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct ixl_pf* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct ixl_pf*,scalar_t__,int ,int *) ;

__attribute__((used)) static int
FUNC_2(if_ctx_t VAR_2, struct ifi2creq *VAR_3)
{
 struct ixl_pf *VAR_4 = FUNC_0(VAR_2);

 if (VAR_4->read_i2c_byte == ((void*)0))
  return (VAR_0);

 for (int VAR_5 = 0; VAR_5 < VAR_3->len; VAR_5++)
  if (VAR_4->read_i2c_byte(VAR_4, VAR_3->offset + VAR_5,
      VAR_3->dev_addr, &VAR_3->data[VAR_5]))
   return (VAR_1);
 return (0);
}
