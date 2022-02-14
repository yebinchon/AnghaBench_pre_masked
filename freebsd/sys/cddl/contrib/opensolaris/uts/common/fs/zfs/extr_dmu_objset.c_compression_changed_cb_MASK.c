
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_2__ {int os_spa; int os_compress; } ;
typedef TYPE_1__ objset_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static void
FUNC_2(void *VAR_2, uint64_t VAR_3)
{
 objset_t *VAR_4 = VAR_2;




 FUNC_0(VAR_3 != VAR_0);

 VAR_4->os_compress = FUNC_1(VAR_4->os_spa, VAR_3,
     VAR_1);
}
