
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ _position; scalar_t__ _limit; } ;
typedef TYPE_1__ sldns_buffer ;


 scalar_t__ FUNC_0 (TYPE_1__*,scalar_t__,int) ;
 scalar_t__ FUNC_1 (TYPE_1__*,scalar_t__) ;

void
FUNC_2(sldns_buffer *VAR_0, const char *VAR_1)
{
        int VAR_2;
        char VAR_3;
        const char *VAR_4;

        while(FUNC_0(VAR_0, VAR_0->_position, sizeof(char))) {
                VAR_3 = (char) FUNC_1(VAR_0, VAR_0->_position);
                VAR_2 = 0;
                for (VAR_4 = VAR_1; *VAR_4; VAR_4++) {
                        if (*VAR_4 == VAR_3) {
                                VAR_2 = 1;
                        }
                }
                if (VAR_2 && VAR_0->_limit > VAR_0->_position) {
                        VAR_0->_position += sizeof(char);
                } else {
                        return;
                }
        }
}
