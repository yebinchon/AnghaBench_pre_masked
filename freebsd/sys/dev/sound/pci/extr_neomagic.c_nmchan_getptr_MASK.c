
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int32_t ;
struct sc_info {scalar_t__ rbuf; scalar_t__ pbuf; } ;
struct sc_chinfo {scalar_t__ dir; struct sc_info* parent; } ;
typedef int kobj_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (struct sc_info*,int ,int) ;

__attribute__((used)) static u_int32_t
FUNC_1(kobj_t VAR_3, void *VAR_4)
{
 struct sc_chinfo *VAR_5 = VAR_4;
 struct sc_info *VAR_6 = VAR_5->parent;

 if (VAR_5->dir == VAR_2)
  return FUNC_0(VAR_6, VAR_0, 4) - VAR_6->pbuf;
 else
  return FUNC_0(VAR_6, VAR_1, 4) - VAR_6->rbuf;
}
