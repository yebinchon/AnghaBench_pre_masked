
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct sc_pchinfo {int spd; int buffer; struct sc_info* parent; } ;
struct sc_info {int bufsz; } ;
typedef int kobj_t ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int,int) ;

__attribute__((used)) static u_int32_t
FUNC_3(kobj_t VAR_1, void *VAR_2, u_int32_t VAR_3)
{
 struct sc_pchinfo *VAR_4 = VAR_2;
 struct sc_info *VAR_5 = VAR_4->parent;
 int VAR_6;


 VAR_6 = VAR_4->spd * FUNC_1(VAR_4->buffer);
 VAR_3 = FUNC_0((VAR_6 << 8) / VAR_0, 4);
 FUNC_2(VAR_4->buffer, VAR_5->bufsz / VAR_3, VAR_3);

 return VAR_3;
}
