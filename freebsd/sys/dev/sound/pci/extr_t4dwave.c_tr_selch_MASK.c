
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tr_info {int dummy; } ;
struct tr_chinfo {int index; struct tr_info* parent; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct tr_info*,int ,int) ;
 int FUNC_1 (struct tr_info*,int ,int,int) ;

__attribute__((used)) static void
FUNC_2(struct tr_chinfo *VAR_2)
{
 struct tr_info *VAR_3 = VAR_2->parent;
 int VAR_4;

 VAR_4 = FUNC_0(VAR_3, VAR_1, 4);
 VAR_4 &= ~VAR_0;
 VAR_4 |= VAR_2->index & 0x3f;
 FUNC_1(VAR_3, VAR_1, VAR_4, 4);
}
