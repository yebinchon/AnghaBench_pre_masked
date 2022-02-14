
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tr_info {int dummy; } ;
struct tr_chinfo {int index; struct tr_info* parent; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct tr_info*,int ,int,int) ;

__attribute__((used)) static void
FUNC_1(struct tr_chinfo *VAR_2)
{
 struct tr_info *VAR_3 = VAR_2->parent;
 int VAR_4, VAR_5;

 VAR_4 = (VAR_2->index & 0x20) ? 1 : 0;
 VAR_5 = VAR_2->index & 0x1f;
 FUNC_0(VAR_3, VAR_4? VAR_1 : VAR_0, 1 << VAR_5, 4);
}
