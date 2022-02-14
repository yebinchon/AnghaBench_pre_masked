
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xo_xff_flags_t ;
typedef int xo_handle_t ;
typedef scalar_t__ ssize_t ;


 int VAR_0 ;
 int FUNC_0 (int *,char const*,scalar_t__,int ) ;
 int FUNC_1 (int *,int *,char const*,scalar_t__,int ) ;

__attribute__((used)) static inline void
FUNC_2 (xo_handle_t *VAR_1, unsigned VAR_2,
        const char *VAR_3, ssize_t VAR_4,
        const char *VAR_5, ssize_t VAR_6, xo_xff_flags_t VAR_7)
{
    if (VAR_2)
 VAR_7 |= VAR_0;

    if (VAR_4 == 0)
 FUNC_1(VAR_1, ((void*)0), VAR_5, VAR_6, VAR_7);
    else if (!VAR_2)
 FUNC_0(VAR_1, VAR_3, VAR_4, VAR_7);
}
