
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(void)
{
    int VAR_7, VAR_8;

    if (VAR_1)
 return;
    if (VAR_6)
 return;
    VAR_7 = (int) (VAR_5 - 1) / VAR_0;
    if (VAR_7 > 0) {
 for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++)
     FUNC_1(VAR_3[VAR_8]);
 (void) FUNC_0(VAR_3, &VAR_3[VAR_7]);
 VAR_5 -= VAR_0 * VAR_7;
 VAR_4 -= VAR_0 * VAR_7;
 VAR_2 -= VAR_7;
    }
}
