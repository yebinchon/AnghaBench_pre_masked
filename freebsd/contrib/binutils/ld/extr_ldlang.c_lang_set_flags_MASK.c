
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int flags; int not_flags; } ;
typedef TYPE_1__ lang_memory_region_type ;
typedef int flagword ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;

void
FUNC_2 (lang_memory_region_type *VAR_5, const char *VAR_6, int VAR_7)
{
  flagword *VAR_8;

  VAR_8 = VAR_7 ? &VAR_5->not_flags : &VAR_5->flags;
  while (*VAR_6)
    {
      switch (*VAR_6)
 {
 case 'A': case 'a':
   *VAR_8 |= VAR_0;
   break;

 case 'R': case 'r':
   *VAR_8 |= VAR_4;
   break;

 case 'W': case 'w':
   *VAR_8 |= VAR_2;
   break;

 case 'X': case 'x':
   *VAR_8 |= VAR_1;
   break;

 case 'L': case 'l':
 case 'I': case 'i':
   *VAR_8 |= VAR_3;
   break;

 default:
   FUNC_1 (FUNC_0("%P%F: invalid syntax in flags\n"));
   break;
 }
      VAR_6++;
    }
}
