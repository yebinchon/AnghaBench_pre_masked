
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int bitlen; int (* def_dump_fn ) (char*,int,void*,int) ;} ;
typedef TYPE_1__ ib_field_t ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (char*,int,void*,int) ;

__attribute__((used)) static char *FUNC_2(const ib_field_t * VAR_0, char *VAR_1, int VAR_2,
      void *VAR_3)
{
 VAR_0->def_dump_fn(VAR_1, VAR_2, VAR_3, FUNC_0(VAR_0->bitlen, 8) / 8);
 VAR_1[VAR_2 - 1] = 0;

 return VAR_1;
}
