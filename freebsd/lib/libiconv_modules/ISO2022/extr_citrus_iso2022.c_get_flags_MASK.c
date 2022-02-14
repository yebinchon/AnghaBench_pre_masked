
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int flags; } ;
typedef TYPE_1__ _ISO2022EncodingInfo ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*,char const*) ;

__attribute__((used)) static __inline int
FUNC_1(_ISO2022EncodingInfo * __restrict VAR_2,
    const char * __restrict VAR_3)
{
 static struct {
  const char *tag;
  int flag;
 } const VAR_4[] = {
  { "DUMMY", 0 },
  { "8BIT", 142 },
  { "NOOLD", 134 },
  { "SI", 133 },
  { "SO", 132 },
  { "LS0", 141 },
  { "LS1", 140 },
  { "LS2", 138 },
  { "LS3", 136 },
  { "LS1R", 139 },
  { "LS2R", 137 },
  { "LS3R", 135 },
  { "SS2", 131 },
  { "SS3", 129 },
  { "SS2R", 130 },
  { "SS3R", 128 },
  { ((void*)0), 0 }
 };
 int VAR_5;

 for (VAR_5 = 0; VAR_4[VAR_5].tag; VAR_5++)
  if (!FUNC_0(VAR_3, VAR_4[VAR_5].tag)) {
   VAR_2->flags |= VAR_4[VAR_5].flag;
   return (VAR_0);
  }

 return (VAR_1);
}
