
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ len; int bp; } ;
typedef int CHAR_T ;
typedef TYPE_1__ ARGS ;


 int FUNC_0 (int ,int *,scalar_t__) ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static int
FUNC_2(ARGS *VAR_0, CHAR_T *VAR_1)
{
 return VAR_0->len <= FUNC_1(VAR_1) && !FUNC_0(VAR_0->bp, VAR_1, VAR_0->len);
}
