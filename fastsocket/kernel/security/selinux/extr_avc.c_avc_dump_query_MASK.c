
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef char* u32 ;
typedef int u16 ;
struct audit_buffer {int dummy; } ;
struct TYPE_3__ {char* name; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct audit_buffer*,char*,char*) ;
 int FUNC_3 (char*) ;
 TYPE_1__* VAR_0 ;
 int FUNC_4 (char*,char**,char**) ;

__attribute__((used)) static void FUNC_5(struct audit_buffer *VAR_1, u32 VAR_2, u32 VAR_3, u16 VAR_4)
{
 int VAR_5;
 char *VAR_6;
 u32 VAR_7;

 VAR_5 = FUNC_4(VAR_2, &VAR_6, &VAR_7);
 if (VAR_5)
  FUNC_2(VAR_1, "ssid=%d", VAR_2);
 else {
  FUNC_2(VAR_1, "scontext=%s", VAR_6);
  FUNC_3(VAR_6);
 }

 VAR_5 = FUNC_4(VAR_3, &VAR_6, &VAR_7);
 if (VAR_5)
  FUNC_2(VAR_1, " tsid=%d", VAR_3);
 else {
  FUNC_2(VAR_1, " tcontext=%s", VAR_6);
  FUNC_3(VAR_6);
 }

 FUNC_1(VAR_4 >= FUNC_0(VAR_0));
 FUNC_2(VAR_1, " tclass=%s", VAR_0[VAR_4-1].name);
}
