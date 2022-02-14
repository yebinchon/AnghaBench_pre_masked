
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int pattern_t ;
struct TYPE_4__ {int len; } ;
typedef TYPE_1__ line_t ;


 long FUNC_0 (long,int ) ;
 long VAR_0 ;
 long FUNC_1 (long,int ) ;
 int FUNC_2 (char*,int ) ;
 int VAR_1 ;
 long VAR_2 ;
 char* VAR_3 ;
 TYPE_1__* FUNC_3 (long) ;
 char* FUNC_4 (TYPE_1__*) ;
 scalar_t__ VAR_4 ;
 int FUNC_5 (int *,char*,int ,int *,int ) ;

long
FUNC_6(pattern_t *VAR_5, int VAR_6)
{
 char *VAR_7;
 long VAR_8 = VAR_2;
 line_t *VAR_9;

 if (!VAR_5) return VAR_0;
 do {
        if ((VAR_8 = VAR_6 ? FUNC_1(VAR_8, VAR_1) : FUNC_0(VAR_8, VAR_1))) {
   VAR_9 = FUNC_3(VAR_8);
   if ((VAR_7 = FUNC_4(VAR_9)) == ((void*)0))
    return VAR_0;
   if (VAR_4)
    FUNC_2(VAR_7, VAR_9->len);
   if (!FUNC_5(VAR_5, VAR_7, 0, ((void*)0), 0))
    return VAR_8;
        }
 } while (VAR_8 != VAR_2);
 VAR_3 = "no match";
 return VAR_0;
}
