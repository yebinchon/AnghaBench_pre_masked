
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ colors; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (char const*) ;

int
FUNC_2(const char *VAR_2)
{
    int VAR_3 = 0;
    if (*VAR_2) {
 VAR_3 = FUNC_0(VAR_2);
 if (VAR_3 && VAR_1.colors) {
     int VAR_4 = 0;
     while (*VAR_2) {
  if (VAR_1.colors && FUNC_1(VAR_2)) {
      VAR_4 += VAR_0;
      VAR_2 += VAR_0;
  } else {
      ++VAR_2;
  }
     }
     VAR_3 -= VAR_4;
 }
    }
    return VAR_3;
}
