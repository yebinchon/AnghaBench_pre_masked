
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct via_chinfo {int blksz; int buffer; } ;
typedef int kobj_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static u_int32_t
FUNC_1(kobj_t VAR_1, void *VAR_2, u_int32_t VAR_3)
{
 struct via_chinfo *VAR_4 = VAR_2;

 VAR_4->blksz = VAR_3;
 FUNC_0(VAR_4->buffer, VAR_0, VAR_4->blksz);

 return VAR_4->blksz;
}
