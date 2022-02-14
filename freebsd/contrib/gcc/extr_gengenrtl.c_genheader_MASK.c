
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int format; } ;


 unsigned int VAR_0 ;
 TYPE_1__* VAR_1 ;
 char** VAR_2 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (char) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5 (void)
{
  unsigned int VAR_3;
  const char **VAR_4;

  FUNC_3 ("#ifndef GCC_GENRTL_H");
  FUNC_3 ("#define GCC_GENRTL_H\n");

  for (VAR_4 = VAR_2; *VAR_4; ++VAR_4)
    FUNC_0 (*VAR_4);

  FUNC_2 ('\n');

  for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
    if (! FUNC_4 (VAR_1[VAR_3].format))
      FUNC_1 (VAR_3);

  FUNC_3 ("\n#endif /* GCC_GENRTL_H */");
}
