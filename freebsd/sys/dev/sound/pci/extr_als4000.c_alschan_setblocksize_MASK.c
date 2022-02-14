
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct sc_info {int bufsz; } ;
struct sc_chinfo {int buffer; struct sc_info* parent; } ;
typedef int kobj_t ;


 int FUNC_0 (int ,int,int) ;

__attribute__((used)) static u_int32_t
FUNC_1(kobj_t VAR_0, void *VAR_1, u_int32_t VAR_2)
{
 struct sc_chinfo *VAR_3 = VAR_1;
 struct sc_info *VAR_4 = VAR_3->parent;

 if (VAR_2 > VAR_4->bufsz / 2) {
  VAR_2 = VAR_4->bufsz / 2;
 }
 FUNC_0(VAR_3->buffer, 2, VAR_2);
 return VAR_2;
}
