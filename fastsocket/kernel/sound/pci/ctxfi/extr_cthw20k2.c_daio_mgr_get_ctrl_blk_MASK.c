
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hw {int dummy; } ;
struct daio_mgr_ctrl_blk {void** rxctl; void** txctl; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (struct hw*,scalar_t__) ;
 struct daio_mgr_ctrl_blk* FUNC_1 (int,int ) ;

__attribute__((used)) static int FUNC_2(struct hw *VAR_4, void **VAR_5)
{
 struct daio_mgr_ctrl_blk *VAR_6;
 int VAR_7;

 *VAR_5 = ((void*)0);
 VAR_6 = FUNC_1(sizeof(*VAR_6), VAR_3);
 if (!VAR_6)
  return -VAR_2;

 for (VAR_7 = 0; VAR_7 < 8; VAR_7++) {
  VAR_6->txctl[VAR_7] = FUNC_0(VAR_4, VAR_1+(0x40*VAR_7));
  VAR_6->rxctl[VAR_7] = FUNC_0(VAR_4, VAR_0+(0x40*VAR_7));
 }

 *VAR_5 = VAR_6;

 return 0;
}
