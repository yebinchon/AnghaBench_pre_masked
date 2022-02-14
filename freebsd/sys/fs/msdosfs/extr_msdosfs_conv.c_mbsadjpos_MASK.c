
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* conv ) (void*,char const**,size_t*,char**,size_t*) ;} ;


 int VAR_0 ;
 int FUNC_0 (size_t,size_t) ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (void*,char const**,size_t*,char**,size_t*) ;

__attribute__((used)) static int
FUNC_2(const char **VAR_2, size_t VAR_3, size_t VAR_4, int VAR_5, int VAR_6, void *VAR_7)
{
 char *VAR_8, VAR_9[VAR_4 * VAR_5 + 1];

 if (VAR_6 & VAR_0 && VAR_1) {
  VAR_8 = VAR_9;
  VAR_4 *= VAR_5;
  VAR_1->conv(VAR_7, VAR_2, &VAR_3, &VAR_8, &VAR_4);
  return (VAR_3);
 }

 (*VAR_2) += FUNC_0(VAR_3, VAR_4);
 return (VAR_3 - FUNC_0(VAR_3, VAR_4));
}
