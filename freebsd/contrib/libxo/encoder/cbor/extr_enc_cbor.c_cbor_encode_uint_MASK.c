
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* xb_curp; } ;
typedef TYPE_1__ xo_buffer_t ;
typedef unsigned long long uint64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long long VAR_4 ;

__attribute__((used)) static void
FUNC_0 (xo_buffer_t *VAR_5, uint64_t VAR_6, unsigned VAR_7)
{
    char *VAR_8 = VAR_5->xb_curp;
    int VAR_9, VAR_10;

    if (VAR_6 > (1ULL << 32)) {
 *VAR_8++ |= VAR_2;
 VAR_10 = 64;

    } else if (VAR_6 > (1<<16)) {
 *VAR_8++ |= VAR_1;
 VAR_10 = 32;

    } else if (VAR_6 > (1<<8)) {
 *VAR_8++ |= VAR_0;
 VAR_10 = 16;

    } else if (VAR_6 > VAR_7) {
 *VAR_8++ |= VAR_3;
 VAR_10 = 8;
    } else {
 *VAR_8++ |= VAR_6 & VAR_4;
 VAR_10 = 0;
    }

    if (VAR_10) {
 for (VAR_9 = VAR_10 - 8; VAR_9 >= 0; VAR_9 -= 8)
     *VAR_8++ = VAR_6 >> VAR_9;
    }

    VAR_5->xb_curp = VAR_8;
}
