
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int xo_handle_t ;
struct TYPE_10__ {unsigned int* xb_curp; unsigned int* xb_bufp; } ;
typedef TYPE_1__ xo_buffer_t ;
struct TYPE_11__ {int c_indent; } ;
typedef TYPE_2__ cbor_private_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,unsigned int,int ) ;
 int FUNC_1 (int ,char*,int ,unsigned int*,char*,int) ;
 int VAR_2 ;
 int FUNC_2 (TYPE_1__*,char const*,unsigned int) ;
 int FUNC_3 (TYPE_1__*,unsigned int) ;
 int FUNC_4 (TYPE_1__*,unsigned int) ;
 unsigned int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void
FUNC_7 (xo_handle_t *VAR_3, cbor_private_t *VAR_4, xo_buffer_t *VAR_5,
      unsigned VAR_6, unsigned VAR_7, const char *VAR_8)
{
    if (!FUNC_4(VAR_5, VAR_7 + 2))
 return;

    unsigned VAR_9 = FUNC_5(VAR_5);

    *VAR_5->xb_curp = VAR_6;
    FUNC_0(VAR_5, VAR_7, VAR_0);
    if (VAR_8)
 FUNC_2(VAR_5, VAR_8, VAR_7);

    if (FUNC_6(VAR_3) & VAR_1)
 FUNC_1(VAR_2, "append", FUNC_3(VAR_5, VAR_9),
       VAR_5->xb_curp - VAR_5->xb_bufp - VAR_9, "",
       VAR_4->c_indent * 2);
}
