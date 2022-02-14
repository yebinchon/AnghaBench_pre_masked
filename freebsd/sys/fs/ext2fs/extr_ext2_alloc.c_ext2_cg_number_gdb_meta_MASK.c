
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct m_ext2fs {int dummy; } ;


 int FUNC_0 (struct m_ext2fs*) ;

__attribute__((used)) static uint64_t
FUNC_1(struct m_ext2fs *VAR_0, int VAR_1)
{
 unsigned long VAR_2;
 int VAR_3, VAR_4;

 VAR_2 = VAR_1 / FUNC_0(VAR_0);
 VAR_3 = VAR_2 * FUNC_0(VAR_0);
 VAR_4 = VAR_3 + FUNC_0(VAR_0) - 1;

 if (VAR_1 == VAR_3 || VAR_1 == VAR_3 + 1 || VAR_1 == VAR_4)
  return (1);

 return (0);
}
