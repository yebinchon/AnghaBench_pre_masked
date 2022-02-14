
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct sc_info {int bufsz; } ;
struct sc_chinfo {int buffer; struct sc_info* parent; } ;
typedef int kobj_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int,int) ;

__attribute__((used)) static u_int32_t
FUNC_1(kobj_t VAR_1, void *VAR_2, u_int32_t VAR_3)
{
 struct sc_chinfo *VAR_4 = VAR_2;
 struct sc_info *VAR_5 = VAR_4->parent;


 if (VAR_3 > VAR_5->bufsz / VAR_0) {
  VAR_3 = VAR_5->bufsz / VAR_0;
 }
 FUNC_0(VAR_4->buffer, VAR_0, VAR_3);

 return VAR_3;
}
