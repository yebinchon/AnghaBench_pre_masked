
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct nettle_hash {int context_size; int digest_size; int (* digest ) (void*,int ,int *) ;int (* update ) (void*,size_t const,int const*) ;int (* init ) (void*) ;} ;


 scalar_t__ FUNC_0 () ;
 int FUNC_1 (void*,int ) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (void*,size_t const,int const*) ;
 int FUNC_5 (void*,int ,int *) ;

__attribute__((used)) static int FUNC_6(const struct nettle_hash *VAR_0, size_t VAR_1,
    const u8 *VAR_2[], const size_t *VAR_3, u8 *VAR_4)
{
 void *VAR_5;
 size_t VAR_6;

 if (FUNC_0())
  return -1;

 VAR_5 = FUNC_2(VAR_0->context_size);
 if (!VAR_5)
  return -1;
 VAR_0->init(VAR_5);
 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++)
  VAR_0->update(VAR_5, VAR_3[VAR_6], VAR_2[VAR_6]);
 VAR_0->digest(VAR_5, VAR_0->digest_size, VAR_4);
 FUNC_1(VAR_5, VAR_0->context_size);
 return 0;
}
