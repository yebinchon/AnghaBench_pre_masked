
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct arpt_devaddr_info {char const* addr; char const* mask; } ;


 int VAR_0 ;

__attribute__((used)) static inline int FUNC_0(const struct arpt_devaddr_info *VAR_1,
          const char *VAR_2, int VAR_3)
{
 int VAR_4, VAR_5;

 if (VAR_3 > VAR_0)
  VAR_3 = VAR_0;

 VAR_5 = 0;
 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++)
  VAR_5 |= (VAR_2[VAR_4] ^ VAR_1->addr[VAR_4]) & VAR_1->mask[VAR_4];

 return (VAR_5 != 0);
}
