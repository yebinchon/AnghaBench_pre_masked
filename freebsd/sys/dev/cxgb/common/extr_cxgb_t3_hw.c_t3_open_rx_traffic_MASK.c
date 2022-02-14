
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cmac {scalar_t__ offset; int adapter; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct cmac*) ;
 int FUNC_1 (int ,scalar_t__,int,int ) ;
 int FUNC_2 (int ,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_3(struct cmac *VAR_6, u32 VAR_7,
          u32 VAR_8, u32 VAR_9)
{
 FUNC_0(VAR_6);
 FUNC_1(VAR_6->adapter, VAR_0 + VAR_6->offset,
    VAR_5 | VAR_4 | VAR_3,
    VAR_7);
 FUNC_2(VAR_6->adapter, VAR_1 + VAR_6->offset,
     VAR_8);
 FUNC_2(VAR_6->adapter, VAR_2 + VAR_6->offset,
     VAR_9);
}
