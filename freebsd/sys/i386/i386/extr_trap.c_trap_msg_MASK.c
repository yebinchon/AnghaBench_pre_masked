
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* msg; } ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static const char *
FUNC_1(int VAR_1)
{
 const char *VAR_2;
 static const char VAR_3[] = "UNKNOWN";

 VAR_2 = ((void*)0);
 if (VAR_1 < FUNC_0(VAR_0))
  VAR_2 = VAR_0[VAR_1].msg;
 if (VAR_2 == ((void*)0))
  VAR_2 = VAR_3;
 return (VAR_2);
}
