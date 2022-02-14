
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int ino_t ;
struct TYPE_2__ {int c_type; int c_count; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int ) ;

void
FUNC_3(char *VAR_3, int VAR_4, ino_t VAR_5)
{
 int VAR_6;
 char *VAR_7;

 VAR_2.c_type = VAR_4;
 VAR_2.c_count = FUNC_0(VAR_1 * sizeof(char), VAR_0);
 FUNC_1(VAR_5);
 for (VAR_6 = 0, VAR_7 = VAR_3; VAR_6 < VAR_2.c_count; VAR_6++, VAR_7 += VAR_0)
  FUNC_2(VAR_7, 0);
}
