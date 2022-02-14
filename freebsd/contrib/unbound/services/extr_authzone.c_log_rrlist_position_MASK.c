
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
typedef int typestr ;
struct auth_chunk {int len; int data; } ;
typedef int sldns_buffer ;
typedef int buf ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int *) ;
 int FUNC_1 (int *,char*) ;
 size_t FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (int *,size_t) ;
 int FUNC_6 (int ,char*,int) ;
 int FUNC_7 (int ,char*,char const*,int,char*,char*) ;

__attribute__((used)) static void
FUNC_8(const char* VAR_1, struct auth_chunk* VAR_2,
 uint8_t* VAR_3, uint16_t VAR_4, size_t VAR_5)
{
 sldns_buffer VAR_6;
 size_t VAR_7;
 uint8_t VAR_8[256];
 char VAR_9[256];
 char VAR_10[32];
 FUNC_4(&VAR_6, VAR_2->data, VAR_2->len);
 FUNC_5(&VAR_6, (size_t)(VAR_3 -
  FUNC_3(&VAR_6)));
 if((VAR_7=FUNC_2(&VAR_6)) == 0) return;
 if(VAR_7 >= sizeof(VAR_8)) return;
 FUNC_0(&VAR_6, VAR_8, VAR_3);
 FUNC_1(VAR_8, VAR_9);
 (void)FUNC_6(VAR_4, VAR_10, sizeof(VAR_10));
 FUNC_7(VAR_0, "%s at[%d] %s %s", VAR_1, (int)VAR_5,
  VAR_9, VAR_10);
}
