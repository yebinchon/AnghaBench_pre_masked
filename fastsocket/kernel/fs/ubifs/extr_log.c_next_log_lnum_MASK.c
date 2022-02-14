
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_info {int log_last; } ;


 int VAR_0 ;

__attribute__((used)) static inline int FUNC_0(const struct ubifs_info *VAR_1, int VAR_2)
{
 VAR_2 += 1;
 if (VAR_2 > VAR_1->log_last)
  VAR_2 = VAR_0;

 return VAR_2;
}
