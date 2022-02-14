
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int istream_t ;
struct TYPE_3__ {int content_size; int content; } ;
typedef TYPE_1__ dictionary_t ;


 int FUNC_0 () ;
 int * FUNC_1 (int * const,int ) ;
 int FUNC_2 (int * const) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int const* const,int ) ;

__attribute__((used)) static void FUNC_5(dictionary_t *const VAR_0,
                                    istream_t *const VAR_1) {

    VAR_0->content_size = FUNC_2(VAR_1);
    VAR_0->content = FUNC_3(VAR_0->content_size);
    if (!VAR_0->content) {
        FUNC_0();
    }

    const u8 *const VAR_2 = FUNC_1(VAR_1, VAR_0->content_size);

    FUNC_4(VAR_0->content, VAR_2, VAR_0->content_size);
}
