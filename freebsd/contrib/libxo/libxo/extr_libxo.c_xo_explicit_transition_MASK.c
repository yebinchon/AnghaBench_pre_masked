
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xo_xsf_flags_t ;
typedef int xo_xof_flags_t ;
typedef int xo_state_t ;
typedef int xo_handle_t ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




 int * FUNC_1 (int *) ;
 int FUNC_2 (int *,char const*,int,int,int const,int) ;
 int FUNC_3 (int *,char const*) ;
 int FUNC_4 (int *,char const*) ;
 int FUNC_5 (int *,int ,char const*) ;
 int FUNC_6 (int *,int ,char const*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *) ;

void
FUNC_9 (xo_handle_t *VAR_3, xo_state_t VAR_4,
   const char *VAR_5, xo_xof_flags_t VAR_6)
{
    xo_xsf_flags_t VAR_7;

    VAR_3 = FUNC_1(VAR_3);

    switch (VAR_4) {

    case 128:
 FUNC_6(VAR_3, VAR_6, VAR_5);
 break;

    case 129:
 FUNC_5(VAR_3, VAR_6, VAR_5);
 break;

    case 131:
 FUNC_2(VAR_3, VAR_5, 1, 1, 129,
   FUNC_7(VAR_6));
 FUNC_8(VAR_3);
 FUNC_3(VAR_3, VAR_5);
 break;

    case 130:
 VAR_7 = FUNC_0(VAR_3, VAR_0) ? VAR_2 : 0;

 FUNC_2(VAR_3, VAR_5, 1, 1, 128,
   VAR_1 | VAR_7 | FUNC_7(VAR_6));
 FUNC_4(VAR_3, VAR_5);
 break;
    }
}
