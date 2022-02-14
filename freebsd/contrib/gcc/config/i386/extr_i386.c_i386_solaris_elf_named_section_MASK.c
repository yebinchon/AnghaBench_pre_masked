
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;


 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char const*,unsigned int,int ) ;
 int FUNC_1 (int ,char*,char const*,char*) ;
 scalar_t__ FUNC_2 (char const*,char*) ;

__attribute__((used)) static void
FUNC_3 (const char *VAR_3, unsigned int VAR_4,
    tree VAR_5)
{



  if (VAR_1
      && FUNC_2 (VAR_3, ".eh_frame") == 0)
    {
      FUNC_1 (VAR_2, "\t.section\t%s,\"%s\",@unwind\n", VAR_3,
        VAR_4 & VAR_0 ? "aw" : "a");
      return;
    }
  FUNC_0 (VAR_3, VAR_4, VAR_5);
}
