
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int *) ;

__attribute__((used)) static void
FUNC_5 (FILE *VAR_2)
{
  FUNC_0 (VAR_2, "\n\nexpression hash table\n");
  FUNC_0 (VAR_2, "size %ld, %ld elements, %f collision/search ratio\n",
           (long) FUNC_3 (VAR_1),
           (long) FUNC_2 (VAR_1),
           FUNC_1 (VAR_1));
  if (FUNC_2 (VAR_1) > 0)
    {
      FUNC_0 (VAR_2, "\n\ntable entries:\n");
      FUNC_4 (VAR_1, VAR_0, VAR_2);
    }
  FUNC_0 (VAR_2, "\n");
}
