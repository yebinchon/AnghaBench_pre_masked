
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (unsigned int*,int) ;
 unsigned int* VAR_0 ;
 int* VAR_1 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ,char*,...) ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 char** VAR_5 ;

__attribute__((used)) static void
FUNC_3(int VAR_6)
{
    int VAR_7;
    unsigned VAR_8;
    unsigned *VAR_9;

    VAR_8 = (unsigned)FUNC_1(VAR_4);

    if (VAR_6 == VAR_1[VAR_3])
    {
 VAR_9 = VAR_0 + VAR_3 * VAR_8;

 FUNC_2(VAR_2, " { ");
 for (VAR_7 = VAR_4 - 1; VAR_7 >= 0; VAR_7--)
 {
     if (FUNC_0(VAR_9, VAR_7))
  FUNC_2(VAR_2, "%s ", VAR_5[VAR_7]);
 }
 FUNC_2(VAR_2, "}");
 ++VAR_3;
    }
}
