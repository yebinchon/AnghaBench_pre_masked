
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct arpt_arp {int flags; int invflags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int) ;

__attribute__((used)) static inline int FUNC_1(const struct arpt_arp *VAR_2)
{
 if (VAR_2->flags & ~VAR_0) {
  FUNC_0("Unknown flag bits set: %08X\n",
    VAR_2->flags & ~VAR_0);
  return 0;
 }
 if (VAR_2->invflags & ~VAR_1) {
  FUNC_0("Unknown invflag bits set: %08X\n",
    VAR_2->invflags & ~VAR_1);
  return 0;
 }

 return 1;
}
