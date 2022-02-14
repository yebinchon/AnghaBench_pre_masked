
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int xo_handle_t ;
struct TYPE_10__ {int * xb_bufp; int * xb_curp; } ;
typedef TYPE_1__ xo_buffer_t ;
struct TYPE_11__ {int c_indent; TYPE_1__ c_data; } ;
typedef TYPE_2__ cbor_private_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned long long VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *,TYPE_2__*,TYPE_1__*,int ,int ,char const*) ;
 int FUNC_1 (TYPE_1__*,unsigned long long,int ) ;
 int FUNC_2 (int ,char*,int ,int *,char*,int) ;
 int VAR_9 ;
 int FUNC_3 (char const*) ;
 unsigned long long FUNC_4 (char const*,char**,int ) ;
 int FUNC_5 (TYPE_1__*,unsigned int) ;
 unsigned int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (char const*,char*) ;

__attribute__((used)) static int
FUNC_9 (xo_handle_t *VAR_10, cbor_private_t *VAR_11, xo_buffer_t *VAR_12,
       const char *VAR_13)
{
    int VAR_14 = 0;

    unsigned VAR_15 = FUNC_6(VAR_12);

    if (VAR_13 == ((void*)0) || *VAR_13 == '\0' || FUNC_8(VAR_13, "true"))
 FUNC_0(VAR_10, VAR_11, &VAR_11->c_data, VAR_4, 0, ((void*)0));
    else if (FUNC_8(VAR_13, "false"))
 FUNC_0(VAR_10, VAR_11, &VAR_11->c_data, VAR_0, 0, ((void*)0));
    else {
 int VAR_16 = 0;
 if (*VAR_13 == '-') {
     VAR_13 += 1;
     VAR_16 = 1;
 }

 char *VAR_17;
 unsigned long long VAR_18;
 VAR_18 = FUNC_4(VAR_13, &VAR_17, 0);
 if (VAR_18 == VAR_7)
     FUNC_0(VAR_10, VAR_11, VAR_12, VAR_3, FUNC_3(VAR_13), VAR_13);
 else {
     *VAR_12->xb_curp = VAR_16 ? VAR_1 : VAR_6;
     if (VAR_16)
  VAR_18 -= 1;
     FUNC_1(VAR_12, VAR_18, VAR_16 ? VAR_2 : VAR_5);
 }
    }

    if (FUNC_7(VAR_10) & VAR_8)
 FUNC_2(VAR_9, "content", FUNC_5(VAR_12, VAR_15),
       VAR_12->xb_curp - VAR_12->xb_bufp - VAR_15, "",
       VAR_11->c_indent * 2);

    return VAR_14;
}
