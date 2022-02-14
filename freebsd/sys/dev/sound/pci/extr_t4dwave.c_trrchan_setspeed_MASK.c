
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct tr_rchinfo {int delta; struct tr_info* parent; } ;
struct tr_info {int dummy; } ;
typedef int kobj_t ;


 int VAR_0 ;
 int FUNC_0 (struct tr_info*,int ,int,int) ;

__attribute__((used)) static u_int32_t
FUNC_1(kobj_t VAR_1, void *VAR_2, u_int32_t VAR_3)
{
 struct tr_rchinfo *VAR_4 = VAR_2;
 struct tr_info *VAR_5 = VAR_4->parent;


 VAR_4->delta = (48000 << 12) / VAR_3;
 FUNC_0(VAR_5, VAR_0, VAR_4->delta, 2);


 return (48000 << 12) / VAR_4->delta;
}
