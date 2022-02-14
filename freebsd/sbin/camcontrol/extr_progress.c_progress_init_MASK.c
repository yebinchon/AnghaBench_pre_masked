
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
struct winsize {scalar_t__ ws_col; } ;
struct TYPE_4__ {scalar_t__ ttywidth; int start; int prefix; int size; } ;
typedef TYPE_1__ progress_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,struct winsize*) ;
 int FUNC_1 (TYPE_1__*,int,int) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (int *) ;

int
FUNC_4(progress_t *VAR_4, const char *VAR_5, uint64_t VAR_6)
{
        struct winsize VAR_7;
        int VAR_8 = VAR_3;

 (void) FUNC_1(VAR_4, 0x0, sizeof(*VAR_4));
 VAR_4->size = VAR_6;
 VAR_4->prefix = FUNC_2(VAR_5);
 VAR_4->start = FUNC_3(((void*)0));
        if (FUNC_0(VAR_1, VAR_2, &VAR_7) != -1 &&
            VAR_7.ws_col != 0) {
                VAR_4->ttywidth = VAR_7.ws_col;
        } else {
                VAR_4->ttywidth = VAR_0;
 }
        VAR_3 = VAR_8;
 return 1;
}
