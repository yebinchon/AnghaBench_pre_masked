
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct sc_info {int bufsz; } ;
struct sc_chinfo {int buffer; struct sc_info* parent; } ;
typedef int kobj_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (int ,int,int) ;

__attribute__((used)) static u_int32_t
FUNC_4(kobj_t VAR_2, void *VAR_3, u_int32_t VAR_4)
{
 struct sc_chinfo *VAR_5 = VAR_3;
 struct sc_info *VAR_6 = VAR_5->parent;


 FUNC_1(VAR_4, VAR_1, VAR_6->bufsz / VAR_0);
 FUNC_3(VAR_5->buffer, VAR_0, VAR_4);
 FUNC_0(FUNC_2("svchan_setblocksize: %d\n", VAR_4));
 return VAR_4;
}
