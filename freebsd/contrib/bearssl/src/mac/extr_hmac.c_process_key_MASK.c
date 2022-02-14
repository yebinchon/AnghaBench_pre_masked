
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int (* state ) (TYPE_1__ const**,void*) ;int (* update ) (TYPE_1__ const**,unsigned char*,size_t) ;int (* init ) (TYPE_1__ const**) ;} ;
typedef TYPE_1__ br_hash_class ;


 size_t FUNC_0 (TYPE_1__ const*) ;
 int FUNC_1 (unsigned char*,void const*,size_t) ;
 int FUNC_2 (unsigned char*,unsigned int,size_t) ;
 int FUNC_3 (TYPE_1__ const**) ;
 int FUNC_4 (TYPE_1__ const**,unsigned char*,size_t) ;
 int FUNC_5 (TYPE_1__ const**,void*) ;

__attribute__((used)) static void
FUNC_6(const br_hash_class **VAR_0, void *VAR_1,
 const void *VAR_2, size_t VAR_3, unsigned VAR_4)
{
 unsigned char VAR_5[256];
 size_t VAR_6, VAR_7;

 VAR_6 = FUNC_0(*VAR_0);
 FUNC_1(VAR_5, VAR_2, VAR_3);
 for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7 ++) {
  VAR_5[VAR_7] ^= (unsigned char)VAR_4;
 }
 FUNC_2(VAR_5 + VAR_3, VAR_4, VAR_6 - VAR_3);
 (*VAR_0)->init(VAR_0);
 (*VAR_0)->update(VAR_0, VAR_5, VAR_6);
 (*VAR_0)->state(VAR_0, VAR_1);
}
