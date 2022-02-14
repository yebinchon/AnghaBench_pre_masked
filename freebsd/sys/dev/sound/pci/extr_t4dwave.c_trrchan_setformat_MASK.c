
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct tr_rchinfo {int buffer; struct tr_info* parent; } ;
struct tr_info {int dummy; } ;
typedef int kobj_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct tr_info*,int ,int,int) ;

__attribute__((used)) static int
FUNC_3(kobj_t VAR_2, void *VAR_3, u_int32_t VAR_4)
{
 struct tr_rchinfo *VAR_5 = VAR_3;
 struct tr_info *VAR_6 = VAR_5->parent;
 u_int32_t VAR_7, VAR_8;

 VAR_8 = FUNC_1(VAR_4);

 VAR_7 = (FUNC_0(VAR_5->buffer) >> ((VAR_8 & 0x08)? 1 : 0)) - 1;
 FUNC_2(VAR_6, VAR_0, VAR_7 | (VAR_7 << 16), 4);

 VAR_7 = 0x18 | (VAR_8 << 4);
 FUNC_2(VAR_6, VAR_1, VAR_7, 1);

 return 0;
}
