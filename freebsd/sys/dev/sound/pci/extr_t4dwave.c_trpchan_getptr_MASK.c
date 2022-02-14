
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct tr_chinfo {int cso; int buffer; } ;
typedef int kobj_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct tr_chinfo*) ;

__attribute__((used)) static u_int32_t
FUNC_2(kobj_t VAR_0, void *VAR_1)
{
 struct tr_chinfo *VAR_2 = VAR_1;

 FUNC_1(VAR_2);
 return VAR_2->cso * FUNC_0(VAR_2->buffer);
}
