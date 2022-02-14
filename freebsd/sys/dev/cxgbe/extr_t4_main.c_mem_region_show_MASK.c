
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sbuf {int dummy; } ;


 int FUNC_0 (struct sbuf*,char*,char const*,unsigned int,unsigned int,unsigned int) ;

__attribute__((used)) static void
FUNC_1(struct sbuf *VAR_0, const char *VAR_1, unsigned int VAR_2,
    unsigned int VAR_3)
{
 unsigned int VAR_4;

 if (VAR_2 == VAR_3)
  return;

 VAR_4 = VAR_3 - VAR_2 + 1;
 if (VAR_4 == 0)
  return;


 FUNC_0(VAR_0, "%-15s %#x-%#x [%u]\n", VAR_1, VAR_2, VAR_3, VAR_4);
}
