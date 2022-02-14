
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zilog_t ;
typedef int zbookmark_phys_t ;
struct calculate_send_arg {int compressed; int uncompressed; } ;
typedef int spa_t ;
typedef int dnode_phys_t ;
typedef int blkptr_t ;


 scalar_t__ FUNC_0 (int const*) ;
 scalar_t__ FUNC_1 (int const*) ;
 int FUNC_2 (int const*) ;

__attribute__((used)) static int
FUNC_3(spa_t *VAR_0, zilog_t *VAR_1, const blkptr_t *VAR_2,
    const zbookmark_phys_t *VAR_3, const dnode_phys_t *VAR_4, void *VAR_5)
{
 struct calculate_send_arg *VAR_6 = VAR_5;
 if (VAR_2 != ((void*)0) && !FUNC_2(VAR_2)) {
  VAR_6->uncompressed += FUNC_1(VAR_2);
  VAR_6->compressed += FUNC_0(VAR_2);
 }
 return (0);
}
