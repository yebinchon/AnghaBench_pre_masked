
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct hw20k2 {int addr_size; int data_size; } ;
struct hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct hw*) ;
 unsigned int FUNC_1 (struct hw*,int ) ;
 int FUNC_2 (struct hw*,int ,unsigned int) ;
 int FUNC_3 (unsigned int*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct hw *VAR_3, u16 VAR_4, u32 VAR_5)
{
 struct hw20k2 *VAR_6 = (struct hw20k2 *)VAR_3;
 unsigned int VAR_7 = (VAR_5 << (VAR_6->addr_size * 8)) | VAR_4;
 unsigned int VAR_8;

 VAR_8 = FUNC_1(VAR_3, VAR_0);

 FUNC_3(&VAR_8, VAR_2,
    (4 == (VAR_6->addr_size + VAR_6->data_size)) ?
    0 : (VAR_6->addr_size + VAR_6->data_size));

 FUNC_2(VAR_3, VAR_0, VAR_8);
 FUNC_0(VAR_3);

 FUNC_2(VAR_3, VAR_1, 0);
 FUNC_0(VAR_3);


 FUNC_2(VAR_3, VAR_1, VAR_7);
 FUNC_0(VAR_3);

 return 0;
}
