
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct msrmap {scalar_t__ num; } ;
struct TYPE_6__ {int start; } ;
typedef TYPE_1__ jsmntok_t ;


 int FUNC_0 (char*,TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (char*,TYPE_1__*,scalar_t__) ;
 struct msrmap* VAR_0 ;
 int FUNC_3 (char*,int ,int ,char*) ;
 int VAR_1 ;

__attribute__((used)) static struct msrmap *FUNC_4(char *VAR_2, jsmntok_t *VAR_3)
{
 jsmntok_t VAR_4 = *VAR_3;
 static bool VAR_5;
 int VAR_6;

 FUNC_0(VAR_2, &VAR_4);
 for (VAR_6 = 0; VAR_0[VAR_6].num; VAR_6++)
  if (FUNC_2(VAR_2, &VAR_4, VAR_0[VAR_6].num))
   return &VAR_0[VAR_6];
 if (!VAR_5) {
  VAR_5 = 1;
  FUNC_3("%s: Unknown MSR in event file %.*s\n", VAR_1,
   FUNC_1(VAR_3), VAR_2 + VAR_3->start);
 }
 return ((void*)0);
}
