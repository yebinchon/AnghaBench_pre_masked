
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;

__attribute__((used)) static unsigned
FUNC_2(char *VAR_1, unsigned VAR_2, unsigned VAR_3)
{
    FUNC_0(VAR_0, ("chop_out %d..%d from %s", VAR_2, VAR_3, FUNC_1(VAR_1)));
    while (VAR_1[VAR_3] != '\0') {
 VAR_1[VAR_2++] = VAR_1[VAR_3++];
    }
    VAR_1[VAR_2] = '\0';
    return VAR_2;
}
