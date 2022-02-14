
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ sysv_zone_t ;
struct inode {int i_sb; } ;


 int FUNC_0 (struct inode*) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static inline void FUNC_2(struct inode *VAR_0, sysv_zone_t *VAR_1, sysv_zone_t *VAR_2)
{
 for ( ; VAR_1 < VAR_2 ; VAR_1++) {
  sysv_zone_t VAR_3 = *VAR_1;
  if (VAR_3) {
   *VAR_1 = 0;
   FUNC_1(VAR_0->i_sb, VAR_3);
   FUNC_0(VAR_0);
  }
 }
}
