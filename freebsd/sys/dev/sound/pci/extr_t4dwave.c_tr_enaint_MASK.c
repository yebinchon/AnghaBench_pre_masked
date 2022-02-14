
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct tr_info {int lock; } ;
struct tr_chinfo {int index; struct tr_info* parent; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct tr_chinfo*) ;
 int FUNC_3 (struct tr_info*,int,int) ;
 int FUNC_4 (struct tr_info*,int,int,int) ;

__attribute__((used)) static void
FUNC_5(struct tr_chinfo *VAR_2, int VAR_3)
{
 struct tr_info *VAR_4 = VAR_2->parent;
        u_int32_t VAR_5, VAR_6;
 int VAR_7, VAR_8;

 FUNC_0(VAR_4->lock);
 VAR_7 = (VAR_2->index & 0x20) ? 1 : 0;
 VAR_8 = VAR_2->index & 0x1f;
 VAR_6 = VAR_7? VAR_1 : VAR_0;

 VAR_5 = FUNC_3(VAR_4, VAR_6, 4);
 VAR_5 &= ~(1 << VAR_8);
 VAR_5 |= (VAR_3? 1 : 0) << VAR_8;

 FUNC_2(VAR_2);
 FUNC_4(VAR_4, VAR_6, VAR_5, 4);
 FUNC_1(VAR_4->lock);
}
