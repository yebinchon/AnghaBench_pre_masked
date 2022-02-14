
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bxe_softc {int dummy; } ;


 int FUNC_0 (struct bxe_softc*,char*,int,int,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct bxe_softc*) ;
 int FUNC_2 (struct bxe_softc*) ;
 int** VAR_3 ;

__attribute__((used)) static int
FUNC_3(struct bxe_softc *VAR_4)
{
    int VAR_5 = FUNC_1(VAR_4);
    int VAR_6 = FUNC_2(VAR_4);

    FUNC_0(VAR_4, "NO MCP - load counts[%d]      %d, %d, %d\n",
          VAR_5, VAR_3[VAR_5][0], VAR_3[VAR_5][1],
          VAR_3[VAR_5][2]);
    VAR_3[VAR_5][0]++;
    VAR_3[VAR_5][1 + VAR_6]++;
    FUNC_0(VAR_4, "NO MCP - new load counts[%d]  %d, %d, %d\n",
          VAR_5, VAR_3[VAR_5][0], VAR_3[VAR_5][1],
          VAR_3[VAR_5][2]);
    if (VAR_3[VAR_5][0] == 1) {
        return (VAR_0);
    } else if (VAR_3[VAR_5][1 + VAR_6] == 1) {
        return (VAR_2);
    } else {
        return (VAR_1);
    }
}
