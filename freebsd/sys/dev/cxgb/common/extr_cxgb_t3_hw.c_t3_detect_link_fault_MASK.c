
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct cmac {scalar_t__ offset; } ;
struct port_info {struct cmac mac; } ;
typedef int adapter_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct port_info* FUNC_0 (int *,int) ;
 int FUNC_1 (struct cmac*,int *,int *,int *) ;
 int FUNC_2 (struct cmac*,int ,int ,int ) ;
 int FUNC_3 (int *,scalar_t__) ;
 int FUNC_4 (int *,scalar_t__,int ) ;
 int FUNC_5 (int *,int) ;

__attribute__((used)) static int FUNC_6(adapter_t *VAR_4, int VAR_5)
{
 struct port_info *VAR_6 = FUNC_0(VAR_4, VAR_5);
 struct cmac *VAR_7 = &VAR_6->mac;
 uint32_t VAR_8, VAR_9, VAR_10;
 int VAR_11;


 FUNC_1(VAR_7, &VAR_8, &VAR_9, &VAR_10);
 FUNC_4(VAR_4, VAR_1 + VAR_7->offset, 0);


 (void) FUNC_3(VAR_4, VAR_0 + VAR_7->offset);
 FUNC_5(VAR_4, VAR_5);


 FUNC_4(VAR_4, VAR_1 + VAR_7->offset, VAR_3);
 FUNC_2(VAR_7, VAR_8, VAR_9, VAR_10);

 VAR_11 = FUNC_3(VAR_4, VAR_0 + VAR_7->offset);
 return (VAR_11 & VAR_2 ? 1 : 0);
}
