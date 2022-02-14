
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdspm {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hdspm*,int ) ;

__attribute__((used)) static inline int FUNC_1 (struct hdspm *VAR_2, int VAR_3)
{
 int VAR_4;

 if (VAR_3)
  VAR_4 = FUNC_0(VAR_2, VAR_1);
 else
  VAR_4 = FUNC_0(VAR_2, VAR_0);
 VAR_4 &= 0xff;

 if (VAR_4 < 128)
  return 128 - VAR_4;
 else
  return 0;
}
