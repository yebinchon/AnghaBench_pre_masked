
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_copyinfo {scalar_t__ len; int hva; } ;
struct vm {int dummy; } ;


 int FUNC_0 (char const*,int ,scalar_t__) ;

void
FUNC_1(struct vm *VAR_0, int VAR_1, const void *VAR_2,
    struct vm_copyinfo *VAR_3, size_t VAR_4)
{
 const char *VAR_5;
 int VAR_6;

 VAR_5 = VAR_2;
 VAR_6 = 0;
 while (VAR_4 > 0) {
  FUNC_0(VAR_5, VAR_3[VAR_6].hva, VAR_3[VAR_6].len);
  VAR_4 -= VAR_3[VAR_6].len;
  VAR_5 += VAR_3[VAR_6].len;
  VAR_6++;
 }
}
