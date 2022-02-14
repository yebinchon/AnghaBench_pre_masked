
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;

__attribute__((used)) static int FUNC_0(const int VAR_1, const int VAR_2)
{
    if(VAR_2 <= VAR_1) {
        int VAR_3 = 2 * VAR_2 - VAR_1 - 1;
        if(VAR_3 < 1) {
            VAR_3 = VAR_1 + 1;
            if(VAR_3 > (int)VAR_0) {
                return 0;
            } else {
                return VAR_3;
            }
        } else {
            return VAR_3;
        }
    } else {
        int VAR_4 = 2 * VAR_2 - VAR_1;
        if(VAR_4 > (int)VAR_0) {
            VAR_4 = VAR_1 - 1;
            if(VAR_4 < 1) {
                return 0;
            } else {
                return VAR_4;
            }
        } else {
            return VAR_4;
        }
    }
}
