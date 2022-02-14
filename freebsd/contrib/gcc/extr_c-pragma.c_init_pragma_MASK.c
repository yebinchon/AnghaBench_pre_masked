
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int omp_pragmas ;


 unsigned int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (char*,char*,int ) ;
 int FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (int ,char*,char*,unsigned int,int,int) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

void
FUNC_4 (void)
{
  if (VAR_1 && !VAR_2)
    {
      struct omp_pragma_def { const char *name; unsigned int id; };
      static const struct omp_pragma_def VAR_10[] = {
 { "atomic", 139 },
 { "barrier", 138 },
 { "critical", 137 },
 { "flush", 136 },
 { "for", 135 },
 { "master", 134 },
 { "ordered", 133 },
 { "parallel", 132 },
 { "section", 131 },
 { "sections", 130 },
 { "single", 129 },
 { "threadprivate", 128 }
      };

      const int VAR_11 = sizeof (VAR_10) / sizeof (*VAR_10);
      int VAR_12;

      for (VAR_12 = 0; VAR_12 < VAR_11; ++VAR_12)
 FUNC_3 (VAR_9, "omp", VAR_10[VAR_12].name,
          VAR_10[VAR_12].id, 1, 1);
    }

  FUNC_3 (VAR_9, "GCC", "pch_preprocess",
    VAR_0, 0, 0);
  FUNC_1 ("GCC", "diagnostic", VAR_3);

  FUNC_2 (0, "redefine_extname", VAR_6);
  FUNC_1 (0, "extern_prefix", VAR_4);




}
