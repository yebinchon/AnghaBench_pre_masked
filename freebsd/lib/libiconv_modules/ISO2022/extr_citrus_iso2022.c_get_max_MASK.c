
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int maxcharset; } ;
typedef TYPE_1__ _ISO2022EncodingInfo ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*,char*) ;

__attribute__((used)) static __inline int
FUNC_1(_ISO2022EncodingInfo * __restrict VAR_2,
    const char * __restrict VAR_3)
{
 if (!FUNC_0(VAR_3, "MAX1"))
  VAR_2->maxcharset = 1;
 else if (!FUNC_0(VAR_3, "MAX2"))
  VAR_2->maxcharset = 2;
 else if (!FUNC_0(VAR_3, "MAX3"))
  VAR_2->maxcharset = 3;
 else
  return (VAR_1);

 return (VAR_0);
}
