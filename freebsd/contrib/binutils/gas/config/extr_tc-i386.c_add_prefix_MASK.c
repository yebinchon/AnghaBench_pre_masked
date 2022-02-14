
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int* prefix; int prefixes; } ;


 unsigned int VAR_0 ;

 scalar_t__ VAR_1 ;

 unsigned int VAR_2 ;






 unsigned int VAR_3 ;



 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 size_t VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;

 unsigned int VAR_11 ;
 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_12 ;
 TYPE_1__ VAR_13 ;

__attribute__((used)) static int
FUNC_3 (unsigned int VAR_14)
{
  int VAR_15 = 1;
  unsigned int VAR_16;

  if (VAR_14 >= VAR_5 && VAR_14 < VAR_5 + 16
      && VAR_12 == VAR_1)
    {
      if ((VAR_13.prefix[VAR_6] & VAR_14 & VAR_8)
   || ((VAR_13.prefix[VAR_6] & (VAR_7 | VAR_9 | VAR_4))
       && (VAR_14 & (VAR_7 | VAR_9 | VAR_4))))
 VAR_15 = 0;
      VAR_16 = VAR_6;
    }
  else
    {
      switch (VAR_14)
 {
 default:
   FUNC_1 ();

 case 138:
 case 136:
 case 135:
 case 134:
 case 132:
 case 128:
   VAR_16 = VAR_10;
   break;

 case 129:
 case 130:
   VAR_15 = 2;

 case 131:
   VAR_16 = VAR_3;
   break;

 case 133:
   VAR_16 = VAR_11;
   break;

 case 139:
   VAR_16 = VAR_0;
   break;

 case 137:
   VAR_16 = VAR_2;
   break;
 }
      if (VAR_13.prefix[VAR_16] != 0)
 VAR_15 = 0;
    }

  if (VAR_15)
    {
      if (!VAR_13.prefix[VAR_16])
 ++VAR_13.prefixes;
      VAR_13.prefix[VAR_16] |= VAR_14;
    }
  else
    FUNC_2 (FUNC_0("same type of prefix used twice"));

  return VAR_15;
}
